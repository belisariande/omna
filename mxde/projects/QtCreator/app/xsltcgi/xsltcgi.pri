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
#   File: xsltcgi.pri
#
# Author: $author$
#   Date: 4/2/2021
#
# QtCreator .pri file for xde executable xsltcgi
########################################################################

########################################################################
# xsltcgi

# xsltcgi TARGET
#
xsltcgi_TARGET = xsltcgi

# xsltcgi INCLUDEPATH
#
xsltcgi_INCLUDEPATH += \
$${medusaxde_INCLUDEPATH} \

# xsltcgi DEFINES
#
xsltcgi_DEFINES += \
$${medusaxde_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \

########################################################################
# xsltcgi OBJECTIVE_HEADERS
#
#xsltcgi_OBJECTIVE_HEADERS += \
#$${XDE_SRC}/xos/app/console/xsltcgi/main.hh \

# xsltcgi OBJECTIVE_SOURCES
#
#xsltcgi_OBJECTIVE_SOURCES += \
#$${XDE_SRC}/xos/app/console/xsltcgi/main.mm \

########################################################################
# xsltcgi HEADERS
#
xsltcgi_HEADERS += \
$${XDE_SRC}/capp/ccgi/xslcgi/cxslcgi.hxx \
$${XDE_SRC}/clib/ccgi/cgi.hxx \
$${xde_t_function_HEADERS} \

# xsltcgi SOURCES
#
xsltcgi_SOURCES += \
$${XDE_SRC}/capp/ccgi/xslcgi/cxslcgi.cxx \
$${XDE_SRC}/clib/ccgi/cgi.cxx \
$${xde_t_function_SOURCES} \

########################################################################
# xsltcgi FRAMEWORKS
#
xsltcgi_FRAMEWORKS += \
$${medusaxde_FRAMEWORKS} \

# xsltcgi LIBS
#
xsltcgi_LIBS += \
$${medusaxde_LIBS} \


