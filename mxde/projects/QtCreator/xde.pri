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
#   Date: 4/1/2021
#
# QtCreator .pri file for xde
########################################################################

THIS_PKG = ../../../../..
OTHER_PKG = ../../../../../..
OTHER_PRJ = $${THIS_PKG}
OTHER_BLD = ..

THIRDPARTY_NAME = thirdparty
THIRDPARTY_PKG = $${OTHER_PKG}/$${THIRDPARTY_NAME}
THIRDPARTY_PRJ = $${OTHER_PRJ}/$${THIRDPARTY_NAME}
THIRDPARTY_SRC = $${OTHER_PRJ}/source/$${THIRDPARTY_NAME}

########################################################################
# xde
XDE_NAME = xde
XDE_SOURCE = source

XDE_PKG = ../../../../..
XDE_BLD = ../..

XDE_PRJ = $${XDE_PKG}
XDE_BIN = $${XDE_BLD}/bin
XDE_LIB = $${XDE_BLD}/lib
XDE_SRC = $${XDE_PKG}/$${XDE_SOURCE}/xde

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
$${XDE_SRC}/clib/ct/ctcrypto \
$${XDE_SRC}/clib/ct \
$${XDE_SRC}/clib/ccrypto \
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

_xde_INCLUDEPATH += \
$${xos_INCLUDEPATH} \
$${xev_INCLUDEPATH} \
$${medusade_INCLUDEPATH} \
$${medusaxde_INCLUDEPATH} \
$${build_xde_INCLUDEPATH} \

# xde DEFINES
#
xde_DEFINES += \
DB_PRINTF=platform_db_printf \

_xde_DEFINES += \
$${medusaxde_DEFINES} \
$${medusade_DEFINES} \
$${xev_DEFINES} \
$${xos_DEFINES} \
$${build_xde_DEFINES} \

# xde LIBS
#
xde_LIBS += \
-L$${XDE_LIB}/lib$${XDE_NAME} \
-l$${XDE_NAME} \

########################################################################
# xde crypto HEADERS
#
xde_crypto_HEADERS += \
$${XDE_SRC}/clib/ccrypto/ccryptobase.hxx \
$${XDE_SRC}/clib/ccrypto/ccryptohash.hxx \
$${XDE_SRC}/clib/ccrypto/ccryptomd5.hxx \
$${XDE_SRC}/clib/ccrypto/ccryptosha1.hxx \
$${XDE_SRC}/clib/ccrypto/ccryptosha256.hxx \
$${XDE_SRC}/clib/ccrypto/ccryptosha512.hxx \
$${XDE_SRC}/clib/ccrypto/cmac.hxx \
$${XDE_SRC}/clib/ccrypto/cuuid.hxx \

# xde crypto SOURCES
#
xde_crypto_SOURCES += \
$${XDE_SRC}/clib/ccrypto/ccryptobase.cxx \
$${XDE_SRC}/clib/ccrypto/ccryptohash.cxx \
$${XDE_SRC}/clib/ccrypto/ccryptomd5.cxx \
$${XDE_SRC}/clib/ccrypto/ccryptosha1.cxx \
$${XDE_SRC}/clib/ccrypto/ccryptosha256.cxx \
$${XDE_SRC}/clib/ccrypto/ccryptosha512.cxx \
$${XDE_SRC}/clib/ccrypto/cmac.cxx \
$${XDE_SRC}/clib/ccrypto/cuuid.cxx \

########################################################################
# xde t crypto function HEADERS
#
xde_t_crypto_function_HEADERS += \
$${xde_crypto_HEADERS} \
$${XDE_SRC}/clib/ct/ctcrypto/ctcryptohashfunction.hxx \
$${XDE_SRC}/clib/ct/ctcrypto/ctmd5function.hxx \
$${XDE_SRC}/clib/ct/ctcrypto/ctsha1function.hxx \
$${XDE_SRC}/clib/ct/ctcrypto/ctsha256function.hxx \
$${XDE_SRC}/clib/ct/ctcrypto/ctsha512function.hxx \
$${XDE_SRC}/clib/ct/ctcrypto/ctmacfunction.hxx \
$${XDE_SRC}/clib/ct/ctcrypto/ctuuidfunction.hxx \

# xde t crypto function SOURCES
#
xde_t_crypto_function_SOURCES += \
$${xde_crypto_SOURCES} \
$${XDE_SRC}/clib/ct/ctcrypto/ctcryptohashfunction.cxx \
$${XDE_SRC}/clib/ct/ctcrypto/ctmd5function.cxx \
$${XDE_SRC}/clib/ct/ctcrypto/ctsha1function.cxx \
$${XDE_SRC}/clib/ct/ctcrypto/ctsha256function.cxx \
$${XDE_SRC}/clib/ct/ctcrypto/ctsha512function.cxx \
$${XDE_SRC}/clib/ct/ctcrypto/ctmacfunction.cxx \
$${XDE_SRC}/clib/ct/ctcrypto/ctuuidfunction.cxx \

########################################################################
# xde t string function HEADERS
#
xde_t_string_function_HEADERS += \
$${XDE_SRC}/clib/ct/ctstring/ctparsefunction.hxx \
$${XDE_SRC}/clib/ct/ctstring/ctleftparsefunction.hxx \
$${XDE_SRC}/clib/ct/ctstring/ctrightparsefunction.hxx \

# xde t string function SOURCES
#
xde_t_string_function_SOURCES += \
$${XDE_SRC}/clib/ct/ctstring/ctparsefunction.cxx \
$${XDE_SRC}/clib/ct/ctstring/ctleftparsefunction.cxx \
$${XDE_SRC}/clib/ct/ctstring/ctrightparsefunction.cxx \

########################################################################
# xde t reflect function HEADERS
#
xde_t_reflect_function_HEADERS += \
$${XDE_SRC}/clib/ct/ctreflect/ctfunctionfunction.hxx \

# xde t reflect function SOURCES
#
xde_t_reflect_function_SOURCES += \
$${XDE_SRC}/clib/ct/ctreflect/ctfunctionfunction.cxx \

########################################################################
# xde t function HEADERS
#
xde_t_function_HEADERS += \
$${XDE_SRC}/clib/ct/ctfunctions.hxx \
$${XDE_SRC}/clib/ct/ctfilefunctions.hxx \
$${XDE_SRC}/clib/ct/ctdatefunctions.hxx \
$${XDE_SRC}/clib/ct/ctconditionalfunctions.hxx \
$${XDE_SRC}/clib/ct/ctstringfunctions.hxx \
$${xde_t_string_function_HEADERS} \
$${xde_t_reflect_function_HEADERS} \

# xde t function SOURCES
#
xde_t_function_SOURCES += \
$${XDE_SRC}/clib/ct/ctfunctions.cxx \
$${XDE_SRC}/clib/ct/ctfilefunctions.cxx \
$${XDE_SRC}/clib/ct/ctdatefunctions.cxx \
$${XDE_SRC}/clib/ct/ctconditionalfunctions.cxx \
$${XDE_SRC}/clib/ct/ctstringfunctions.cxx \
$${xde_t_string_function_SOURCES} \
$${xde_t_reflect_function_SOURCES} \

########################################################################
# medusaxde
MEDUSAXDE_NAME = medusaxde
MEDUSAXDE_SOURCE = source/$${MEDUSAXDE_NAME}

MEDUSAXDE_PKG = $${THIS_PKG}
MEDUSAXDE_PRJ = $${MEDUSAXDE_PKG}
MEDUSAXDE_SRC = $${MEDUSAXDE_PKG}/$${MEDUSAXDE_SOURCE}
MEDUSAXDE_LIB = $${XDE_LIB}

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
$${MEDUSAXDE_SRC}/clib/cos/cnetwork \
$${MEDUSAXDE_SRC}/clib/cos \
$${MEDUSAXDE_SRC}/clib/cbase \
$${MEDUSAXDE_SRC}/clib/cplatform \
$${MEDUSAXDE_SRC}/clib \
$${MEDUSAXDE_SRC} \

# medusaxde DEFINES
#
CONFIG(debug, debug|release) {
medusaxde_DEFINES += DEBUG_BUILD
} else {
medusaxde_DEFINES += RELEASE_BUILD
}

# medusaxde LIBS
#
medusaxde_LIBS += \
-L$${MEDUSAXDE_LIB}/lib$${MEDUSAXDE_NAME} \
-l$${MEDUSAXDE_NAME} \
$${xde_LIBS} \

########################################################################
# medusade
MEDUSADE_NAME = medusade
MEDUSADE_SOURCE = source/$${MEDUSADE_NAME}

MEDUSADE_PKG = $${THIS_PKG}
MEDUSADE_PRJ = $${MEDUSADE_PKG}
MEDUSADE_SRC = $${MEDUSADE_PKG}/$${MEDUSADE_SOURCE}
MEDUSADE_LIB = $${XDE_LIB}

# medusade INCLUDEPATH
#
medusade_INCLUDEPATH += \
$${MEDUSADE_SRC} \
$${xde_INCLUDEPATH} \

# medusade DEFINES
#
CONFIG(debug, debug|release) {
medusade_DEFINES += DEBUG_BUILD
} else {
medusade_DEFINES += RELEASE_BUILD
}

# medusade LIBS
#
medusade_LIBS += \
$${xde_LIBS} \

########################################################################
# evx
EVX_NAME = ev
XEV_NAME = x$${EVX_NAME}
EVX_SOURCE = source/$${XEV_NAME}

EVX_PKG = ../../../../..
EVX_BLD = ../..

EVX_PRJ = $${EVX_PKG}
EVX_BIN = $${EVX_BLD}/bin
EVX_LIB = $${EVX_BLD}/lib
EVX_SRC = $${EVX_PKG}/$${EVX_SOURCE}

# evx INCLUDEPATH
#
evx_INCLUDEPATH += \
$${EVX_SRC}/ev2c/ev2crypto \
$${EVX_SRC}/ev2c/crypto \
$${EVX_SRC}/ev2c/mpint/bn \
$${EVX_SRC}/ev2c \
$${EVX_SRC}/evcrypto \
$${EVX_SRC}/evc \
$${EVX_SRC}/os/evdebug \
$${EVX_SRC}/os/evx \
$${EVX_SRC}/os \
$${EVX_SRC}/base \
$${EVX_SRC} \

# evx DEFINES
#
evx_DEFINES += \

# evx LIBS
#
evx_LIBS += \
-L$${EVX_LIB}/lib$${EVX_NAME} \
-l$${EVX_NAME} \

# ev2crypto LIBS
#
ev2crypto_LIBS += \
-L$${EVX_LIB}/lib$${EVX_NAME}crypto \
-l$${EVX_NAME}crypto \
-L$${EVX_LIB}/lib$${EVX_NAME}2crypto \
-l$${EVX_NAME}2crypto \
$${evx_LIBS} \

########################################################################
