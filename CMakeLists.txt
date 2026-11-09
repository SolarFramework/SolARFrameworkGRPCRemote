# CMake build of SolARFrameworkGRPCRemote (generated from SolARFrameworkGRPCRemote.pro, using the builddefs-cmake remaken rules)
cmake_minimum_required(VERSION 3.16)

## global definitions : target name, version
project(SolARFrameworkGRPCRemote VERSION 1.7.0 LANGUAGES CXX)

include(${CMAKE_CURRENT_SOURCE_DIR}/gen/findremakenrules.cmake)
include(RemakenRules)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

## sources
set(SOURCES
    gen/src/IImageSegmentationPipeline_grpcProxy.cpp
    gen/src/IImageSegmentationPipeline_grpcServer.cpp
    gen/src/grpcIImageSegmentationPipelineService.pb.cc
    gen/src/grpcIImageSegmentationPipelineService.grpc.pb.cc
    gen/src/IMapExportImportPipeline_grpcProxy.cpp
    gen/src/IMapExportImportPipeline_grpcServer.cpp
    gen/src/grpcIMapExportImportPipelineService.pb.cc
    gen/src/grpcIMapExportImportPipelineService.grpc.pb.cc
    gen/src/IMapProcessingPipeline_grpcProxy.cpp
    gen/src/IMapProcessingPipeline_grpcServer.cpp
    gen/src/grpcIMapProcessingPipelineService.pb.cc
    gen/src/grpcIMapProcessingPipelineService.grpc.pb.cc
    gen/src/IMapUpdatePipeline_grpcProxy.cpp
    gen/src/IMapUpdatePipeline_grpcServer.cpp
    gen/src/grpcIMapUpdatePipelineService.pb.cc
    gen/src/grpcIMapUpdatePipelineService.grpc.pb.cc
    gen/src/IMappingPipeline_grpcProxy.cpp
    gen/src/IMappingPipeline_grpcServer.cpp
    gen/src/grpcIMappingPipelineService.pb.cc
    gen/src/grpcIMappingPipelineService.grpc.pb.cc
    gen/src/IRelocalizationPipeline_grpcProxy.cpp
    gen/src/IRelocalizationPipeline_grpcServer.cpp
    gen/src/grpcIRelocalizationPipelineService.pb.cc
    gen/src/grpcIRelocalizationPipelineService.grpc.pb.cc
    gen/src/IRelocalizationTrackablePipeline_grpcProxy.cpp
    gen/src/IRelocalizationTrackablePipeline_grpcServer.cpp
    gen/src/grpcIRelocalizationTrackablePipelineService.pb.cc
    gen/src/grpcIRelocalizationTrackablePipelineService.grpc.pb.cc
    gen/src/IClientContextManager_grpcProxy.cpp
    gen/src/IClientContextManager_grpcServer.cpp
    gen/src/grpcIClientContextManagerService.pb.cc
    gen/src/grpcIClientContextManagerService.grpc.pb.cc
    gen/src/IFrontEnd_grpcProxy.cpp
    gen/src/IFrontEnd_grpcServer.cpp
    gen/src/grpcIFrontEndService.pb.cc
    gen/src/grpcIFrontEndService.grpc.pb.cc
    gen/src/IMapsManager_grpcProxy.cpp
    gen/src/IMapsManager_grpcServer.cpp
    gen/src/grpcIMapsManagerService.pb.cc
    gen/src/grpcIMapsManagerService.grpc.pb.cc
    gen/src/IServiceManager_grpcProxy.cpp
    gen/src/IServiceManager_grpcServer.cpp
    gen/src/grpcIServiceManagerService.pb.cc
    gen/src/grpcIServiceManagerService.grpc.pb.cc
    gen/src/xpcfGrpcModuleMain.cpp
)

## headers (for IDEs)
set(HEADERS
    gen/interfaces/IImageSegmentationPipeline_grpcProxy.h
    gen/interfaces/IImageSegmentationPipeline_grpcServer.h
    gen/interfaces/grpcIImageSegmentationPipelineService.pb.h
    gen/interfaces/grpcIImageSegmentationPipelineService.grpc.pb.h
    gen/interfaces/IMapExportImportPipeline_grpcProxy.h
    gen/interfaces/IMapExportImportPipeline_grpcServer.h
    gen/interfaces/grpcIMapExportImportPipelineService.pb.h
    gen/interfaces/grpcIMapExportImportPipelineService.grpc.pb.h
    gen/interfaces/IMapProcessingPipeline_grpcProxy.h
    gen/interfaces/IMapProcessingPipeline_grpcServer.h
    gen/interfaces/grpcIMapProcessingPipelineService.pb.h
    gen/interfaces/grpcIMapProcessingPipelineService.grpc.pb.h
    gen/interfaces/IMapUpdatePipeline_grpcProxy.h
    gen/interfaces/IMapUpdatePipeline_grpcServer.h
    gen/interfaces/grpcIMapUpdatePipelineService.pb.h
    gen/interfaces/grpcIMapUpdatePipelineService.grpc.pb.h
    gen/interfaces/IMappingPipeline_grpcProxy.h
    gen/interfaces/IMappingPipeline_grpcServer.h
    gen/interfaces/grpcIMappingPipelineService.pb.h
    gen/interfaces/grpcIMappingPipelineService.grpc.pb.h
    gen/interfaces/IRelocalizationPipeline_grpcProxy.h
    gen/interfaces/IRelocalizationPipeline_grpcServer.h
    gen/interfaces/grpcIRelocalizationPipelineService.pb.h
    gen/interfaces/grpcIRelocalizationPipelineService.grpc.pb.h
    gen/interfaces/IRelocalizationTrackablePipeline_grpcProxy.h
    gen/interfaces/IRelocalizationTrackablePipeline_grpcServer.h
    gen/interfaces/grpcIRelocalizationTrackablePipelineService.pb.h
    gen/interfaces/grpcIRelocalizationTrackablePipelineService.grpc.pb.h
    gen/interfaces/IClientContextManager_grpcProxy.h
    gen/interfaces/IClientContextManager_grpcServer.h
    gen/interfaces/grpcIClientContextManagerService.pb.h
    gen/interfaces/grpcIClientContextManagerService.grpc.pb.h
    gen/interfaces/IFrontEnd_grpcProxy.h
    gen/interfaces/IFrontEnd_grpcServer.h
    gen/interfaces/grpcIFrontEndService.pb.h
    gen/interfaces/grpcIFrontEndService.grpc.pb.h
    gen/interfaces/IMapsManager_grpcProxy.h
    gen/interfaces/IMapsManager_grpcServer.h
    gen/interfaces/grpcIMapsManagerService.pb.h
    gen/interfaces/grpcIMapsManagerService.grpc.pb.h
    gen/interfaces/IServiceManager_grpcProxy.h
    gen/interfaces/IServiceManager_grpcServer.h
    gen/interfaces/grpcIServiceManagerService.pb.h
    gen/interfaces/grpcIServiceManagerService.grpc.pb.h
    gen/interfaces/xpcfGrpcModuleMain.h
)

add_library(SolARFrameworkGRPCRemote SHARED ${SOURCES} ${HEADERS})

## INCLUDEPATH
target_include_directories(SolARFrameworkGRPCRemote PRIVATE
    .
    gen/interfaces
)

## DEFINES
target_compile_definitions(SolARFrameworkGRPCRemote PRIVATE
    MYVERSION=1.7.0
    TEMPLATE_LIBRARY
    $<$<CONFIG:Debug>:_DEBUG=1>
    $<$<CONFIG:Debug>:DEBUG=1>
    $<$<NOT:$<CONFIG:Debug>>:_NDEBUG=1>
    $<$<NOT:$<CONFIG:Debug>>:NDEBUG=1>
)
if(WIN32)
    target_compile_definitions(SolARFrameworkGRPCRemote PRIVATE
        WIN64
        UNICODE
        _UNICODE
    )
endif()

## QMAKE_CXXFLAGS / QMAKE_CFLAGS
if(UNIX)
    target_compile_options(SolARFrameworkGRPCRemote PRIVATE
        $<$<COMPILE_LANGUAGE:CXX>:-Wignored-qualifiers>
    )
endif()
if(CMAKE_SYSTEM_NAME MATCHES "^(Linux|Android)$")
    target_compile_options(SolARFrameworkGRPCRemote PRIVATE
        $<$<COMPILE_LANGUAGE:CXX>:-Wno-attributes>
    )
endif()
if(WIN32)
    target_compile_options(SolARFrameworkGRPCRemote PRIVATE
        $<$<COMPILE_LANGUAGE:CXX>:-wd4250>
        $<$<COMPILE_LANGUAGE:CXX>:-wd4251>
        $<$<COMPILE_LANGUAGE:CXX>:-wd4244>
        $<$<COMPILE_LANGUAGE:CXX>:-wd4275>
    )
endif()

## LIBS / QMAKE_LFLAGS
if(CMAKE_SYSTEM_NAME MATCHES "^(Linux|Android)$")
    target_link_directories(SolARFrameworkGRPCRemote PRIVATE
        /home/linuxbrew/.linuxbrew/lib
    )
endif()
if(CMAKE_SYSTEM_NAME MATCHES "^(Linux|Android)$")
    target_link_libraries(SolARFrameworkGRPCRemote PRIVATE
        dl
    )
endif()

## remaken rules : dependencies (packagedependencies*.txt), package installation
remaken_target(SolARFrameworkGRPCRemote
    FRAMEWORK SolARFrameworkGRPCRemote
    INSTALLSUBDIR SolARBuild
    DEPENDENCIESCONFIG static install_recurse externaldeps
    INSTALL_AFTER_BUILD)
