DESCRIPTION = "The Sodium crypto library"
HOMEPAGE = "http://www.libsodium.org"
LICENSE = "ISC, OpenBSD"

PR = "r0"

DEPENDS += ""

S = "${WORKDIR}/libsodium-${PV}"

SRC_URI = "https://download.libsodium.org/libsodium/releases/libsodium-${PV}.tar.gz"

inherit autotools

do_configure_prepend() {
	#./autogen.sh
    :
}


