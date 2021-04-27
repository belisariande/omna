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
#   File: talas.pri
#
# Author: $author$
#   Date: 4/22/2021
#
# Host build specific QtCreator .pri for framework talas
########################################################################
HOST_UNAME = $$system(uname)

contains(HOST_UNAME,Darwin) {
DARWIN_VERSION = $$system(sw_vers -productVersion)
} else {
contains(HOST_UNAME,Linux) {
LINUX_VERSION = $$system(uname -r)
} else {
contains(HOST_UNAME,Windows) {
WINDOWS_VERSION = $$system(ver)
} else {
} # contains(HOST_UNAME,Windows)
} # contains(HOST_UNAME,Linux)
} # contains(HOST_UNAME,Darwin)

HOME = ${HOME}
BUILD_HOME = $${HOME}/source
BUILD_OS = os

contains(HOST_UNAME,Darwin) {
} else {
contains(HOST_UNAME,Linux) {
} else {
contains(HOST_UNAME,Windows) {
} else {
} # contains(HOST_UNAME,Windows)
} # contains(HOST_UNAME,Linux)
} # contains(HOST_UNAME,Darwin)

########################################################################
# build talas

# build talas INCLUDEPATH
#
build_talas_INCLUDEPATH += \


# build talas DEFINES
#
build_talas_DEFINES += \


# build talas FRAMEWORKS
#
build_talas_FRAMEWORKS += \


# build talas LIBS
#
build_talas_LIBS += \

########################################################################
