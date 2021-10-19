#!/bin/bash


export PATH=$XPCF_MODULE_ROOT/grpc/1.37.1/bin/x86_64/shared/release:$PATH

echo "PATH=$PATH"

#TODO generate compilation database for the SolAR Framework

$XPCF_MODULE_ROOT/xpcf_grpc_gen/1.0.0/bin/x86_64/static/release/xpcf_grpc_gen -n SolARFramework -v 0.10.0 -r SolARBuild@github -u https://github.com/SolarFramework/SolARFramework/releases/download --database_dir ~/Dev/SolAR/core/build-SolARFramework-Desktop_Qt_5_15_2_GCC_64bit-Release/ --std c++1z --remove_comments_in_macro -g protobuf -o ~/Dev/SolAR/core/SolARFrameworkGRPCRemote

