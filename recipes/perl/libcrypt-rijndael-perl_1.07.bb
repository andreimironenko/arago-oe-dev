SECTION = "libs"
LICENSE = "GPLv2"
DEPENDS += "expat expat-native"

SRC_URI = "http://www.cpan.org/modules/by-module/Crypt/Crypt-Rijndael-${PV}.tar.gz"

S = "${WORKDIR}/Crypt-Rijndael-${PV}"

EXTRA_CPANFLAGS = "EXPATLIBPATH=${STAGING_LIBDIR} EXPATINCPATH=${STAGING_INCDIR}"

inherit cpan

FILES_${PN} = "${PERLLIBDIRS}/auto/ \
                ${PERLLIBDIRS}/Crypt"
