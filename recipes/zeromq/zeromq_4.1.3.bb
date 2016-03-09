DESCRIPTION = "ZeroMQ looks like an embeddable networking library but acts like a concurrency framework"
HOMEPAGE = "http://www.zeromq.org"
LICENSE = "LGPLv3+"
LIC_FILES_CHKSUM = "file://COPYING.LESSER;md5=66ea8704398d7996daeacd2fbd2b9dbd"

PR = "r0"

DEPENDS += "util-linux-ng"

S = "${WORKDIR}/zeromq-${PV}"

SRC_URI = "http://download.zeromq.org/zeromq-${PV}.tar.gz"

inherit autotools

do_configure_prepend() {
	./autogen.sh
}

SRC_URI[md5sum] = "d0824317348cfb44b8692e19cc73dc3a"
SRC_URI[sha256sum] ="61b31c830db377777e417235a24d3660a4bcc3f40d303ee58df082fcd68bf411" 
