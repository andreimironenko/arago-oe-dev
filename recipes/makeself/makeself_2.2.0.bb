SECTION = "devel"
DESCRIPTION = "makeself.sh is a small shell script that generates a \
self-extractable tar.gz archive from a directory. The resulting file \
appears as a shell script (many of those have a .run suffix), and \
can be launched as is. The archive will then uncompress itself to a \
temporary directory and an optional arbitrary command will be executed \
(for example an installation script)."
LICENSE = "GPL"
#SRC_URI = "git://${GITSERVER}/embedded-apps/hasl.git;protocol=git;branch=${BRANCH}"
SRC_URI = "git://github.com/megastep/makeself.git;protocol=git;branch=${BRANCH}"

SRCREV = "ca412052a5f1bccc6a3ce2cb40bfe044d59e5c49"
BRANCH = "master"

S = "${WORKDIR}/git"

inherit native

#do_configure () {
#    :	
#}

#do_compile () {
#	:
#}

#do_install () {
#	install -d ${D}/bin
#	
#	install -m 0755 ${S}/makeself.sh ${D}/bin
#	install -m 0755 ${S}/makeself-header.sh ${D}/bin
#}
#FILES_${PN} = "/bin"

do_stage() {
	install -m 0755 ${S}/makeself.sh        ${STAGING_BINDIR}/
	install -m 0755 ${S}/makeself-header.sh ${STAGING_BINDIR}/
}
