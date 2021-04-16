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
#   File: t.pri
#
# Author: $author$
#   Date: 4/15/2021
#
# QtCreator .pri file for texta executable t
########################################################################

########################################################################
# t

# t TARGET
#
t_TARGET = t

# t INCLUDEPATH
#
t_INCLUDEPATH += \
$${texta_INCLUDEPATH} \

# t DEFINES
#
t_DEFINES += \
$${texta_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_T_MAIN_INSTANCE \

########################################################################
# t OBJECTIVE_HEADERS
#
#t_OBJECTIVE_HEADERS += \
#$${TEXTA_SRC}/xos/app/console/t/main.hh \

# t OBJECTIVE_SOURCES
#
#t_OBJECTIVE_SOURCES += \
#$${TEXTA_SRC}/xos/app/console/t/main.mm \

########################################################################
# t HEADERS
#
t_HEADERS += \
$${XDE_SRC}/clib/ct/ctmain.hxx \
$${XDE_SRC}/clib/cos/argmain.hxx \

# t SOURCES
#
t_SOURCES += \
$${XDE_SRC}/clib/ct/ctmain.cxx \
$${XDE_SRC}/clib/cos/argmain.cxx \
$${xde_t_function_SOURCES} \

########################################################################
# t FRAMEWORKS
#
t_FRAMEWORKS += \
$${texta_FRAMEWORKS} \

# t LIBS
#
t_LIBS += \
$${texta_LIBS} \
$${xde_LIBS} \
$${xdedebug_LIBS} \


