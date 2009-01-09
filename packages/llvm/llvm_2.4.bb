DESCRIPTION = "The Low Level Virtual Machine"
HOMEPAGE = "http://llvm.org"
LICENSE = "various"

SRC_URI = "\
	http://llvm.org/releases/${PV}/llvm-${PV}.tar.gz \
	file://fix-build.patch;patch=1 \
	"

DEPENDS = "llvm-native"

inherit autotools

do_compile() {
	# tblgen doesnt want to link correctly. Pull the one in we have in staging.
	install -d Release/Build/bin
	cp ${STAGING_BINDIR_NATIVE}/tblgen Release/Build/bin
	cp ${STAGING_BINDIR_NATIVE}/fpcmp Release/Build/bin
	cp ${STAGING_BINDIR_NATIVE}/llvm-PerfectShuffle Release/Build/bin
	install -d Release/Build/lib
	touch Release/Build/lib/libLLVMSupport.a
	touch Release/Build/lib/libLLVMSystem.a
	
	oe_runmake
}

do_stage() {
	autotools_stage_all

	rm ${STAGING_LIBDIR}/LLVMHello.*

	install -d ${STAGING_BINDIR_CROSS}

	sed -e's^my.*ABS_RUN_DIR =.*^my $ABS_RUN_DIR = "${STAGING_DIR_TARGET}";^' \
		-e's^my.*INCLUDEDIR =.*^my $INCLUDEDIR = "${STAGING_INCDIR}";^' \
		-e's^my.*LIBDIR.*^my $LIBDIR = "${STAGING_LIBDIR}";^' \
		-e's^my.*BINDIR.*^my $BINDIR = "${STAGING_BINDIR}";^' \
		Release/Host/bin/llvm-config > ${STAGING_BINDIR_CROSS}/llvm-config

	chmod +x ${STAGING_BINDIR_CROSS}/llvm-config
}	

