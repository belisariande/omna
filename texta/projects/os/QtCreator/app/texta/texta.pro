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
#   File: texta.pro
#
# Author: $author$
#   Date: 4/15/2021
#
# QtCreator .pro file for texta executable texta
########################################################################
include(../../../../../../build/QtCreator/texta.pri)
include(../../../../../build/QtCreator/texta.pri)
include(../../../../QtCreator/texta.pri)
include(../../texta.pri)
include(../../../../QtCreator/app/texta/texta.pri)

TARGET = $${texta_exe_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${texta_exe_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${texta_exe_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${texta_exe_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${texta_exe_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${texta_exe_HEADERS} \
$${texta_exe_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${texta_exe_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${texta_exe_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${texta_exe_LIBS} \
$${FRAMEWORKS} \


