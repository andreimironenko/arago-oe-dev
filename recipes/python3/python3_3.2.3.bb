DESCRIPTION = "The Python Programming Language"
HOMEPAGE = "http://www.python.org"
LICENSE = "PSF"
SECTION = "devel/python"
PRIORITY = "optional"
# bump this on every change in contrib/python/generate-manifest-2.7.py
INC_PR = "ml1"

DEFAULT_PREFERENCE = "-32"
PYTHON_MAJMIN = "3.2"

DEPENDS = "openssl-native bzip2-full-native zlib-native readline-native sqlite3-native"

#DEPENDS = "python-native db gdbm openssl readline sqlite3 tcl zlib\
#           ${@base_contains('DISTRO_FEATURES', 'tk', 'tk', '', d)}"

SRC_URI = "https://www.python.org/ftp/python/${PV}/Python-${PV}.tgz        \
           file://config.site                                              \
           file://00-python-3.2.3-xcompile.patch                           \
           file://00-python-3.2.3-xcompile                                 \
"
SRC_URI[md5sum] = "dcf3a738e7028f1deb41b180bf0e2cbc"
SRC_URI[sha256sum] = "74c33e165edef7532cef95fd9a325a06878b5bfc8a5d038161573f283eaf9809"

S = "${WORKDIR}/Python-${PV}"

inherit autotools


#--host=arm-arago-linux-gnueabi
#--build=armv7a 
export CFLAGS=""
export CXXFLAGS=""
export CPPFLAGS=""
export LDFLAGS=""

#CONFIG_SITE=${WORKDIR}/config.site                 
 

do_patch() {
    # Don't do patching now as we need NATIVE build at first and then
    # we'll apply a patch and cross-compile it!
     :
}

    
do_configure_prepend() {
    # Here we are building NATIVE python and store it in the separate folders
    # then clean the result of the build
    pushd ${PWD}
    cd ${S}
    CC=gcc CXX=g++ AR=ar RANLIB=ranlib ./configure
    make -j${BB_NUMBER_THREADS} python Parser/pgen
    mv python hostpython
    mv Parser/pgen Parser/hostpgen
    make distclean
    
    #Now we can patch the sources for the cross-compiling
    patch -p1 < ${WORKDIR}/00-python-3.2.3-xcompile 
    popd
}


do_configure() {
   # Configure for the cross-compiler build
   pushd ${PWD}
   cd ${S}
   CC=${TARGET_SYS}-gcc CXX=${TARGET_SYS}-g++        \ 
   AR=${TARGET_SYS}-ar  RANLIB=${TARGET_SYS}-ranlib  \
   ./configure  --host=${TARGET_SYS} --build=${BUILD_ARCH} 
   popd  
}


#EXTRA_OEMAKE  = "HOSTPYTHON=${S}/hostpython"
#EXTRA_OEMAKE += "HOSTPGEN=${S}/Parser/hostpgen"
#EXTRA_OEMAKE += 'BLDSHARED="${TARGET_SYS} -shared"'
#EXTRA_OEMAKE += "CROSS_COMPILE=${TARGET_PREFIX}"
#EXTRA_OEMAKE += "CROSS_COMPILE_TARGET=yes"
#EXTRA_OEMAKE += "HOSTARCH=${TARGET_ARCH}"
#EXTRA_OEMAKE += "BUILDARCH=${BUILD_ARCH}"


do_compile() {
    oe_runmake HOSTPYTHON=${S}/hostpython          \
    HOSTPGEN=${S}/Parser/hostpgen       \
    BLDSHARED="${TARGET_SYS} -shared"   \
    CROSS_COMPILE=${TARGET_PREFIX}      \
    CROSS_COMPILE_TARGET=yes            \
    HOSTARCH=${TARGET_ARCH}             \
    BUILDARCH=${BUILD_ARCH}             \
}


do_install() {
   install -d ${D}${exec_prefix}

   oe_runmake install                               \
   BLDSHARED="${TARGET_SYS} -shared"                \
   HOSTPYTHON=./hostpython                          \
   CROSS_COMPILE=${TARGET_PREFIX}                   \
   CROSS_COMPILE_TARGET=yes                         \
   prefix=${D}${exec_prefix}
}

#require python-${PYTHON_MAJMIN}-manifest.inc


FILES_${PN}="${exec_prefix}"

#PROVIDES_${PN}-core = "${PN}"
#RRECOMMENDS_python-core = "python-readline"
#RRECOMMENDS_python-crypt = "openssl"

#FILES_python-core = "${bindir}"

#package libpython3
#PACKAGES =+ "lib${PN}3"
#FILES_lib${PN}3 = "${libdir}/libpython*.so.*"


#FILES_${PN}-dev += "\
#  ${includedir} \
#  ${libdir}/lib*${SOLIBSDEV} \
#  ${libdir}/*.la \
#  ${libdir}/*.a \
#  ${libdir}/*.o \
#  ${libdir}/pkgconfig \
#  ${base_libdir}/*.a \
#  ${base_libdir}/*.o \
#  ${datadir}/aclocal \
#  ${datadir}/pkgconfig \
#"

# catch debug extensions (isn't that already in python-core-dbg?)
#FILES_${PN}-dbg += "${libdir}/python${PYTHON_MAJMIN}/lib-dynload/.debug"

# catch all the rest (unsorted)
#PACKAGES += "${PN}-misc"
#FILES_${PN}-misc = "${libdir}/python${PYTHON_MAJMIN}"

# catch manpage
#PACKAGES += "${PN}-man"
#FILES_${PN}-man = "${datadir}/man"

