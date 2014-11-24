DESCRIPTION = "Valgrind memory debugger"
HOMEPAGE = "http://www.valgrind.org/"
SECTION = "devel"
LICENSE = "GPLv2"
DEPENDS = "virtual/libx11"
PR = "r0"

SRC_URI = "http://valgrind.org/downloads/valgrind-${PV}.tar.bz2 \
          file://01-configure-ac-arm-generic.patch"

inherit autotools

EXTRA_OECONF  = "CC=arm-arago-linux-gnueabi-gcc"
EXTRA_OECONF += "CXX=arm-arago-linux-gnueabi-g++"
EXTRA_OECONF += "-host=arm-arago-linux-gnueabi -target=arm-arago-linux-gnueabi"

PARALLEL_MAKE=""
COMPATIBLE_HOST = "^(i.86|x86_64|arm).*-linux"

SRC_URI[md5sum] = "7c311a72a20388aceced1aa5573ce970"
