DESCRIPTION = "Enlightened Sound Daemon - GPE version"
SECTION = "gpe/base"
LICENSE = "GPL"
DEPENDS = "audiofile"

inherit gnome binconfig

SRC_URI = "ftp://ftp.gnome.org/pub/GNOME/sources/esound/0.2/esound-0.2.36.tar.bz2"

EXTRA_OECONF = " \
                --disable-alsa \
		--disable-arts \
		--disable-artstest \
		"

do_stage() {
	autotools_stage_all
}	


PACKAGES =+ "esddsp esd esd-utils"

FILES_esddsp = "${bindir}/esddsp ${libdir}/libesddsp.so.*"
FILES_esd = "${bindir}/esd"
FILES_esd-utils = "${bindir}/*"
