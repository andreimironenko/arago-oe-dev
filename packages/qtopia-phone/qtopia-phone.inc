# This is qtopia-phone recipe heavilly based off the one in the qtopia-phone
# distribution.
#
# Please DO NOT merge this file into OE, it is not suitable for that yet as
# it compiles both native and target binaries. This requires stuff to be
# installed on the host which is against the aim of OE.

DESCRIPTION = "Qtopia OpenSource"
SECTION = "qtopia-phone"
LICENSE = "GPL"
PRIORITY = "optional"
HOMEPAGE = "http://www.trolltech.com"
DEPENDS = "glib-2.0 dbus tslib gstreamer"
PROVIDES = "qtopia-phone"
PR = "r1"
SRC_URI = "ftp://ftp.trolltech.com/qtopia/source/qtopia-opensource-src-${PV}.tar.gz \
           file://device-conf \
           file://qplatformdefs.h"

S = "${WORKDIR}/qtopia-opensource-${PV}"

inherit pkgconfig update-rc.d

TARGET-DEVICE="${@base_contains('MACHINE', 'nokia770', ' nokia770', '',d)}"
TARGET-DEVICE="${@base_contains('MACHINE', 'nokia800', ' nokia770', '',d)}"
TARGET-DEVICE="${@base_contains('MACHINE', 'spitz', ' c3200', '',d)}"
TARGET-DEVICE="${@base_contains('MACHINE', 'tosa', ' c3200', '',d)}"
TARGET-DEVICE="${@base_contains('MACHINE', 'fic-gta01', 'ficgta01', '',d)}"

INITSCRIPT_NAME = "qpe"
INITSCRIPT_PARAMS = "defaults 98"

export QTOPIA_DEPOT_PATH = "${S}"

require qtopia-phone_arch.inc

QT_ARCH = "${@qtopia_arch(d)}"
QT_ENDIAN = "${@qtopia_endian(d)}"
PLATFORM = "${BUILD_OS}-g++"
XPLATFORM = "linux-oe-g++"
BUILDDIR = "${WORKDIR}/build"

OE_QT_DBUSPATH = "${STAGING_DIR_HOST}"
OE_QT_ARCH = "${QT_ARCH}"
OE_QT_XPLATFORM = "${XPLATFORM}"
OE_QT_LIBDIR = "${STAGING_LIBDIR}"
OE_QT_INCDIR = "${STAGING_INCDIR}"
OE_QT_RPREFIX = "/opt/Qtopia"
OE_QT_ENDIAN = "${QT_ENDIAN}"
OE_QT_EXTRACONFIG = "-I${STAGING_INCDIR}/dbus-1.0"

do_configure() {

unset CC
unset CXX
unset CFLAGS
unset CXXFLAGS
unset LDFLAGS

mkdir -p ${S}/devices/${TARGET-DEVICE}/mkspecs/qws/${XPLATFORM}
install -m 644 ${S}/qtopiacore/qt/mkspecs/qws/linux-arm-g++/qmake.conf \
    ${S}/devices/${TARGET-DEVICE}/mkspecs/qws/${XPLATFORM}
install -m 644 ${WORKDIR}/qplatformdefs.h \
    ${S}/devices/${TARGET-DEVICE}/mkspecs/qws/${XPLATFORM}
sed -i -e "s@arm-linux-@${TARGET_SYS}-@" ${S}/devices/${TARGET-DEVICE}/mkspecs/qws/${XPLATFORM}/qmake.conf
sed -i -e "s|QMAKE_RPATH.*|QMAKE_RPATH =|" ${S}/devices/${TARGET-DEVICE}/mkspecs/qws/${XPLATFORM}/qmake.conf

# sed the dynamic config into the file
sed -i -e "s|OE_QT_DBUSPATH|${OE_QT_DBUSPATH}|" ${WORKDIR}/device-conf
sed -i -e "s|OE_QT_ARCH|${OE_QT_ARCH}|" ${WORKDIR}/device-conf
sed -i -e "s|OE_QT_XPLATFORM|${OE_QT_XPLATFORM}|" ${WORKDIR}/device-conf
sed -i -e "s|OE_QT_LIBDIR|${OE_QT_LIBDIR}|" ${WORKDIR}/device-conf
sed -i -e "s|OE_QT_INCDIR|${OE_QT_INCDIR}|" ${WORKDIR}/device-conf
sed -i -e "s|OE_QT_RPREFIX|${OE_QT_RPREFIX}|" ${WORKDIR}/device-conf
sed -i -e "s|OE_QT_ENDIAN|${OE_QT_ENDIAN}|" ${WORKDIR}/device-conf
sed -i -e "s|OE_QT_EXTRACONFIG|${OE_QT_EXTRACONFIG}|" ${WORKDIR}/device-conf

rm -f ${S}/devices/${TARGET-DEVICE}/configure
cp ${WORKDIR}/device-conf ${S}/devices/${TARGET-DEVICE}/configure
rm -f ${S}/devices/${TARGET-DEVICE}/environment
echo "" > ${S}/devices/${TARGET-DEVICE}/environment

mkdir -p ${BUILDDIR}
cd ${BUILDDIR}
echo yes | ${S}/configure -device ${TARGET-DEVICE} -xplatform ${XPLATFORM}

}

do_compile() {
    cd ${BUILDDIR}
    oe_runmake
}

do_stage() {
}


do_install() {
   cd ${BUILDDIR}
   oe_runmake install INSTALL_ROOT=${D}${OE_QT_RPREFIX} IMAGE=${D}${OE_QT_RPREFIX}
   install -d ${D}${sysconfdir}/init.d
   install -m 0755 ${S}/devices/${TARGET-DEVICE}/src/devtools/startup/qpe.sh ${D}${sysconfdir}/init.d/qpe

}

FILES_${PN} += "${OE_QT_RPREFIX}/bin ${OE_QT_RPREFIX}/help  \
                ${OE_QT_RPREFIX}/lib/*.so.* ${OE_QT_RPREFIX}/plugins \
                ${OE_QT_RPREFIX}/qtopia_db.sqlite ${OE_QT_RPREFIX}/sounds \
                ${OE_QT_RPREFIX}/etc ${OE_QT_RPREFIX}/i18n \
                ${OE_QT_RPREFIX}/pics ${OE_QT_RPREFIX}/qt_plugins \
                ${OE_QT_RPREFIX}/services ${OE_QT_RPREFIX}/lib/fonts"

FILES_${PN}-dev += "${OE_QT_RPREFIX}/lib/*.so"
