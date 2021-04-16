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
#   File: cxxlcgicatch.pro
#
# Author: $author$
#   Date: 4/16/2021
#
# QtCreator .pro file for texta executable cxxlcgicatch
########################################################################
include(../../../../../../build/QtCreator/texta.pri)
include(../../../../../build/QtCreator/texta.pri)
include(../../../../QtCreator/texta.pri)
include(../../texta.pri)
include(../../../../QtCreator/app/cxxlcgicatch/cxxlcgicatch.pri)

TARGET = $${cxxlcgicatch_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${cxxlcgicatch_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${cxxlcgicatch_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${cxxlcgicatch_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${cxxlcgicatch_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${cxxlcgicatch_HEADERS} \
$${cxxlcgicatch_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${cxxlcgicatch_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${cxxlcgicatch_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${cxxlcgicatch_LIBS} \
$${FRAMEWORKS} \


