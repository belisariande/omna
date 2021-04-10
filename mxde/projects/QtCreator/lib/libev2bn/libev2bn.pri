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
#   File: libev2bn.pri
#
# Author: $author$
#   Date: 4/8/2021
#
# QtCreator .pri file for xde library libev2bn
########################################################################

########################################################################
# libev2bn

# libev2bn TARGET
#
libev2bn_TARGET = ev2bn
libev2bn_TEMPLATE = lib
libev2bn_CONFIG += staticlib

# libev2bn INCLUDEPATH
#
libev2bn_INCLUDEPATH += \
$${evx_INCLUDEPATH} \

# libev2bn DEFINES
#
libev2bn_DEFINES += \
$${evx_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \

########################################################################
# libev2bn OBJECTIVE_HEADERS
#
#libev2bn_OBJECTIVE_HEADERS += \
#$${XDE_SRC}/xos/app/console/ev2bn/main.hh \

# libev2bn OBJECTIVE_SOURCES
#
#libev2bn_OBJECTIVE_SOURCES += \
#$${XDE_SRC}/xos/app/console/ev2bn/main.mm \

########################################################################
# libev2bn HEADERS
#
libev2bn_HEADERS += \

# libev2bn SOURCES
#
libev2bn_SOURCES += \
$${EVX_SRC}/ev2c/mpint/bn/bn_add.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_blind.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_div.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_exp.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_gcd.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_lib.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_mod.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_mont.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_mpi.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_msb.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_mul.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_mulw.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_prime.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_randm.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_recp.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_shift.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_sqr.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_sub.c \
$${EVX_SRC}/ev2c/mpint/bn/bn_word.c \

########################################################################



