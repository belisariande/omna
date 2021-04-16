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
#   File: textacgiparam.pri
#
# Author: $author$
#   Date: 4/16/2021
#
# QtCreator .pri file for texta executable textacgiparam
########################################################################

########################################################################
# textacgiparam

# textacgiparam TARGET
#
textacgiparam_TARGET = textacgiparam

# textacgiparam INCLUDEPATH
#
textacgiparam_INCLUDEPATH += \
$${texta_INCLUDEPATH} \

# textacgiparam DEFINES
#
textacgiparam_DEFINES += \
$${texta_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_CGI_MAIN_INSTANCE \

########################################################################
# textacgiparam OBJECTIVE_HEADERS
#
#textacgiparam_OBJECTIVE_HEADERS += \
#$${TEXTA_SRC}/xos/app/console/textacgiparam/main.hh \

# textacgiparam OBJECTIVE_SOURCES
#
#textacgiparam_OBJECTIVE_SOURCES += \
#$${TEXTA_SRC}/xos/app/console/textacgiparam/main.mm \

########################################################################
# textacgiparam HEADERS
#
textacgiparam_HEADERS += \
$${STARA_SRC}/xos/protocol/http/url/encoded/reader.hpp \
$${STARA_SRC}/xos/protocol/http/url/encoded/form/content/type.hpp \
\
$${STARA_SRC}/xos/protocol/http/form/content.hpp \
$${STARA_SRC}/xos/protocol/http/form/field.hpp \
$${STARA_SRC}/xos/protocol/http/form/fields.hpp \
\
$${STARA_SRC}/xos/protocol/http/cgi/identifier.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/environment/variable/name.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/environment/variable/value.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/environment/variable/setting.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/environment/variable/values.hpp \
\
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# textacgiparam SOURCES
#
textacgiparam_SOURCES += \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/main_opt.cpp \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# textacgiparam FRAMEWORKS
#
textacgiparam_FRAMEWORKS += \
$${texta_FRAMEWORKS} \

# textacgiparam LIBS
#
textacgiparam_LIBS += \
$${texta_LIBS} \
