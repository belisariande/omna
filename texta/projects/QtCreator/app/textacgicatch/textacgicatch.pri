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
#   File: textacgicatch.pri
#
# Author: $author$
#   Date: 4/15/2021
#
# QtCreator .pri file for texta executable textacgicatch
########################################################################

########################################################################
# textacgicatch

# textacgicatch TARGET
#
textacgicatch_TARGET = textacgicatch

# textacgicatch INCLUDEPATH
#
textacgicatch_INCLUDEPATH += \
$${texta_INCLUDEPATH} \

# textacgicatch DEFINES
#
textacgicatch_DEFINES += \
$${texta_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_CGICATCH_MAIN_INSTANCE \

########################################################################
# textacgicatch OBJECTIVE_HEADERS
#
#textacgicatch_OBJECTIVE_HEADERS += \
#$${TEXTA_SRC}/xos/app/console/textacgicatch/main.hh \

# textacgicatch OBJECTIVE_SOURCES
#
#textacgicatch_OBJECTIVE_SOURCES += \
#$${TEXTA_SRC}/xos/app/console/textacgicatch/main.mm \

########################################################################
# textacgicatch HEADERS
#
textacgicatch_HEADERS += \
$${NADIR_SRC}/xos/base/string.hpp \
$${NADIR_SRC}/xos/io/crt/file/attached.hpp \
$${NADIR_SRC}/xos/io/string/reader.hpp \
\
$${STARA_SRC}/xos/protocol/xttp/protocol/name.hpp \
$${STARA_SRC}/xos/protocol/xttp/protocol/version.hpp \
$${STARA_SRC}/xos/protocol/xttp/protocol/identifier.hpp \
$${STARA_SRC}/xos/protocol/xttp/message/part.hpp \
$${STARA_SRC}/xos/protocol/xttp/content/reader.hpp \
\
$${STARA_SRC}/xos/protocol/http/form/content.hpp \
$${STARA_SRC}/xos/protocol/http/form/field.hpp \
$${STARA_SRC}/xos/protocol/http/form/fields.hpp \
$${STARA_SRC}/xos/protocol/http/url/encoded/reader.hpp \
$${STARA_SRC}/xos/protocol/http/url/encoded/form/content/type.hpp \
\
$${STARA_SRC}/xos/protocol/http/cgi/name.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/version.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/identifier.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/configure/which.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/configure/name.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/configure/value.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/configure/setting.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/configure/values.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/environment/variable/which.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/environment/variable/name.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/environment/variable/value.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/environment/variable/values.hpp \
$${STARA_SRC}/xos/protocol/http/cgi/environment/variable/setting.hpp \
\
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/main.hpp \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/catcher/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/catcher/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# textacgicatch SOURCES
#
textacgicatch_SOURCES += \
$${NADIR_SRC}/xos/io/string/reader.cpp \
$${NADIR_SRC}/xos/io/crt/file/attached.cpp \
\
$${STARA_SRC}/xos/protocol/http/form/content.cpp \
$${STARA_SRC}/xos/protocol/http/form/field.cpp \
$${STARA_SRC}/xos/protocol/http/form/fields.cpp \
$${STARA_SRC}/xos/protocol/http/url/encoded/form/content/type.cpp \
\
$${STARA_SRC}/xos/protocol/http/cgi/version.cpp \
$${STARA_SRC}/xos/protocol/http/cgi/identifier.cpp \
$${STARA_SRC}/xos/protocol/http/cgi/configure/which.cpp \
$${STARA_SRC}/xos/protocol/http/cgi/configure/name.cpp \
$${STARA_SRC}/xos/protocol/http/cgi/configure/value.cpp \
$${STARA_SRC}/xos/protocol/http/cgi/configure/setting.cpp \
$${STARA_SRC}/xos/protocol/http/cgi/configure/values.cpp \
\
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/catcher/main_opt.cpp \
$${STARA_SRC}/xos/app/console/network/protocol/http/cgi/catcher/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# textacgicatch FRAMEWORKS
#
textacgicatch_FRAMEWORKS += \
$${texta_FRAMEWORKS} \

# textacgicatch LIBS
#
textacgicatch_LIBS += \
$${texta_LIBS} \
