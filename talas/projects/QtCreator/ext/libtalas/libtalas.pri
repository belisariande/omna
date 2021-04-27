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
#   File: libtalas.pri
#
# Author: $author$
#   Date: 4/23/2021
#
# QtCreator .pri for framework talas Shared Library libtalas
########################################################################

########################################################################
# libtalas

# libtalas TARGET
#
libtalas_TARGET = talas
libtalas_TEMPLATE = lib

# libtalas INCLUDEPATH
#
libtalas_INCLUDEPATH += \
$${talas_INCLUDEPATH} \

# libtalas DEFINES
#
libtalas_DEFINES += \
$${talas_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_TALAS_EXTENSION_MAIN_INSTANCE \

########################################################################
# libtalas OBJECTIVE_HEADERS
#
#libtalas_OBJECTIVE_HEADERS += \
#$${TALAS_SRC}/xos/app/console/talas/main.hh \

# libtalas OBJECTIVE_SOURCES
#
#libtalas_OBJECTIVE_SOURCES += \
#$${TALAS_SRC}/xos/app/console/talas/main.mm \

########################################################################
# libtalas HEADERS
#
libtalas_HEADERS += \
$${NADIR_SRC}/xos/dlibrary/symbol.hpp \
$${NADIR_SRC}/xos/dlibrary/os/os.hpp \
$${NADIR_SRC}/xos/dlibrary/apple/osx/symbol.hpp \
$${NADIR_SRC}/xos/dlibrary/os/symbol.hpp \
$${NADIR_SRC}/xos/dlibrary/interface.hpp \
$${NADIR_SRC}/xos/dlibrary/main.hpp \
$${NADIR_SRC}/xos/dlibrary/apple/osx/main.hpp \
$${NADIR_SRC}/xos/dlibrary/os/main.hpp \
\
$${TALAS_SRC}/xos/app/console/talas/extension/main.hpp \

# libtalas SOURCES
#
libtalas_SOURCES += \
$${NADIR_SRC}/xos/dlibrary/os/os.cpp \
$${NADIR_SRC}/xos/dlibrary/os/symbol.cpp \
$${NADIR_SRC}/xos/dlibrary/interface.cpp \
\
$${TALAS_SRC}/xos/app/console/talas/extension/main.cpp \

########################################################################
# libtalas FRAMEWORKS
#
libtalas_FRAMEWORKS += \
$${talas_FRAMEWORKS} \

# libtalas LIBS
#
libtalas_LIBS += \
$${talas_LIBS} \
