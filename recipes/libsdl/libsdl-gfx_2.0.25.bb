DESCRIPTION = "Simple DirectMedia Layer graphic primitives library."
SECTION = "libs"
PRIORITY = "optional"
DEPENDS = "zlib libpng jpeg virtual/libsdl"
LICENSE = "LGPL"

SRC_URI = "http://downloads.sourceforge.net/project/sdlgfx/SDL_gfx-2.0.25.tar.gz"
           
S = "${WORKDIR}/SDL_gfx-${PV}"

inherit autotools

EXTRA_OECONF = "--disable-mmx"
TARGET_CC_ARCH += "${LDFLAGS}"

SRC_URI[md5sum] = "ea24ed4b82ff1304809c363494fa8e16"
SRC_URI[sha256sum] = "556eedc06b6cf29eb495b6d27f2dcc51bf909ad82389ba2fa7bdc4dec89059c0"

