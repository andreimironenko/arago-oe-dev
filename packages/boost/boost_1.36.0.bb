include boost-36.inc

DEFAULT_PREFERENCE = "-1"

PR = "r1"

SRC_URI = "${SOURCEFORGE_MIRROR}/boost/${BOOST_P}.tar.bz2 \
           file://arm-intrinsics.patch;patch=1 \
          "

BJAM_OPTS    = '${BJAM_TOOLS} \
                --builddir=${S}/${TARGET_SYS} \
                ${BJAM_EXTRA}'
