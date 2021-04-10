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
#   File: evmd5.pri
#
# Author: $author$
#   Date: 4/8/2021
#
# QtCreator .pri file for xde executable evmd5
########################################################################

########################################################################
# evmd5

# evmd5 TARGET
#
evmd5_TARGET = evmd5

# evmd5 INCLUDEPATH
#
evmd5_INCLUDEPATH += \
$${evx_INCLUDEPATH} \

# evmd5 DEFINES
#
evmd5_DEFINES += \
$${evx_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
_CEV2MD5MAIN_INSTANCE \

########################################################################
# evmd5 OBJECTIVE_HEADERS
#
#evmd5_OBJECTIVE_HEADERS += \
#$${XDE_SRC}/xos/app/console/evmd5/main.hh \

# evmd5 OBJECTIVE_SOURCES
#
#evmd5_OBJECTIVE_SOURCES += \
#$${XDE_SRC}/xos/app/console/evmd5/main.mm \

########################################################################
# evmd5 HEADERS
#
evmd5_HEADERS += \
$${EVX_SRC}/evcrypto/evmd5allocator.hpp \
$${EVX_SRC}/evcrypto/cevmd5allocator.hpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevmd5allocator.hpp \
\
$${EVX_SRC}/evcrypto/cev2cryptomain.hpp \
$${EVX_SRC}/evcrypto/cev2hashmain.hpp \
$${EVX_SRC}/evcrypto/cevcryptomain.hpp \
$${EVX_SRC}/evcrypto/cevhashmain.hpp \
$${EVX_SRC}/app/evmd5/cev2md5main.hpp \
$${EVX_SRC}/app/evmd5/cevmd5main.hpp \
$${EVX_SRC}/os/evmain.hpp \

# evmd5 SOURCES
#
evmd5_SOURCES += \
$${EVX_SRC}/evcrypto/evmd5allocator.cpp \
$${EVX_SRC}/evcrypto/cevmd5allocator.cpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevmd5allocator.cpp \
\
$${EVX_SRC}/evcrypto/cev2cryptomain.cpp \
$${EVX_SRC}/evcrypto/cev2hashmain.cpp \
$${EVX_SRC}/app/evmd5/cev2md5main.cpp \
$${EVX_SRC}/os/evmain.cpp \

########################################################################
# evmd5 FRAMEWORKS
#
evmd5_FRAMEWORKS += \
$${ev2crypto_FRAMEWORKS} \

# evmd5 LIBS
#
evmd5_LIBS += \
$${ev2crypto_LIBS} \


