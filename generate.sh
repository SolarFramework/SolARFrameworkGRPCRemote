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


DEFAULT_DATABASE_DIR="../build-SolARFramework-Desktop_Qt_5_15_2_GCC_64bit-Release"

export PATH=$XPCF_MODULE_ROOT/grpc/1.37.1/bin/x86_64/shared/release:$PATH
# echo "PATH=$PATH"

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
    echo "   -d, --database-dir: directory of SolAR framework generated database file (default: $DEFAULT_DATABASE_DIR)"
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
         -d | --database-dir)
            DATABASE_DIR=$VALUE
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

# TODO generate compilation database for the SolAR Framework

$XPCF_MODULE_ROOT/xpcf_grpc_gen/1.0.0/bin/x86_64/static/release/xpcf_grpc_gen -n SolARFramework -v 0.10.0 -r SolARBuild@github -u https://github.com/SolarFramework/SolARFramework/releases/download --database_dir $DATABASE_DIR --std c++1z --remove_comments_in_macro -g protobuf -o .

