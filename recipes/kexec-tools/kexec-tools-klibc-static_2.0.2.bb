# the binaries are statically linked against klibc
require kexec-tools_${PV}.inc

PR = "r0"
DEPENDS = "klibc"

FILESPATHPKG =. "kexec-tools-${PV}:"

SRC_URI += "file://headers.patch \
            file://elf.patch \
            file://errno.patch \
            file://string.patch \
            file://syscall.patch \
            file://other.patch \
            "

S = "${WORKDIR}/kexec-tools-${PV}"

EXTRA_OECONF = " --without-zlib"
export CC=${TARGET_PREFIX}klcc

# reset inherited OE flags to avoid e.g. ggdb3 and keep size small
export CFLAGS=""
export CPPFLAGS=""
export LDFLAGS=""

PACKAGES =+ "kexec-klibc-static kdump-klibc-static"

FILES_kexec-klibc-static = "${sbindir}/kexec"
FILES_kdump-klibc-static = "${sbindir}/kdump"
