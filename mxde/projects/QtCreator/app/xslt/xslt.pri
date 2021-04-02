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
#   File: xslt.pri
#
# Author: $author$
#   Date: 4/2/2021
#
# QtCreator .pri file for xde executable xslt
########################################################################

########################################################################
# xslt

# xslt TARGET
#
xslt_TARGET = xslt

# xslt INCLUDEPATH
#
xslt_INCLUDEPATH += \
$${medusaxde_INCLUDEPATH} \

# xslt DEFINES
#
xslt_DEFINES += \
$${medusaxde_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \

########################################################################
# xslt OBJECTIVE_HEADERS
#
#xslt_OBJECTIVE_HEADERS += \
#$${XDE_SRC}/xos/app/console/xslt/main.hh \

# xslt OBJECTIVE_SOURCES
#
#xslt_OBJECTIVE_SOURCES += \
#$${XDE_SRC}/xos/app/console/xslt/main.mm \

########################################################################
# xslt HEADERS
#
xslt_HEADERS += \
$${XDE_SRC}/capp/xsl/cxslmain.hxx \

# xslt SOURCES
#
xslt_SOURCES += \
$${XDE_SRC}/capp/xsl/cxslmain.cxx \
$${XDE_SRC}/clib/cos/argmain.cxx \

########################################################################
# xslt FRAMEWORKS
#
xslt_FRAMEWORKS += \
$${medusaxde_FRAMEWORKS} \

# xslt LIBS
#
xslt_LIBS += \
$${medusaxde_LIBS} \

########################################################################
# NO Qt
QT -= gui core
