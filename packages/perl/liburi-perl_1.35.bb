DESCRIPTION = "Manipulates and accesses URI strings"
SECTION = "libs"
LICENSE = "Artistic|GPL"
#RDEPENDS += " libmime-base64-perl libnet-perl"
PR = "r1"

SRC_URI = "http://search.cpan.org/CPAN/authors/id/G/GA/GAAS/URI-${PV}.tar.gz"

S = "${WORKDIR}/URI-${PV}"

inherit cpan