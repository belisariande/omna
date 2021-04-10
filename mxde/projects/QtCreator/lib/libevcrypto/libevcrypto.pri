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
#   File: libevcrypto.pri
#
# Author: $author$
#   Date: 4/8/2021
#
# QtCreator .pri file for xde library libevcrypto
########################################################################

########################################################################
# libevcrypto

# libevcrypto TARGET
#
libevcrypto_TARGET = evcrypto
libevcrypto_TEMPLATE = lib
libevcrypto_CONFIG += staticlib

# libevcrypto INCLUDEPATH
#
libevcrypto_INCLUDEPATH += \
$${evx_INCLUDEPATH} \

# libevcrypto DEFINES
#
libevcrypto_DEFINES += \
$${evx_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \

########################################################################
# libevcrypto OBJECTIVE_HEADERS
#
#libevcrypto_OBJECTIVE_HEADERS += \
#$${XDE_SRC}/xos/app/console/evcrypto/main.hh \

# libevcrypto OBJECTIVE_SOURCES
#
#libevcrypto_OBJECTIVE_SOURCES += \
#$${XDE_SRC}/xos/app/console/evcrypto/main.mm \

########################################################################
# libevcrypto HEADERS
#
libevcrypto_HEADERS += \
$${EVX_SRC}/evcrypto/cevcrypto.hpp \
$${EVX_SRC}/evcrypto/cevcryptoblock.hpp \
$${EVX_SRC}/evcrypto/cevcryptoiv.hpp \
$${EVX_SRC}/evcrypto/cevcryptokey.hpp \
$${EVX_SRC}/evcrypto/cevcryptor.hpp \
$${EVX_SRC}/evcrypto/cevdecryptor.hpp \
$${EVX_SRC}/evcrypto/cevencryptor.hpp \
$${EVX_SRC}/evcrypto/cevhash.hpp \
$${EVX_SRC}/evcrypto/cevmd5.hpp \
$${EVX_SRC}/evcrypto/evmd5.hpp \
$${EVX_SRC}/evcrypto/evmd5allocator.hpp \
$${EVX_SRC}/evcrypto/cevsha1.hpp \
$${EVX_SRC}/evcrypto/evsha1.hpp \
\
$${EVX_SRC}/evcrypto/evcryptoacquirer.hpp \
$${EVX_SRC}/evcrypto/evcryptoallocator.hpp \
$${EVX_SRC}/evcrypto/cevcryptoacquirer.hpp \
$${EVX_SRC}/evcrypto/cevcryptoallocator.hpp \

# libevcrypto SOURCES
#
libevcrypto_SOURCES += \
$${EVX_SRC}/evcrypto/cevcrypto.cpp \
$${EVX_SRC}/evcrypto/cevcryptoblock.cpp \
$${EVX_SRC}/evcrypto/cevcryptoiv.cpp \
$${EVX_SRC}/evcrypto/cevcryptokey.cpp \
$${EVX_SRC}/evcrypto/cevcryptor.cpp \
$${EVX_SRC}/evcrypto/cevdecryptor.cpp \
$${EVX_SRC}/evcrypto/cevencryptor.cpp \
$${EVX_SRC}/evcrypto/cevhash.cpp \
$${EVX_SRC}/evcrypto/cevmd5.cpp \
$${EVX_SRC}/evcrypto/evmd5.cpp \
$${EVX_SRC}/evcrypto/evmd5allocator.cpp \
$${EVX_SRC}/evcrypto/cevsha1.cpp \
$${EVX_SRC}/evcrypto/evsha1.cpp \
\
$${EVX_SRC}/evcrypto/cevcryptoacquirer.cpp \
$${EVX_SRC}/evcrypto/cevcryptoallocator.cpp \
$${EVX_SRC}/evcrypto/evcryptoacquirer.cpp \
$${EVX_SRC}/evcrypto/evcryptoallocator.cpp \

########################################################################



