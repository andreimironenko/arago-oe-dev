DESCRIPTION = "OBEX Server and Client"
DEPENDS = "openobex glib-2.0 dbus bluez4 libical"

LICENSE = "GPLv2"

PR = "r1"

SRC_URI = "http://www.kernel.org/pub/linux/bluetooth/obexd-${PV}.tar.gz"
#SRC_URI[md5sum] = "58dd77e7a005e9f1451c0c7efddbad92"
#SRC_URI[sha256sum] = "7f8ed0ce47891d925275d7699527cd106cad14dd90094c8b2414286b2371e91c"

SRC_URI[md5sum] = "36080a767e63e54878cd6bcfb20c4f3b"
SRC_URI[sha256sum] = "f99fb58562a3d7edef6fd9e63ca04510e241bbdab37fdb122c2c7a112a09100a"

inherit autotools

FILES_${PN} += "${datadir}/dbus-1/"
