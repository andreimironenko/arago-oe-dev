require sdcc_${PV}.bb
DEPENDS = ""

# don't need native-tools patch here
SRC_URI = "${SOURCEFORGE_MIRROR}/sdcc/sdcc-src-${PV}.tar.bz2 \
          "

inherit native

do_stage() {
        oe_runmake install
}

