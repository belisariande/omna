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
#   File: tcgicatch.pro
#
# Author: $author$
#   Date: 4/15/2021
#
# QtCreator .pro file for texta executable tcgicatch
########################################################################
include(../../../../../../build/QtCreator/texta.pri)
include(../../../../../build/QtCreator/texta.pri)
include(../../../../QtCreator/texta.pri)
include(../../texta.pri)
include(../../../../QtCreator/app/tcgicatch/tcgicatch.pri)

TARGET = $${tcgicatch_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${tcgicatch_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${tcgicatch_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${tcgicatch_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${tcgicatch_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${tcgicatch_HEADERS} \
$${tcgicatch_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${tcgicatch_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${tcgicatch_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${tcgicatch_LIBS} \
$${FRAMEWORKS} \


