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
#   File: mac.pri
#
# Author: $author$
#   Date: 4/4/2021
#
# QtCreator .pri file for xde executable mac
########################################################################

########################################################################
# mac

# mac TARGET
#
mac_TARGET = mac

# mac INCLUDEPATH
#
mac_INCLUDEPATH += \
$${medusade_INCLUDEPATH} \

# mac DEFINES
#
mac_DEFINES += \
$${medusade_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \

########################################################################
# mac OBJECTIVE_HEADERS
#
#mac_OBJECTIVE_HEADERS += \
#$${XDE_SRC}/xos/app/console/mac/main.hh \

# mac OBJECTIVE_SOURCES
#
#mac_OBJECTIVE_SOURCES += \
#$${XDE_SRC}/xos/app/console/mac/main.mm \

########################################################################
# mac HEADERS
#
mac_HEADERS += \
$${xde_crypto_HEADERS} \
$${XDE_SRC}/clib/cos/optmain.hxx \
$${XDE_SRC}/capp/cnetwork/mac/cmacmain.hxx \
$${MEDUSADE_SRC}/cifra/network/ethernet/address.hpp \
$${MEDUSADE_SRC}/cifra/network/ethernet/actual/address.hpp \
$${MEDUSADE_SRC}/cifra/network/ethernet/posix/address.hpp \
$${MEDUSADE_SRC}/cifra/network/ethernet/apple/osx/address.hpp \
$${MEDUSADE_SRC}/cifra/network/ethernet/os/address.hpp \

# mac SOURCES
#
mac_SOURCES += \
$${xde_crypto_SOURCES} \
$${XDE_SRC}/capp/cnetwork/mac/cmacmain.cxx \
$${XDE_SRC}/clib/cos/optmain.cxx \

########################################################################
# mac FRAMEWORKS
#
mac_FRAMEWORKS += \
$${medusade_FRAMEWORKS} \

# mac LIBS
#
mac_LIBS += \
$${medusade_LIBS} \


