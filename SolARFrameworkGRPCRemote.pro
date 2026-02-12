## remove Qt dependencies
QT       -= core gui
CONFIG -= qt

QMAKE_PROJECT_DEPTH = 0

## global definitions : target lib name, version
INSTALLSUBDIR = SolARBuild
TARGET = SolARFrameworkGRPCRemote
FRAMEWORK = $$TARGET
VERSION=1.6.0

DEFINES += MYVERSION=$${VERSION}
DEFINES += TEMPLATE_LIBRARY
CONFIG += c++1z

CONFIG += externaldeps

include(gen/findremakenrules.pri)

CONFIG(debug,debug|release) {
    DEFINES += _DEBUG=1
    DEFINES += DEBUG=1
}
CONFIG(release,debug|release) {
    DEFINES += _NDEBUG=1
    DEFINES += NDEBUG=1
}

DEPENDENCIESCONFIG = static install_recurse

## Configuration for Visual Studio to install binaries and dependencies. Work also for QT Creator by replacing QMAKE_INSTALL
PROJECTCONFIG = QTVS

#NOTE : CONFIG as staticlib or sharedlib, DEPENDENCIESCONFIG as staticlib or sharedlib, QMAKE_TARGET.arch and PROJECTDEPLOYDIR MUST BE DEFINED BEFORE templatelibconfig.pri inclusion
include ($${QMAKE_REMAKEN_RULES_ROOT}/templatelibconfig.pri)

include (gen/xpcfGrpcRemotingSolARFramework.pri)

INCLUDEPATH += $${PWD}/gen/interfaces

unix {
    # Avoids adding install steps manually. To be commented to have a better control over them.
    QMAKE_POST_LINK += "$(MAKE) install"
    QMAKE_CXXFLAGS += -Wignored-qualifiers
}

linux {
    QMAKE_CXXFLAGS += -Wno-attributes
    QMAKE_LFLAGS += -ldl
    LIBS += -ldl
    LIBS += -L/home/linuxbrew/.linuxbrew/lib # temporary fix caused by grpc with -lre2 ... without -L in grpc.pc
}

win32 {

    DEFINES += WIN64 UNICODE _UNICODE
    QMAKE_COMPILER_DEFINES += _WIN64
    QMAKE_CXXFLAGS += -wd4250 -wd4251 -wd4244 -wd4275 /Od
}

OTHER_FILES += \n    packagedependencies.txt

OTHER_FILES += \n

#NOTE : Must be placed at the end of the .pro
include ($${QMAKE_REMAKEN_RULES_ROOT}/remaken_install_target.pri)

DISTFILES += \
    README.md \
    gen/xpcfGrpcRemotingSolARFrameworkClient.xml \
    gen/xpcfGrpcRemotingSolARFrameworkClient_properties.xml \
    gen/xpcfGrpcRemotingSolARFrameworkServer.xml \
    gen/xpcfGrpcRemotingSolARFrameworkServer_properties.xml
