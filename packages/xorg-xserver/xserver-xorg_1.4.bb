require xorg-xserver-common.inc

DESCRIPTION = "the X.Org X server"
DEPENDS += "pixman"
PE = "1"

SRC_URI += "file://drmfix.patch;patch=1 \
            file://pkgconfig_fix.patch;patch=1"

MESA_VER = "7.0.2"

EXTRA_OECONF += " ac_cv_file__usr_share_X11_sgml_defs_ent=no "

export LDFLAGS += " -ldl "