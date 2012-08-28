require xorg-lib-common.inc
DESCRIPTION = "X-TrueType font cache extension client library"
DEPENDS += "libxext fontcacheproto"
PE = "1"
PR = "${INC_PR}.0"

SRC_URI[archive.md5sum] = "bbd37768c87f63cf2eb845b2c0f56515"
SRC_URI[archive.sha256sum] = "0d639219549f51fa0e6b4414383f5d13e6c1638e66b3434f4626eb989ffacbce"

XORG_PN = "libXfontcache"
