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
#   File: evuuid.pri
#
# Author: $author$
#   Date: 4/8/2021
#
# QtCreator .pri file for xde executable evuuid
########################################################################

########################################################################
# evuuid

# evuuid TARGET
#
evuuid_TARGET = evuuid

# evuuid INCLUDEPATH
#
evuuid_INCLUDEPATH += \
$${evx_INCLUDEPATH} \

# evuuid DEFINES
#
evuuid_DEFINES += \
$${evx_DEFINES} \

#DEFAULT_LOGGING_LEVELS_ERROR \
#XOS_APP_CONSOLE_EVUUID_MAIN_INSTANCE \

########################################################################
# evuuid OBJECTIVE_HEADERS
#
#evuuid_OBJECTIVE_HEADERS += \
#$${XDE_SRC}/xos/app/console/evuuid/main.hh \

# evuuid OBJECTIVE_SOURCES
#
#evuuid_OBJECTIVE_SOURCES += \
#$${XDE_SRC}/xos/app/console/evuuid/main.mm \

########################################################################
# evuuid HEADERS
#
evuuid_HEADERS += \
$${EVX_SRC}/evcrypto/cevmd5allocator.hpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevmd5allocator.hpp \
\
$${EVX_SRC}/os/evuuid.hpp \
$${EVX_SRC}/os/cevuuid.hpp \
$${EVX_SRC}/os/cevmacaddress.hpp \
$${EVX_SRC}/app/evuuid/cevuuidmain.hpp \

# evuuid SOURCES
#
evuuid_SOURCES += \
$${EVX_SRC}/evcrypto/cevmd5allocator.cpp \
$${EVX_SRC}/ev2c/ev2crypto/ccevmd5allocator.cpp \
\
$${EVX_SRC}/os/evuuid.cpp \
$${EVX_SRC}/os/cevuuid.cpp \
$${EVX_SRC}/os/cevmacaddress.cpp \
$${EVX_SRC}/os/evmain.cpp \
$${EVX_SRC}/app/evuuid/cevuuidmain.cpp \

########################################################################
# evuuid FRAMEWORKS
#
evuuid_FRAMEWORKS += \
$${ev2crypto_FRAMEWORKS} \

# evuuid LIBS
#
evuuid_LIBS += \
$${ev2crypto_LIBS} \
