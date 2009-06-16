require linux.inc

PR = "r0"

S = "${WORKDIR}/linux-${PV}"

# Mark archs/machines that this kernel supports
DEFAULT_PREFERENCE = "-1"
DEFAULT_PREFERENCE_mpc8315e-rdb = "1"

COMPATIBLE_MACHINE = "mpc8315e-rdb"

SRC_URI = "${KERNELORG_MIRROR}/pub/linux/kernel/v2.6/linux-${PV}.tar.bz2 \
           file://defconfig"

SRC_URI_append_mpc8315e-rdb = " file://mpc8315erdb-add-msi-to-dts.patch;patch=1"
