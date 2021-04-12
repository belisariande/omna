########################################################################
# Copyright (c) 1988-2021 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: xde.pri
#
# Author: $author$
#   Date: 4/11/2021
#
# Os specific QtCreator .pri file for xde
########################################################################
UNAME = $$system(uname)

contains(UNAME,Darwin) {
XDE_OS = macosx
} else {
contains(UNAME,Linux) {
XDE_OS = linux
} else {
XDE_OS = windows
} # contains(UNAME,Linux)
} # contains(UNAME,Darwin)

contains(BUILD_OS,XDE_OS) {
XDE_BUILD = $${XDE_OS}
} else {
XDE_BUILD = $${BUILD_OS}
} # contains(BUILD_OS,XDE_OS)

contains(BUILD_CPP_VERSION,10) {
CONFIG += c++0x
} else {
contains(BUILD_CPP_VERSION,98|03|11|14|17) {
CONFIG += c++$${BUILD_CPP_VERSION}
} else {
} # contains(BUILD_CPP_VERSION,98|03|11|14|17)
} # contains(BUILD_CPP_VERSION,10)

contains(XDE_OS,macosx) {
} else {
contains(XDE_OS,linux) {
QMAKE_CXXFLAGS += -fpermissive
} else {
contains(XDE_OS,windows) {
} else {
} # contains(XDE_OS,windows)
} # contains(XDE_OS,linux)
} # contains(XDE_OS,macosx)

MEDUSAXDE_OS = XDE_OS
MEDUSAXDE_BUILD = XDE_BUILD

TXDE_OS = XDE_OS
TXDE_BUILD = XDE_BUILD

########################################################################
# xde

# xde INCLUDEPATH
#
xde_INCLUDEPATH += \

# xde DEFINES
#
xde_DEFINES += \

# xde LIBS
#
xde_LIBS += \
$${build_xde_LIBS} \

contains(XDE_OS,macosx|linux) {
xde_LIBS += \
-lpthread \
-ldl
} else {
} # contains(XDE_OS,macosx|linux)

contains(XDE_OS,linux) {
xde_LIBS += \
-lrt
} else {
} # contains(XDE_OS,linux)

########################################################################
# medusaxde

# medusaxde INCLUDEPATH
#
medusaxde_INCLUDEPATH += \
$${build_libxslt_INCLUDEPATH} \

# medusaxde DEFINES
#
medusaxde_DEFINES += \
$${build_libxslt_DEFINES} \

# medusaxde LIBS
#
medusaxde_LIBS += \
$${build_libxslt_LIBS} \

contains(MEDUSAXDE_OS,macosx|linux) {
medusaxde_LIBS += \
-lpthread \
-ldl
} else {
} # contains(MEDUSAXDE_OS,macosx|linux)

contains(MEDUSAXDE_OS,linux) {
medusaxde_LIBS += \
-lrt
} else {
} # contains(MEDUSAXDE_OS,linux)

########################################################################
# txde

# txde INCLUDEPATH
#
txde_INCLUDEPATH += \

# txde DEFINES
#
txde_DEFINES += \

# txde LIBS
#
txde_LIBS += \
$${build_txde_LIBS} \

contains(TXDE_OS,macosx|linux) {
txde_LIBS += \
-lpthread \
-ldl
} else {
} # contains(TXDE_OS,macosx|linux)

contains(TXDE_OS,linux) {
txde_LIBS += \
-lrt
} else {
} # contains(TXDE_OS,linux)
