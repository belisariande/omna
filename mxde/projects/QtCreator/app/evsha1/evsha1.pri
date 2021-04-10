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
#   File: evsha1.pri
#
# Author: $author$
#   Date: 4/9/2021
#
# QtCreator .pri file for xde executable evsha1
########################################################################

########################################################################
# evsha1

# evsha1 TARGET
#
evsha1_TARGET = evsha1

# evsha1 INCLUDEPATH
#
evsha1_INCLUDEPATH += \
$${evx_INCLUDEPATH} \

# evsha1 DEFINES
#
evsha1_DEFINES += \
$${evx_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
_CCEVSHA1ALLOCATOR_INSTANCE \
_CEV2SHA1MAIN_INSTANCE \

########################################################################
# evsha1 OBJECTIVE_HEADERS
#
#evsha1_OBJECTIVE_HEADERS += \
#$${XDE_SRC}/xos/app/console/evsha1/main.hh \

# evsha1 OBJECTIVE_SOURCES
#
#evsha1_OBJECTIVE_SOURCES += \
#$${XDE_SRC}/xos/app/console/evsha1/main.mm \

########################################################################
# evsha1 HEADERS
#
evsha1_HEADERS += \
$${EVX_SRC}/evcrypto/evsha1allocator.hpp \
$${EVX_SRC}/evcrypto/cevsha1allocator.hpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevsha1allocator.hpp \
\
$${EVX_SRC}/evcrypto/cev2cryptomain.hpp \
$${EVX_SRC}/evcrypto/cev2hashmain.hpp \
$${EVX_SRC}/evcrypto/cevcryptomain.hpp \
$${EVX_SRC}/evcrypto/cevhashmain.hpp \
$${EVX_SRC}/app/evsha1/cev2sha1main.hpp \
$${EVX_SRC}/app/evsha1/evsha1main.hpp \
$${EVX_SRC}/os/evmain.hpp \

# evsha1 SOURCES
#
evsha1_SOURCES += \
$${EVX_SRC}/evcrypto/evsha1allocator.cpp \
$${EVX_SRC}/evcrypto/cevsha1allocator.hpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevsha1allocator.cpp \
\
$${EVX_SRC}/evcrypto/cev2cryptomain.cpp \
$${EVX_SRC}/evcrypto/cev2hashmain.cpp \
$${EVX_SRC}/app/evsha1/cev2sha1main.cpp \
$${EVX_SRC}/os/evmain.cpp \

########################################################################
# evsha1 FRAMEWORKS
#
evsha1_FRAMEWORKS += \
$${ev2crypto_FRAMEWORKS} \

# evsha1 LIBS
#
evsha1_LIBS += \
$${ev2crypto_LIBS} \


