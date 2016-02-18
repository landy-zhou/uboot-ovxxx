#ifndef __CONFIG_H
#define __CONFIG_H

/* No NOR flash, this definition should put before common header */
#define CONFIG_SYS_NO_FLASH

/* #define DEBUG */

#include <asm/hardware.h>

#define CONFIG_SYS_TEXT_BASE		0x10000000
/* MEMBASE_SRAM */

/* ARM asynchronous clock */

#define CONFIG_MACH_TYPE 0x1f2c

#define CONFIG_CMDLINE_TAG		/* enable passing of ATAGs */
#define CONFIG_SETUP_MEMORY_TAGS
#define CONFIG_INITRD_TAG

#define CONFIG_ARCH_CPU_INIT
#define CONFIG_SKIP_LOWLEVEL_INIT
#define CONFIG_BOARD_EARLY_INIT_F
#define CONFIG_DISPLAY_CPUINFO
#define CONFIG_CMD_BOOTZ
#define CONFIG_OF_LIBFDT		/* Device Tree support */
#define CONFIG_SYS_GENERIC_BOARD

#define CONFIG_CMD_NAND_YAFFS

/*
 * BOOTP options
 */
#define CONFIG_BOOTDELAY		3

#define CONFIG_BOOTP_BOOTFILESIZE
#define CONFIG_BOOTP_BOOTPATH
#define CONFIG_BOOTP_GATEWAY
#define CONFIG_BOOTP_HOSTNAME

/*
* #define CONFIG_FOR_FPGA 
*/

/*
 * Command line configuration. 	"root=/dev/ram rootfstype=ext2 init=/linuxrc "	
	"initrd=0x1f900000,8M " \

 */

#ifdef CONFIG_SYS_USE_MMC
#define CONFIG_BOOTARGS							\
	"console=ttyS0,115200 earlyprintk "				\
	"root=/dev/mmcblk0p2 rw rootwait"
#else
//#if 0
#ifdef CONFIG_FOR_FPGA
#define CONFIG_BOOTARGS \
	"console=ttyS0,115200 earlyprintk "	\
	"initrd=0x1F900000,16M " \
	"root=/dev/ram rootfstype=ext2 init=/linuxrc "	\
    "mem=256M "
#else
#define CONFIG_BOOTARGS \
	"console=ttyS0,115200 earlyprintk "	\
	"initrd=0x13100000,16M " \
	"root=/dev/ram rootfstype=ext2 init=/linuxrc "	\
    "mem=64M "
#endif
/*
#else
#ifdef CONFIG_FOR_FPGA
#define CONFIG_BOOTARGS \
	"console=ttyS0,115200 earlyprintk "	\
	"initrd=0 " \
	"root=/dev/mtdblock3 rootfstype=yaffs2 init=/linuxrc "	\
    "mem=256M "
#else
#define CONFIG_BOOTARGS \
	"console=ttyS0,115200 earlyprintk "	\
	"initrd=0 " \
	"root=/dev/mtdblock3 rootfstype=yaffs2 init=/linuxrc "	\
    "mem=64M "
#endif
#endif 
*/
#endif

#define CONFIG_BAUDRATE			115200

//#define CONFIG_SYS_PROMPT		"U-Boot> "
#define CONFIG_SYS_CBSIZE		256
#define CONFIG_SYS_MAXARGS		16
#define CONFIG_SYS_PBSIZE		(CONFIG_SYS_CBSIZE + \
					sizeof(CONFIG_SYS_PROMPT) + 16)
#define CONFIG_SYS_LONGHELP
#define CONFIG_CMDLINE_EDITING
#define CONFIG_AUTO_COMPLETE
#define CONFIG_SYS_HUSH_PARSER

/* Size of malloc() pool */
#define CONFIG_SYS_MALLOC_LEN		(64 * 1024)


/* serial console */
#define CONFIG_OV798_UART

/* SDRAM */
#define CONFIG_NR_DRAM_BANKS		1

#if 1
#define CONFIG_SYS_SDRAM_BASE       0x10060000
#define CONFIG_SYS_SDRAM_SIZE          0x68000
#else
#define CONFIG_SYS_SDRAM_BASE       0x10100000
#define CONFIG_SYS_SDRAM_SIZE       0x10000000 
#endif


#define CONFIG_SYS_INIT_SP_ADDR		(0x1005d000)

/* NAND flash */

/* Ethernet Hardware */

/* MMC */
#define CONFIG_MMC
#define CONFIG_OV798_MMC_GENERIC
#define CONFIG_DOS_PARTITION 	1
#define CONFIG_CMD_FAT			1
#define CONFIG_CMD_MMC			1
#define CONFIG_GENERIC_MMC		1
#define SCIF_MODULE_01			1
#define SCIF_MODULE_02			2

/* USB */
#define CONFIG_SYS_LOAD_ADDR			(MEMBASE_DDR + 0x8000) /* load address */

#if CONFIG_SYS_USE_NANDFLASH
/* bootstrap + u-boot + env in nandflash */
#define CONFIG_ENV_IS_IN_NAND
#define CONFIG_ENV_OFFSET		0xc0000
#define CONFIG_ENV_OFFSET_REDUND	0x100000
#define CONFIG_ENV_SIZE			0x20000
#define CONFIG_BOOTCOMMAND	"nand read 0x21000000 0x180000 0x80000;" \
				"nand read 0x22000000 0x200000 0x600000;" \
				"bootz 0x22000000 - 0x21000000"
#elif CONFIG_SYS_USE_MMC
/* bootstrap + u-boot + env in sd card */
#define CONFIG_ENV_IS_IN_FAT
#define FAT_ENV_INTERFACE	"mmc"
#define FAT_ENV_FILE		"uboot.env"
#define FAT_ENV_DEVICE_AND_PART	"0"
#define CONFIG_ENV_SIZE		0x4000
#define CONFIG_BOOTCOMMAND	"fatload mmc 0:1 0x21000000 at91-sama5d3_xplained.dtb; " \
				"fatload mmc 0:1 0x22000000 zImage; " \
				"bootz 0x22000000 - 0x21000000"
#else
#define CONFIG_ENV_IS_NOWHERE
#define CONFIG_ENV_SIZE		0x2000		/* 8KB */
#endif

/* SPL */
/* #define CONFIG_SPL_BUILD  	*/	

#define CONFIG_SYS_MONITOR_LEN		(512 << 10)

#ifdef CONFIG_SYS_USE_MMC
#define CONFIG_SYS_U_BOOT_MAX_SIZE_SECTORS	0x400
#define CONFIG_SYS_MMCSD_RAW_MODE_U_BOOT_SECTOR 0x200
#define CONFIG_SYS_MMCSD_FS_BOOT_PARTITION	1

#elif CONFIG_SYS_USE_NANDFLASH
#define CONFIG_SYS_NAND_U_BOOT_OFFS	0x40000
#define CONFIG_SYS_NAND_5_ADDR_CYCLE
#define CONFIG_SYS_NAND_PAGE_SIZE	0x800
#define CONFIG_SYS_NAND_PAGE_COUNT	64
#define CONFIG_SYS_NAND_OOBSIZE		64
#define CONFIG_SYS_NAND_BLOCK_SIZE	0x20000
#define CONFIG_SYS_NAND_BAD_BLOCK_POS	0x0

#endif

#define CONFIG_CMD_NAND				1

/* NAND flash */
#ifdef CONFIG_CMD_NAND
/*#define CONFIG_MTD_NAND_ECC_SMC */
#define CONFIG_NAND_OV798
#define CONFIG_SYS_MAX_NAND_DEVICE		1
#define CONFIG_SYS_NAND_BASE			0xc0004000
#endif


#endif
