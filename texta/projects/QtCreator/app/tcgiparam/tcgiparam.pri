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
#   File: tcgiparam.pri
#
# Author: $author$
#   Date: 4/16/2021
#
# QtCreator .pri file for texta executable tcgiparam
########################################################################

########################################################################
# tcgiparam

# tcgiparam TARGET
#
tcgiparam_TARGET = tcgiparam

# tcgiparam INCLUDEPATH
#
tcgiparam_INCLUDEPATH += \
$${texta_INCLUDEPATH} \

# tcgiparam DEFINES
#
tcgiparam_DEFINES += \
$${texta_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_TCGIPARAM_MAIN_INSTANCE \

########################################################################
# tcgiparam OBJECTIVE_HEADERS
#
#tcgiparam_OBJECTIVE_HEADERS += \
#$${TEXTA_SRC}/xos/app/console/tcgiparam/main.hh \

# tcgiparam OBJECTIVE_SOURCES
#
#tcgiparam_OBJECTIVE_SOURCES += \
#$${TEXTA_SRC}/xos/app/console/tcgiparam/main.mm \

########################################################################
# tcgiparam HEADERS
#
tcgiparam_HEADERS += \
$${XDE_SRC}/capp/ccgi/cgi/ccgimain.hxx \
$${XDE_SRC}/clib/ccgi/cgi.hxx \

# tcgiparam SOURCES
#
tcgiparam_SOURCES += \
$${XDE_SRC}/capp/ccgi/cgi/ccgimain.cxx \
$${XDE_SRC}/clib/ccgi/cgi.cxx \

########################################################################
# tcgiparam FRAMEWORKS
#
tcgiparam_FRAMEWORKS += \
$${texta_FRAMEWORKS} \

# tcgiparam LIBS
#
tcgiparam_LIBS += \
$${texta_LIBS} \
$${xde_LIBS} \
$${xdedebug_LIBS} \
