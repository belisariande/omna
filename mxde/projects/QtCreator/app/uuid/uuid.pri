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
#   File: uuid.pri
#
# Author: $author$
#   Date: 4/4/2021
#
# QtCreator .pri file for xde executable uuid
########################################################################

########################################################################
# uuid

# uuid TARGET
#
uuid_TARGET = uuid

# uuid INCLUDEPATH
#
uuid_INCLUDEPATH += \
$${medusade_INCLUDEPATH} \

# uuid DEFINES
#
uuid_DEFINES += \
$${medusade_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \

########################################################################
# uuid OBJECTIVE_HEADERS
#
#uuid_OBJECTIVE_HEADERS += \
#$${XDE_SRC}/xos/app/console/uuid/main.hh \

# uuid OBJECTIVE_SOURCES
#
#uuid_OBJECTIVE_SOURCES += \
#$${XDE_SRC}/xos/app/console/uuid/main.mm \

########################################################################
# uuid HEADERS
#
uuid_HEADERS += \
$${xde_crypto_HEADERS} \
$${MEDUSADE_SRC}/cifra/network/ethernet/address.hpp \
$${MEDUSADE_SRC}/cifra/network/ethernet/actual/address.hpp \
$${MEDUSADE_SRC}/cifra/network/ethernet/posix/address.hpp \
$${MEDUSADE_SRC}/cifra/network/ethernet/apple/osx/address.hpp \
$${MEDUSADE_SRC}/cifra/network/ethernet/microsoft/windows/address.hpp \
$${MEDUSADE_SRC}/cifra/network/ethernet/os/address.hpp \
$${MEDUSADE_SRC}/cifra/universal/unique/identifier.hpp \
$${MEDUSADE_SRC}/cifra/universal/unique/unix/identifier.hpp \
$${MEDUSADE_SRC}/cifra/universal/unique/posix/identifier.hpp \
$${MEDUSADE_SRC}/cifra/universal/unique/apple/osx/identifier.hpp \
$${MEDUSADE_SRC}/cifra/universal/unique/microsoft/windows/identifier.hpp \
$${MEDUSADE_SRC}/cifra/universal/unique/os/identifier.hpp \
$${XDE_SRC}/clib/cos/optmain.hxx \
$${XDE_SRC}/capp/cnetwork/uuid/cuuidmain.hxx \

# uuid SOURCES
#
uuid_SOURCES += \
$${xde_crypto_SOURCES} \
$${XDE_SRC}/clib/cos/optmain.cxx \
$${XDE_SRC}/capp/cnetwork/uuid/cuuidmain.cxx \

########################################################################
# uuid FRAMEWORKS
#
uuid_FRAMEWORKS += \
$${medusade_FRAMEWORKS} \

# uuid LIBS
#
uuid_LIBS += \
$${medusade_LIBS} \


