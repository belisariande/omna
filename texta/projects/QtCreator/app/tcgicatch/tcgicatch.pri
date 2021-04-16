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
#   File: tcgicatch.pri
#
# Author: $author$
#   Date: 4/15/2021
#
# QtCreator .pri file for texta executable tcgicatch
########################################################################

########################################################################
# tcgicatch

# tcgicatch TARGET
#
tcgicatch_TARGET = tcgicatch

# tcgicatch INCLUDEPATH
#
tcgicatch_INCLUDEPATH += \
$${texta_INCLUDEPATH} \

# tcgicatch DEFINES
#
tcgicatch_DEFINES += \
$${texta_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_TCGICATCH_MAIN_INSTANCE \

########################################################################
# tcgicatch OBJECTIVE_HEADERS
#
#tcgicatch_OBJECTIVE_HEADERS += \
#$${TEXTA_SRC}/xos/app/console/tcgicatch/main.hh \

# tcgicatch OBJECTIVE_SOURCES
#
#tcgicatch_OBJECTIVE_SOURCES += \
#$${TEXTA_SRC}/xos/app/console/tcgicatch/main.mm \

########################################################################
# tcgicatch HEADERS
#
tcgicatch_HEADERS += \
$${XDE_SRC}/capp/ccgi/cgicatch/ccgicatch.hxx \
$${XDE_SRC}/clib/ccgi/cgi.hxx \

# tcgicatch SOURCES
#
tcgicatch_SOURCES += \
$${XDE_SRC}/capp/ccgi/cgicatch/ccgicatch.cxx \
$${XDE_SRC}/clib/ccgi/cgi.cxx \

########################################################################
# tcgicatch FRAMEWORKS
#
tcgicatch_FRAMEWORKS += \
$${texta_FRAMEWORKS} \

# tcgicatch LIBS
#
tcgicatch_LIBS += \
$${texta_LIBS} \
$${xde_LIBS} \
$${xdedebug_LIBS} \


