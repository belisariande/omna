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
#   File: libev.pri
#
# Author: $author$
#   Date: 4/7/2021
#
# QtCreator .pri file for xde library libev
########################################################################

########################################################################
# libev

# libev TARGET
#
libev_TARGET = ev
libev_TEMPLATE = lib
libev_CONFIG += staticlib

# libev INCLUDEPATH
#
libev_INCLUDEPATH += \
$${evx_INCLUDEPATH} \

# libev DEFINES
#
libev_DEFINES += \
$${evx_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \

########################################################################
# libev OBJECTIVE_HEADERS
#
#libev_OBJECTIVE_HEADERS += \
#$${XDE_SRC}/xos/app/console/ev/main.hh \

# libev OBJECTIVE_SOURCES
#
#libev_OBJECTIVE_SOURCES += \
#$${XDE_SRC}/xos/app/console/ev/main.mm \

########################################################################
# libev HEADERS
#
libev_HEADERS += \
$${EVX_SRC}/base/cevbase.hpp \
$${EVX_SRC}/os/cevmutex.hpp \
$${EVX_SRC}/os/cevsemaphore.hpp \
$${EVX_SRC}/os/cevdatetime.hpp \
$${EVX_SRC}/os/cevsystemtime.hpp \
$${EVX_SRC}/os/cevsystemdate.hpp \
$${EVX_SRC}/os/cevcharfile.hpp \
$${EVX_SRC}/os/evfiletime.hpp \
$${EVX_SRC}/os/cevfiletime.hpp \
$${EVX_SRC}/os/cevfilepath.hpp \
$${EVX_SRC}/os/cevfilepathwriter.hpp \
$${EVX_SRC}/os/cevfilepathstring.hpp \
$${EVX_SRC}/os/cevfilesystementry.hpp \
$${EVX_SRC}/os/cevfilesystementryfound.hpp \
$${EVX_SRC}/os/cevfiledirectoryentry.hpp \
$${EVX_SRC}/os/cevfiledirectory.hpp \
$${EVX_SRC}/os/cevuid.hpp \
$${EVX_SRC}/os/cevgid.hpp \
$${EVX_SRC}/os/cevpid.hpp \
$${EVX_SRC}/os/cevpasswd.hpp \
$${EVX_SRC}/os/cevmainarg.hpp \
$${EVX_SRC}/os/cevmain.hpp \
$${EVX_SRC}/os/cevsocket.hpp \

contains(EVX_OS,macosx|linux) {
libev_HEADERS += \
$${EVX_SRC}/os/unix/cevunixsystemtime.hpp \
$${EVX_SRC}/os/unix/cevunixfiletime.hpp \
$${EVX_SRC}/os/unix/cevunixfilesystem.hpp 
} else {
} # contains(EVX_OS,macosx|linux)

libev_HEADERS += \
$${EVX_SRC}/os/evdebug/evdebug.h \

# libev SOURCES
#
libev_SOURCES += \
$${EVX_SRC}/base/cevbase.cpp \
$${EVX_SRC}/os/cevmutex.cpp \
$${EVX_SRC}/os/cevsemaphore.cpp \
$${EVX_SRC}/os/cevdatetime.cpp \
$${EVX_SRC}/os/cevsystemtime.cpp \
$${EVX_SRC}/os/cevsystemdate.cpp \
$${EVX_SRC}/os/cevcharfile.cpp \
$${EVX_SRC}/os/evfiletime.cpp \
$${EVX_SRC}/os/cevfiletime.cpp \
$${EVX_SRC}/os/cevfilepath.cpp \
$${EVX_SRC}/os/cevfilepathwriter.cpp \
$${EVX_SRC}/os/cevfilepathstring.cpp \
$${EVX_SRC}/os/cevfilesystementry.cpp \
$${EVX_SRC}/os/cevfilesystementryfound.cpp \
$${EVX_SRC}/os/cevfiledirectoryentry.cpp \
$${EVX_SRC}/os/cevfiledirectory.cpp \
$${EVX_SRC}/os/cevuid.cpp \
$${EVX_SRC}/os/cevgid.cpp \
$${EVX_SRC}/os/cevpid.cpp \
$${EVX_SRC}/os/cevpasswd.cpp \
$${EVX_SRC}/os/cevmainarg.cpp \
$${EVX_SRC}/os/cevmain.cpp \
$${EVX_SRC}/os/cevsocket.cpp \

contains(EVX_OS,macosx|linux) {
libev_SOURCES += \
$${EVX_SRC}/os/unix/cevunixsystemtime.cpp \
$${EVX_SRC}/os/unix/cevunixfiletime.cpp \
$${EVX_SRC}/os/unix/cevunixfilesystem.cpp 
} else {
} # contains(EVX_OS,macosx|linux)

libev_SOURCES += \
$${EVX_SRC}/os/evdebug/evdebug.c \

########################################################################



