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
#   File: socket.pri
#
# Author: $author$
#   Date: 4/14/2021
#
# QtCreator .pri file for rete executable socket
########################################################################

########################################################################
# socket

# socket TARGET
#
socket_TARGET = socket

# socket INCLUDEPATH
#
socket_INCLUDEPATH += \
$${rete_INCLUDEPATH} \

# socket DEFINES
#
socket_DEFINES += \
$${rete_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_NETWORK_SOCKETS_MAIN_INSTANCE \

########################################################################
# socket OBJECTIVE_HEADERS
#
#socket_OBJECTIVE_HEADERS += \
#$${RETE_SRC}/xos/app/console/socket/main.hh \

# socket OBJECTIVE_SOURCES
#
#socket_OBJECTIVE_SOURCES += \
#$${RETE_SRC}/xos/app/console/socket/main.mm \

########################################################################
# socket HEADERS
#
socket_HEADERS += \
$${RETE_SRC}/xos/app/console/network/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/client/main.hpp \
$${RETE_SRC}/xos/app/console/network/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/server/main.hpp \
\
$${RETE_SRC}/xos/app/console/network/sockets/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/client/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/server/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/main.hpp \
\
$${RETE_SRC}/xos/app/console/os/sockets/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/os/sockets/base/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# socket SOURCES
#
socket_SOURCES += \
$${RETE_SRC}/xos/app/console/network/sockets/main_opt.cpp \
$${RETE_SRC}/xos/app/console/network/sockets/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# socket FRAMEWORKS
#
socket_FRAMEWORKS += \
$${rete_FRAMEWORKS} \

# socket LIBS
#
socket_LIBS += \
$${rete_LIBS} \


