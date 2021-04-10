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
#   File: libev2crypto.pri
#
# Author: $author$
#   Date: 4/8/2021
#
# QtCreator .pri file for xde library libev2crypto
########################################################################

########################################################################
# libev2crypto

# libev2crypto TARGET
#
libev2crypto_TARGET = ev2crypto
libev2crypto_TEMPLATE = lib
libev2crypto_CONFIG += staticlib

# libev2crypto INCLUDEPATH
#
libev2crypto_INCLUDEPATH += \
$${evx_INCLUDEPATH} \

# libev2crypto DEFINES
#
libev2crypto_DEFINES += \
$${evx_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \

########################################################################
# libev2crypto OBJECTIVE_HEADERS
#
#libev2crypto_OBJECTIVE_HEADERS += \
#$${XDE_SRC}/xos/app/console/ev2crypto/main.hh \

# libev2crypto OBJECTIVE_SOURCES
#
#libev2crypto_OBJECTIVE_SOURCES += \
#$${XDE_SRC}/xos/app/console/ev2crypto/main.mm \

########################################################################
# libev2crypto HEADERS
#
libev2crypto_HEADERS += \
$${EVX_SRC}/ev2c/crypto/ccipher.hxx \
$${EVX_SRC}/ev2c/crypto/chash.hxx \
$${EVX_SRC}/ev2c/crypto/ccrypto.hxx \
$${EVX_SRC}/ev2c/crypto/caes.hxx \
$${EVX_SRC}/ev2c/crypto/cdes3.hxx \
$${EVX_SRC}/ev2c/crypto/cmd5.hxx \
$${EVX_SRC}/ev2c/crypto/csha1.hxx \
\
$${EVX_SRC}/ev2c/ev2crypto/ccevcipher.hpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevcrypto.hpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevhash.hpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevaes.hpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevdes3.hpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevmd5.hpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevsha1.hpp \

# libev2crypto SOURCES
#
libev2crypto_SOURCES += \
$${EVX_SRC}/ev2c/crypto/ccipher.cxx \
$${EVX_SRC}/ev2c/crypto/chash.cxx \
$${EVX_SRC}/ev2c/crypto/ccrypto.cxx \
$${EVX_SRC}/ev2c/crypto/caes.cxx \
$${EVX_SRC}/ev2c/crypto/cdes3.cxx \
$${EVX_SRC}/ev2c/crypto/cmd5.cxx \
$${EVX_SRC}/ev2c/crypto/csha1.cxx \
\
$${EVX_SRC}/ev2c/ev2crypto/ccevcipher.cpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevcrypto.cpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevhash.cpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevaes.cpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevdes3.cpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevmd5.cpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevsha1.cpp \

########################################################################
