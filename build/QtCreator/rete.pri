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
#   File: rete.pri
#
# Author: $author$
#   Date: 4/13/2021
#
# Host specific QtCreator build .pri file for rete
########################################################################
UNAME = $$system(uname)

contains(UNAME,Darwin) {
DARWIN_VERSION = $$system(sw_vers -productVersion)
} else {
contains(UNAME,Linux) {
LINUX_VERSION = $$system(uname -r)
} else {
contains(UNAME,Windows) {
WINDOWS_VERSION = $$system(ver)
} else {
} # contains(UNAME,Windows)
} # contains(UNAME,Linux)
} # contains(UNAME,Darwin)

HOME = ${HOME}

contains(UNAME,Darwin) {
contains(DARWIN_VERSION,10.12.6) {
BUILD_HOME = $${HOME}/source
BUILD_OS = os
} else {
BUILD_HOME = $${HOME}
BUILD_OS = RETE_OS
} # contains(DARWIN_VERSION,10.12.6
} else {
BUILD_HOME = $${HOME}
BUILD_OS = os
} # contains(UNAME,Darwin)

########################################################################
# build rete

# build rete INCLUDEPATH
#
build_rete_INCLUDEPATH += \


# build rete DEFINES
#
build_rete_DEFINES += \


# build rete FRAMEWORKS
#
build_rete_FRAMEWORKS += \


# build rete LIBS
#
build_rete_LIBS += \

