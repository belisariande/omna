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
#   File: cxxlcgicatch.pri
#
# Author: $author$
#   Date: 4/16/2021
#
# QtCreator .pri file for texta executable cxxlcgicatch
########################################################################

########################################################################
# cxxlcgicatch

# cxxlcgicatch TARGET
#
cxxlcgicatch_TARGET = cxxlcgicatch

# cxxlcgicatch INCLUDEPATH
#
cxxlcgicatch_INCLUDEPATH += \
$${texta_INCLUDEPATH} \

# cxxlcgicatch DEFINES
#
cxxlcgicatch_DEFINES += \
$${texta_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_CXXLCGICATCH_MAIN_INSTANCE \

########################################################################
# cxxlcgicatch OBJECTIVE_HEADERS
#
#cxxlcgicatch_OBJECTIVE_HEADERS += \
#$${TEXTA_SRC}/xos/app/console/cxxlcgicatch/main.hh \

# cxxlcgicatch OBJECTIVE_SOURCES
#
#cxxlcgicatch_OBJECTIVE_SOURCES += \
#$${TEXTA_SRC}/xos/app/console/cxxlcgicatch/main.mm \

########################################################################
# cxxlcgicatch HEADERS
#
cxxlcgicatch_HEADERS += \
$${XDE_SRC}/capp/ccgi/cgicatch/ccgicatch.hxx \
$${XDE_SRC}/clib/ccgi/cgi.hxx \

# cxxlcgicatch SOURCES
#
cxxlcgicatch_SOURCES += \
$${XDE_SRC}/capp/ccgi/cgicatch/ccgicatch.cxx \
$${XDE_SRC}/clib/ccgi/cgi.cxx \

########################################################################
# cxxlcgicatch FRAMEWORKS
#
cxxlcgicatch_FRAMEWORKS += \
$${texta_FRAMEWORKS} \

# cxxlcgicatch LIBS
#
cxxlcgicatch_LIBS += \
$${texta_LIBS} \
$${xde_LIBS} \
$${xdedebug_LIBS} \
