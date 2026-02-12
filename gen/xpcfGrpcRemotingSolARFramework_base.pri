## remove Qt dependencies
QT       -= core gui
CONFIG -= qt

## global definitions : target lib name, version
FRAMEWORK = $$TARGET
VERSION=1.6.0

DEFINES += MYVERSION=$${VERSION}
DEFINES += XPCFVERSION=\\\"$${VERSION}\\\"
DEFINES += TEMPLATE_LIBRARY
CONFIG += c++1z

include(findremakenrules.pri)

CONFIG -= static
CONFIG += shared

CONFIG(debug,debug|release) {
    DEFINES += _DEBUG=1
    DEFINES += DEBUG=1
    DEFINES += ENABLE_PROXY_TIMERS=1
    DEFINES += ENABLE_SERVER_TIMERS=1
 }
CONFIG(release,debug|release) {
    DEFINES += _NDEBUG=1
    DEFINES += NDEBUG=1
}

DEPENDENCIESCONFIG = shared recursive install_recurse

## Configuration for Visual Studio to install binaries and dependencies. Work also for QT Creator by replacing QMAKE_INSTALL
PROJECTCONFIG = QTVS

#NOTE : CONFIG as staticlib or sharedlib, DEPENDENCIESCONFIG as staticlib or sharedlib, QMAKE_TARGET.arch and PROJECTDEPLOYDIR MUST BE DEFINED BEFORE templatelibconfig.pri inclusion
include ($${QMAKE_REMAKEN_RULES_ROOT}/templatelibconfig.pri)

include (xpcfGrpcRemotingSolARFramework.pri)


unix:!android {
    QMAKE_CXXFLAGS += -Wignored-qualifiers
#    QMAKE_LINK=clang++
#    QMAKE_CXX = clang++
}


linux:!android {
    LIBS += -ldl
    }

macx {
    DEFINES += _MACOS_TARGET_
    QMAKE_MAC_SDK= macosx
    QMAKE_CFLAGS += -mmacosx-version-min=10.7 -std=c11 #-x objective-c++
    QMAKE_CXXFLAGS += -mmacosx-version-min=10.7 -std=c11 -std=c++11 -O3 -fPIC#-x objective-c++
    QMAKE_LFLAGS += -mmacosx-version-min=10.7 -v -lstdc++
    LIBS += -lstdc++ -lc -lpthread
    INCLUDEPATH += /usr/local/include
    LIBS += -L/usr/local/lib -lprotobuf
}

win32 {

    DEFINES += WIN64 UNICODE _UNICODE
    QMAKE_COMPILER_DEFINES += _WIN64
    QMAKE_CXXFLAGS += -wd4250 -wd4251 -wd4244 -wd4275 /Od
}

android {
    QMAKE_LFLAGS += -nostdlib++
}

OTHER_FILES += \n    packagedependencies.txt

OTHER_FILES += \n    xpcfGrpcRemotingSolARFramework.xml

#NOTE : Must be placed at the end of the .pro
include ($${QMAKE_REMAKEN_RULES_ROOT}/remaken_install_target.pri)
