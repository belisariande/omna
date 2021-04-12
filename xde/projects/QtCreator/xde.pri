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
# QtCreator .pri file for xde
########################################################################

OTHER_PKG = ../../../../../..
OTHER_PRJ = ../../../../..
OTHER_BLD = ..

THIRDPARTY_NAME = thirdparty
THIRDPARTY_PKG = $${OTHER_PKG}/$${THIRDPARTY_NAME}
THIRDPARTY_PRJ = $${OTHER_PRJ}/$${THIRDPARTY_NAME}
THIRDPARTY_SRC = $${OTHER_PRJ}/source/$${THIRDPARTY_NAME}

########################################################################
# xde
XDE_NAME = xde
XDE_SOURCE = source/$${XDE_NAME}

XDE_PKG = ../../../../..
XDE_BLD = ../..

XDE_PRJ = $${XDE_PKG}
XDE_BIN = $${XDE_BLD}/bin
XDE_LIB = $${XDE_BLD}/lib
XDE_SRC = $${XDE_PKG}/$${XDE_SOURCE}

# xde BUILD_CONFIG
#
CONFIG(debug, debug|release) {
BUILD_CONFIG = Debug
xde_DEFINES += DEBUG_BUILD
} else {
BUILD_CONFIG = Release
xde_DEFINES += RELEASE_BUILD
}

# xde INCLUDEPATH
#
xde_INCLUDEPATH += \
$${XDE_SRC}/clib/ccgi \
$${XDE_SRC}/clib/cxttp \
$${XDE_SRC}/clib/cyy \
$${XDE_SRC}/clib/cxsl \
$${XDE_SRC}/clib/ct \
\
$${XDE_SRC}/clib/csocket \
$${XDE_SRC}/clib/cfs \
$${XDE_SRC}/clib/cos/cwin \
$${XDE_SRC}/clib/cos/cunix \
$${XDE_SRC}/clib/cos/cplatform \
$${XDE_SRC}/clib/cos \
\
$${XDE_SRC}/clib/cbase \
$${XDE_SRC}/clib \
$${XDE_SRC} \
$${build_xde_INCLUDEPATH} \

# xde DEFINES
#
xde_DEFINES += \
DB_PRINTF=platform_db_printf \
DB_VPRINTF=platform_db_vprintf \
$${build_xde_DEFINES} \

# xde LIBS
#
xde_LIBS += \
-L$${XDE_LIB}/lib$${XDE_NAME} \
-l$${XDE_NAME} \

# xde t function SOURCES
#
xde_t_function_SOURCES += \
$${XDE_SRC}/clib/ct/ctfunctions.cxx \
$${XDE_SRC}/clib/ct/ctfilefunctions.cxx \
$${XDE_SRC}/clib/ct/ctdatefunctions.cxx \
$${XDE_SRC}/clib/ct/ctconditionalfunctions.cxx \
$${XDE_SRC}/clib/ct/ctstringfunctions.cxx \

########################################################################
# medusaxde
MEDUSAXDE_NAME = medusaxde
MEDUSAXDE_SOURCE = source/$${MEDUSAXDE_NAME}

MEDUSAXDE_PKG = ../../../../..
MEDUSAXDE_BLD = ../..

MEDUSAXDE_PRJ = $${MEDUSAXDE_PKG}
MEDUSAXDE_BIN = $${MEDUSAXDE_BLD}/bin
MEDUSAXDE_LIB = $${MEDUSAXDE_BLD}/lib
MEDUSAXDE_SRC = $${MEDUSAXDE_PKG}/$${MEDUSAXDE_SOURCE}

# medusaxde BUILD_CONFIG
#
CONFIG(debug, debug|release) {
medusaxde_DEFINES += DEBUG_BUILD
} else {
medusaxde_DEFINES += RELEASE_BUILD
}

# medusaxde INCLUDEPATH
#
medusaxde_INCLUDEPATH += \
$${xde_INCLUDEPATH} \
$${MEDUSAXDE_SRC}/clib/clibc/clibxml2/clibxslt \
$${MEDUSAXDE_SRC}/clib/cxml/cxslt \
$${MEDUSAXDE_SRC}/clib/cxml \
$${MEDUSAXDE_SRC}/clib/cxttp/chttp/ccgi \
$${MEDUSAXDE_SRC}/clib/cxttp/chttp \
$${MEDUSAXDE_SRC}/clib/cxttp \
$${MEDUSAXDE_SRC}/clib/cos \
$${MEDUSAXDE_SRC}/clib/cbase \
$${MEDUSAXDE_SRC}/clib \
$${MEDUSAXDE_SRC} \
$${build_medusaxde_INCLUDEPATH} \

# medusaxde DEFINES
#
medusaxde_DEFINES += \
$${xde_DEFINES} \
$${build_medusaxde_DEFINES} \

# medusaxde LIBS
#
medusaxde_LIBS += \
-L$${MEDUSAXDE_LIB}/lib$${MEDUSAXDE_NAME} \
-l$${MEDUSAXDE_NAME} \
$${xde_LIBS} \

########################################################################
# txde
TXDE_NAME = txde
TXDE_SOURCE = source

TXDE_PKG = ../../../../..
TXDE_BLD = ../..

TXDE_PRJ = $${TXDE_PKG}
TXDE_BIN = $${TXDE_BLD}/bin
TXDE_LIB = $${TXDE_BLD}/lib
TXDE_SRC = $${TXDE_PKG}/$${TXDE_SOURCE}

# txde BUILD_CONFIG
#
CONFIG(debug, debug|release) {
txde_DEFINES += DEBUG_BUILD
} else {
txde_DEFINES += RELEASE_BUILD
}

# txde INCLUDEPATH
#
txde_INCLUDEPATH += \
$${TXDE_SRC} \
$${build_txde_INCLUDEPATH} \

# txde DEFINES
#
txde_DEFINES += \
$${build_txde_DEFINES} \

# txde LIBS
#
_txde_LIBS += \
-L$${TXDE_LIB}/lib$${TXDE_NAME} \
-l$${TXDE_NAME} \

########################################################################
