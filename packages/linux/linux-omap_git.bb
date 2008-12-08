require linux.inc

DESCRIPTION = "Linux kernel for OMAP processors"
KERNEL_IMAGETYPE = "uImage"

COMPATIBLE_MACHINE = "omap5912osk|omap1710h3|omap2430sdp|omap2420h4|beagleboard|omap3evm"


SRCREV = "014ba70469e889ebb74516052c43fd06a419b17b"

PV = "2.6.27+2.6.28-rc7+${PR}+gitr${SRCREV}"
#PV = "2.6.27+${PR}+gitr${SRCREV}"
PR = "r7"

SRC_URI = "git://git.kernel.org/pub/scm/linux/kernel/git/tmlind/linux-omap-2.6.git;protocol=git \
	   file://defconfig"

SRC_URI_append = " \
           file://no-empty-flash-warnings.patch;patch=1 \
           file://no-cortex-deadlock.patch;patch=1 \
           file://read_die_ids.patch;patch=1 \
           file://fix-install.patch;patch=1 \
           file://musb-support-high-bandwidth.patch.eml;patch=1 \
           file://mru-fix-timings.diff;patch=1 \
           file://mru-fix-display-panning.diff;patch=1 \
           file://mru-improve-pixclock-config.diff;patch=1 \
           file://mru-make-video-timings-selectable.diff;patch=1 \
           file://mru-enable-overlay-optimalization.diff;patch=1 \
           file://dvb-fix-dma.diff;patch=1 \
           file://0001-Removed-resolution-check-that-prevents-scaling-when.patch;patch=1 \
           file://0001-Implement-downsampling-with-debugs.patch;patch=1 \
           file://0003-DSS-Documentation-for-OMAP2-3-display-subsystem.patch;patch=1 \
           file://0004-DSS-New-display-subsystem-driver-for-OMAP2-3.patch;patch=1 \
           file://0005-DSS-OMAPFB-fb-driver-for-new-display-subsystem.patch;patch=1 \
           file://0006-DSS-Add-generic-DVI-panel.patch;patch=1 \
           file://0007-DSS-support-for-Beagle-Board.patch;patch=1 \
           file://0008-DSS-BEAGLE-Enable-DSS-in-beagle-defconfig.patch;patch=1 \
           file://0009-DSS-Sharp-LS037V7DW01-LCD-Panel-driver.patch;patch=1 \
           file://0011-DSS-Support-for-OMAP3-EVM-board.patch;patch=1 \
           file://twl-asoc-fix-record.diff;patch=1 \
           file://tick-schedc-suppress-needless-timer-reprogramming.patch;patch=1 \
           file://fix-dpll-m4.diff;patch=1 \
"


SRC_URI_append_beagleboard = " file://logo_linux_clut224.ppm \
			     "

SRC_URI_append_omap3evm = " \
	file://evm-mcspi-ts.diff;patch=1 \
"

S = "${WORKDIR}/git"


module_autoload_ohci-hcd_omap5912osk = "ohci-hcd"


