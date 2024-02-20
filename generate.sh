#!/bin/bash
#
# @copyright Copyright (c) 2021 B-com http://www.b-com.com/
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set -e

LIB_TYPE="static"

if [[ $OSTYPE == *"linux"* ]]; then
    XPCF_MODULE_ROOT_OS="linux-gcc"
else
    XPCF_MODULE_ROOT_OS="win-cl-14.1"

fi
DEFAULT_XPCF_MODULE_ROOT="${HOME}/.remaken/packages/$XPCF_MODULE_ROOT_OS"

if [ "$XPCF_MODULE_ROOT" != "" ]
then
    echo "XPCF_MODULE_ROOT env var is defined to $XPCF_MODULE_ROOT"
fi

DEFAULT_VERSION_SOLAR="1.2.0"
DEFAULT_VERSION_XPCF="2.7.0"
DEFAULT_DATABASE_DIR="../build-SolARFramework-Desktop_Qt_6_5_3_GCC_64bit-Release"
DEFAULT_SOLAR_FRAMEWORK_PATH="../SolARFramework"
DEFAULT_MODULE_UUID="a0f522d1-b70e-4d0f-ad78-84e78a9af6bf"
VERBOSE=false

function help()
{
    echo "Generate gRPC stubs and services for SolAR services interfaces"
    echo
    usage
}

function usage()
{
    echo "Usage:"
    echo "`basename "$0"` [<option>=<value> ]+"
    echo "Options:"
    echo "   -x, --xpcf-module-root: path to XPCF modules (default: $DEFAULT_XPCF_MODULE_ROOT)"
    echo "   -f, --framework-path: path to the SolAR Framework project (default: $DEFAULT_SOLAR_FRAMEWORK_PATH)" 
    echo "   -d, --database-dir: directory of SolAR framework generated database file (default: $DEFAULT_DATABASE_DIR)"
    echo "   -sv, --solar-version: version number of the solar framework (default: $DEFAULT_VERSION_SOLAR)"
    echo "   -xv, --xpcf-version: version number of xpcf (default: $DEFAULT_VERSION_XPCF)"
    echo "   -m, --module-uuid: the UUIDto use for the generated GRPC module (default: $DEFAULT_MODULE_UUID)"
    echo "   -v, --verbose: select verbosity mode [true|false] (default: $VERBOSE)"  
}

# Parse args
while [ "$1" != "" ]; do
    PARAM=`echo $1 | awk -F= '{print $1}'`
    VALUE=`echo $1 | awk -F= '{print $2}'`
    case $PARAM in
        -h | --help)
            help
            exit
            ;;
        -x | --xpcf-module-root)
            USER_XPCF_MODULE_ROOT=$VALUE
            ;;
        -f | --framework-path)
            SOLAR_FRAMEWORK_PATH=$VALUE
            ;;
         -d | --database-dir)
            DATABASE_DIR=$VALUE
            ;;
        -sv | --solar-version)
            VERSION_SOLAR=$VALUE
            ;;
        -xc | --xpcf-version)
            VERSION_XPCF=$VALUE
            ;;
        -m | --module-uuid)
            MODULE_UUID=$VALUE
            ;;
        -v | --verbose)
            VERBOSE=$VALUE
            ;;
        *)
            echo "ERROR: unknown parameter '$PARAM'"
            usage
            exit 1
            ;;
    esac
    shift
done

if [ "$USER_XPCF_MODULE_ROOT" != "" ]
then
    if [ "$XPCF_MODULE_ROOT" != "" ]
    then
        echo "XPCF_MODULE_ROOT is overriden by user"
    fi
    XPCF_MODULE_ROOT=$USER_XPCF_MODULE_ROOT
elif [ "$XPCF_MODULE_ROOT" == "" ]
then
    echo "XPCF_MODULE_ROOT not set, using default"
    XPCF_MODULE_ROOT=$DEFAULT_XPCF_MODULE_ROOT
fi
echo "XPCF_MODULE_ROOT=$XPCF_MODULE_ROOT"

if [ "$DATABASE_DIR" == "" ]
then
    echo "DATABASE_DIR not set, using default"
    DATABASE_DIR=$DEFAULT_DATABASE_DIR
fi
echo "DATABASE_DIR=$DATABASE_DIR"

if [ "$VERSION_SOLAR" == "" ]
then
    VERSION_SOLAR=$DEFAULT_VERSION_SOLAR
fi

if [ "$VERSION_XPCF" == "" ]
then
    VERSION_XPCF=$DEFAULT_VERSION_XPCF
fi

if [ "$SOLAR_FRAMEWORK_PATH" == "" ]
then
    SOLAR_FRAMEWORK_PATH=$DEFAULT_SOLAR_FRAMEWORK_PATH
fi

if [ "$MODULE_UUID" == "" ]
then
    MODULE_UUID=$DEFAULT_MODULE_UUID
fi

if [ "$VERBOSE" == "true" ]
then
    set -x
fi

# TODO generate compilation database for the SolAR Framework

if [[ $OSTYPE == *"linux"* ]]; then
   remaken install packagedependencies-xpcf_grpc_gen-linux.txt
else
   remaken install packagedependencies-xpcf_grpc_gen-win.txt
fi

# Hack: attempt to get rid of message:
# "/usr/lib/x86_64-linux-gnu/libstdc++.so.6: version `GLIBCXX_3.4.26' not found" -> need to have a recent libstdc++ installed
# If this does not work, use path to existing gcc >= 8 on your machine or install one
# look at /usr/lib/x86_64-linux-gnu/ or /home/linuxbrew/.linuxbrew/Cellar/gcc/

# Workaround bug with -isystem and compilation database
# https://github.com/b-com-software-basis/builddefs-qmake/issues/13
# https://github.com/b-com-software-basis/xpcf/issues/20
sed -i "s/-I-isystem/-I/g" `realpath $DATABASE_DIR`/compile_commands.json
sed -i "s/-isystem/-I/g" `realpath $DATABASE_DIR`/compile_commands.json

$XPCF_MODULE_ROOT/xpcf_grpc_gen/${VERSION_XPCF}/bin/x86_64/$LIB_TYPE/release/xpcf_grpc_gen \
        --module_uuid $MODULE_UUID \
        --name SolARFramework \
        --project_version $VERSION_SOLAR \
        --module_uuid $MODULE_UUID \
        --repository SolARBuild@github \
        --url https://github.com/SolarFramework/SolARFramework/releases/download \
        --database_dir `realpath $DATABASE_DIR` \
        --std c++1z \
        --remove_comments_in_macro \
        --generator protobuf \
        --interfaces_folder ${SOLAR_FRAMEWORK_PATH}/interfaces/ \
        --output .

# TODO: fix bug of absolute path in header files
# https://github.com/b-com-software-basis/xpcf/issues/11
SOLAR_FRAMEWORK_PATH=`realpath $SOLAR_FRAMEWORK_PATH`
SUBST_PATTERN="${SOLAR_FRAMEWORK_PATH//\//\\\/}\/interfaces\/"
find . -name "*.h" -type f | xargs sed -i.bak "s/$SUBST_PATTERN//g"
find . -name "*.h.bak" -type f | xargs rm

# TODO: fix bug that produces erroneous packagedependencies.txt
# https://github.com/b-com-software-basis/xpcf/issues/12
git checkout packagedependencies.txt