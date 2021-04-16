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
#   File: libxdedebug.pri
#
# Author: $author$
#   Date: 4/15/2021
#
# QtCreator .pri file for texta library libxdedebug
########################################################################

########################################################################
# libxdedebug

# libxdedebug TARGET
#
libxdedebug_TARGET = xdedebug
libxdedebug_TEMPLATE = lib
libxdedebug_CONFIG += staticlib

# libxdedebug INCLUDEPATH
#
libxdedebug_INCLUDEPATH += \
$${texta_INCLUDEPATH} \

# libxdedebug DEFINES
#
libxdedebug_DEFINES += \
$${texta_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \

########################################################################
# libxdedebug OBJECTIVE_HEADERS
#
#libxdedebug_OBJECTIVE_HEADERS += \
#$${TEXTA_SRC}/xos/app/console/xdedebug/main.hh \

# libxdedebug OBJECTIVE_SOURCES
#
#libxdedebug_OBJECTIVE_SOURCES += \
#$${TEXTA_SRC}/xos/app/console/xdedebug/main.mm \

########################################################################
# libxdedebug HEADERS
#
libxdedebug_HEADERS += \
$${XDE_SRC}/clib/cos/cdebug_printf.h \

# libxdedebug SOURCES
#
libxdedebug_SOURCES += \
$${XDE_SRC}/clib/cos/cdebug_printf.c \

########################################################################



