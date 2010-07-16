# Assign it here, since the hal->udev transition happens post 1.7 in angstrom
DISTRO_XORG_CONFIG_MANAGER_angstrom = "udev"

require xorg-xserver-common.inc

DESCRIPTION = "the X.Org X server"
DEPENDS += "pixman libpciaccess openssl dri2proto glproto xorg-minimal-fonts font-util-native"
PE = "2"
PR = "${INC_PR}.3"

# Needs newer mesa-dri, where is D_P = "-1"
DEFAULT_PREFERENCE = "-1"
DEFAULT_PREFERENCE_shr = "1"

SRC_URI += " \
            file://dolt-fix-1.7.0.patch \
            file://randr-support-1.7.0.patch \
            file://hack-fbdev-ignore-return-mode.patch \
            file://0001-xf86Modes-make-sure-that-DisplayModeRec-name-is-init.patch \
           "
SRC_URI[archive.md5sum] = "7772d0bdcf6819332fb3a896fa854bd8"
SRC_URI[archive.sha256sum] = "5f8d472d8a486f7638a9bce164baa8be400ebe21746a6805e6621887f2689678"

SRC_URI_append_angstrom = " file://hack-assume-pixman-supports-overlapped-blt.patch"
SRC_URI_append_shr = " file://hack-assume-pixman-supports-overlapped-blt.patch"

do_install_prepend() {
        mkdir -p ${D}/${libdir}/X11/fonts
}

# The NVidia driver requires Xinerama support in the X server. Ion uses it.
PACKAGE_ARCH_ion = "${MACHINE_ARCH}"
XINERAMA = "${@['--disable-xinerama','--enable-xinerama'][bb.data.getVar('MACHINE',d) in ['ion']]}"

EXTRA_OECONF += " ${CONFIG_MANAGER_OPTION} ${XINERAMA} --disable-kdrive --disable-xephyr --disable-xsdl --disable-xfake --disable-xfbdev --disable-dmx"
EXTRA_OECONF += " --enable-dri2 --disable-unit-tests "

export LDFLAGS += " -ldl "
