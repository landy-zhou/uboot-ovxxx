#ifndef _BOARD_REG_H_
#define _BOARD_REG_H_

#define MEMBASE_SRAM	(0x10000000)
#define MEMBASE_DDR		(0x10100000)
#define MEMBASE_ROM		(0x00400000)

#define   BIT0 		 0x00000001
#define   BIT1 		 0x00000002
#define   BIT2 		 0x00000004
#define   BIT3 		 0x00000008
#define   BIT4 		 0x00000010
#define   BIT5 		 0x00000020
#define   BIT6 		 0x00000040
#define   BIT7 		 0x00000080
#define   BIT8           0x00000100
#define   BIT9           0x00000200
#define   BIT10          0x00000400
#define   BIT11          0x00000800
#define   BIT12          0x00001000
#define   BIT13          0x00002000
#define   BIT14          0x00004000
#define   BIT15          0x00008000
#define   BIT16          0x00010000
#define   BIT17          0x00020000
#define   BIT18          0x00040000
#define   BIT19          0x00080000
#define   BIT20          0x00100000
#define   BIT21          0x00200000
#define   BIT22          0x00400000
#define   BIT23          0x00800000
#define   BIT24          0x01000000
#define   BIT25          0x02000000
#define   BIT26          0x04000000
#define   BIT27          0x08000000
#define   BIT28          0x10000000
#define   BIT29          0x20000000
#define   BIT30          0x40000000
#define   BIT31          0x80000000


/*********************************************
	SC REG
*********************************************/
#define REG_SC_ADDR     (0xc0001000)
#define SC_BASE_ADDR	(REG_SC_ADDR)
#define REG_SC_EN			(REG_SC_ADDR + 0x0)
#define REG_SC_SENSOR_ISP	(REG_SC_ADDR + 0x4)
#define REG_SC_CTRL2		(REG_SC_ADDR + 0x8)
#define REG_SC_CTRL3		(REG_SC_ADDR + 0x0c)
#define REG_SC_CTRL4		(REG_SC_ADDR + 0x10)
#define REG_SC_DMACTRL		(REG_SC_ADDR + 0x14) //TODO 0 rename
#define REG_SC_WDG			(REG_SC_ADDR + 0x18)
#define REG_SC_I2SPSC		(REG_SC_ADDR + 0x1c)
#define REG_SC_RST_LG0		(REG_SC_ADDR + 0x20)
#define REG_SC_RESET		(REG_SC_RST_LG0)
#define REG_SC_RESET0		(REG_SC_RST_LG0)
#define REG_SC_RST_LG1		(REG_SC_ADDR + 0x24)
#define REG_SC_RESET1		(REG_SC_RST_LG1)
#define REG_SC_RST_RG0		(REG_SC_ADDR + 0x28)
#define REG_SC_RRESET		(REG_SC_RST_RG0) //TODO: need to verify
#define REG_SC_RRESET0		(REG_SC_RST_RG0) //TODO: need to verify
#define REG_SC_RST_RG1		(REG_SC_ADDR + 0x2c)
#define REG_SC_RRESET1		(REG_SC_RST_RG1) //TODO: need to verify
#define REG_SC_CLK			(REG_SC_ADDR + 0x30)
#define REG_SC_CLK0			(REG_SC_CLK)
#define REG_SC_CLK1			(REG_SC_ADDR + 0x34)
#define REG_SC_CLK2			(REG_SC_ADDR + 0x38)
#define REG_SC_DIV0			(REG_SC_ADDR + 0x40)
#define REG_SC_DIV1			(REG_SC_ADDR + 0x44)
#define REG_SC_DIV2			(REG_SC_ADDR + 0x48)
#define REG_SC_DIV3			(REG_SC_ADDR + 0x4c)
#define REG_SC_DIV4			(REG_SC_ADDR + 0x50)
#define REG_SC_DIV5			(REG_SC_ADDR + 0x54)
#define REG_SC_DIV6			(REG_SC_ADDR + 0x58)

#define REG_SC_RISC			(REG_SC_ADDR + 0x60)
#define REG_SC_WATCHDOGIRQ	(REG_SC_ADDR + 0x70)
#define REG_SC_WATCHDOG		(REG_SC_ADDR + 0x74)
#define REG_SC_ALG			(REG_SC_ADDR + 0x78)
#define REG_SC_RAMRESET		(REG_SC_ADDR + 0x7c)
#define REG_SC_STATUS		(REG_SC_ADDR + 0x80)
#define REG_SC_RESET2		(REG_SC_ADDR + 0x84)
#define REG_SC_SW_BYP		(REG_SC_ADDR + 0x88)

#define REG_SC_USB_DEV_CTRL		(REG_SC_ADDR + 0x94)
#define REG_SC_USB_DEV_CTRL1	(REG_SC_ADDR + 0x98)
#define REG_SC_USB_HOST_CTRL	(REG_SC_ADDR + 0xb4)
#define REG_SC_USB_HOST_STA		(REG_SC_ADDR + 0xb8)
#define REG_SC_USB_HOST_PHY		(REG_SC_ADDR + 0xbc)
#define REG_SC_USB_HOST_PHY1	(REG_SC_ADDR + 0xc0)

#define REG_SC_SMCA_STS		(REG_SC_ADDR + 0x98)
#define REG_SC_IHVSIZE		(REG_SC_ADDR + 0x100)
#define REG_SC_OFFSET		(REG_SC_ADDR + 0x104)
#define REG_SC_OHVSIZE		(REG_SC_ADDR + 0x108)
#define REG_SC_SNR_GAIN		(REG_SC_ADDR + 0x10c)
#define REG_SC_RG_GAIN		(REG_SC_ADDR + 0x110)
#define REG_SC_B_GAIN		(REG_SC_ADDR + 0x114)
#define REG_SC_HW_VERSION	(REG_SC_ADDR + 0x800)

/*gpio/normal funciton selection*/
#define REG_SC_PINSEL0      (REG_SC_ADDR + 0x22c)
#define REG_SC_PINSEL2      (REG_SC_ADDR + 0x23c)

/*pin input enable*/
#define REG_SC_PINEN0       (REG_SC_ADDR + 0x24c)
#define REG_SC_PINEN1       (REG_SC_ADDR + 0x250)
#define REG_SC_PINEN2       (REG_SC_ADDR + 0x254)

/* module clock(0x30) clock gate0 */
#define SC_CLK0_VPBUS       (0x1 << 31)
#define SC_CLK0_SCCBM1      (0x1 << 30)
#define SC_CLK0_SCCBM0      (0x1 << 29)
#define SC_CLK0_UARTM       (0x1 << 28)
#define SC_CLK0_UARTS       (0x1 << 27)
#define SC_CLK0_VE          (0x1 << 26)
#define SC_CLK0_SCCBM2      (0x1 << 25)
#define SC_CLK0_YUVSCALE2   (0x1 << 22)
#define SC_CLK0_YUVSCALE1   (0x1 << 21)
#define SC_CLK0_YUVSCALE0   (0x1 << 20)
#define SC_CLK0_FB4         (0x1 << 19)
#define SC_CLK0_SCCBM3      (0x1 << 18)
#define SC_CLK0_ECIF1       (0x1 << 17)
#define SC_CLK0_ECIF0       (0x1 << 16)
#define SC_CLK0_MIPICIF3    (0x1 << 15)
#define SC_CLK0_MIPICIF2    (0x1 << 14)
#define SC_CLK0_MIPICIF1    (0x1 << 13)
#define SC_CLK0_MIPICIF0    (0x1 << 12)
#define SC_CLK0_FB3         (0x1 << 11)
#define SC_CLK0_FB2         (0x1 << 10)
#define SC_CLK0_FB1         (0x1 << 9 )
#define SC_CLK0_FB0         (0x1 << 8 )
#define SC_CLK0_VIF1        (0x1 << 7 )
#define SC_CLK0_VIF0        (0x1 << 6 )
#define SC_CLK0_ISP         (0x1 << 4 )
#define SC_CLK0_MD          (0x1 << 3 )
#define SC_CLK0_COLORBAR    (0x1 << 2 )
#define SC_CLK0_CIF1        (0x1 << 1 )
#define SC_CLK0_CIF0        (0x1 << 0 )
#define SC_CLK0_ALL         (0xffffffff)

/* clock gate1(0x34) */
#define SC_CLK1_STITCH_BYPASS    (0x1 << 31)
#define SC_CLK1_STITCH_CLK       (0x1 << 30)
#define SC_CLK1_STITCH_BUS       (0x1 << 29)
#define SC_CLK1_DMA              (0x1 << 28)
#define SC_CLK1_RAWSCALE3_BUS    (0x1 << 27)
#define SC_CLK1_RAWSCALE2_BUS    (0x1 << 26)
#define SC_CLK1_RAWSCALE1_BUS    (0x1 << 25)
#define SC_CLK1_RAWSCALE0_BUS    (0x1 << 24)
#define SC_CLK1_IDCBUS           (0x1 << 23)
#define SC_CLK1_DCPC1            (0x1 << 22)
#define SC_CLK1_DCPC0            (0x1 << 21)
#define SC_CLK1_MDBUS            (0x1 << 20)
#define SC_CLK1_RGBIR            (0x1 << 19)
#define SC_CLK1_OSD4L            (0x1 << 18)
#define SC_CLK1_OSDRLC           (0x1 << 17)
#define SC_CLK1_VFIFO_LEFT       (0x1 << 16)
#define SC_CLK1_VFIFO_RIGHT      (0x1 << 15)
#define SC_CLK1_EMBL             (0x1 << 14)
#define SC_CLK1_IDCV2            (0x1 << 13)
#define SC_CLK1_IDCD4            (0x1 << 12)
#define SC_CLK1_RAWSCALE3        (0x1 << 11)
#define SC_CLK1_RAWSCALE2        (0x1 << 10)
#define SC_CLK1_RAWSCALE1        (0x1 << 9 )
#define SC_CLK1_RAWSCALE0        (0x1 << 8 )
#define SC_CLK1_ANTISHAKE_BUS    (0x1 << 7 )
#define SC_CLK1_ANTISHARE        (0x1 << 6 )
#define SC_CLK1_DID41_OUT        (0x1 << 5 )
#define SC_CLK1_DID40_OUT        (0x1 << 4 )
#define SC_CLK1_AI_ARBITER       (0x1 << 3 )
#define SC_CLK1_DID41_IN         (0x1 << 1 )
#define SC_CLK1_DID40_IN         (0x1 << 0 )
#define SC_CLK1_ALL              (0xffffffff)

/* clock gate2(0x38) */
#define SC_CLK2_PDAF             (0x1 << 18)
#define SC_CLK2_AC1              (0x1 << 17)
#define SC_CLK2_AC0              (0x1 << 16)
#define SC_CLK2_BT1              (0x1 << 15)
#define SC_CLK2_BT12X            (0x1 << 14)
#define SC_CLK2_MIPITXSYS        (0x1 << 13)
#define SC_CLK2_EMBEDDEDLINE     (0x1 << 12)
#define SC_CLK2_AIBUS            (0x1 << 11)
#define SC_CLK2_AI1              (0x1 << 10)
#define SC_CLK2_AI0              (0x1 << 9 )
#define SC_CLK2_FLASHBUS         (0x1 << 8 )
#define SC_CLK2_AHBBUS           (0x1 << 7 )
#define SC_CLK2_MIPITX           (0x1 << 5 )
#define SC_CLK2_RGBIR            (0x1 << 4 )
#define SC_CLK2_OSD4LBUS         (0x1 << 3 )
#define SC_CLK2_OSDRLCBUS        (0x1 << 2 )
#define SC_CLK2_USBDEV           (0x1 << 1 )
#define SC_CLK2_USB30M           (0x1 << 0 )
#define SC_CLK2_ALL              (0xffffffff)

/* logic reset (0x20) */
#define SC_RESET0_SIF1   	(0x1 << 31) //sfc
#define SC_RESET0_SIF0		(0x1 << 30)
#define SC_RESET0_NAND       (0x1 << 29)
#define SC_RESET0_VIF1       (0x1 << 28)
#define SC_RESET0_VIF0       (0x1 << 27)
#define SC_RESET0_VP         (0x1 << 26)
#define SC_RESET0_DMA        (0x1 << 25)
#define SC_RESET0_STITCH_BYPASS    (0x1 << 24)
#define SC_RESET0_AHB        (0x1 << 23)
#define SC_RESET0_SCCBM1     (0x1 << 22)
#define SC_RESET0_SCCBM0     (0x1 << 21)
#define SC_RESET0_UARTS      (0x1 << 20)
#define SC_RESET0_UARTM      (0x1 << 19)
#define SC_RESET0_MIPIRX3    (0x1 << 18)
#define SC_RESET0_MIPIRX2    (0x1 << 17)
#define SC_RESET0_MIPIRX1    (0x1 << 16)
#define SC_RESET0_MIPIRX0    (0x1 << 15)
#define SC_RESET0_FB4        (0x1 << 14)
#define SC_RESET0_ANTISHAKE  (0x1 << 13)
#define SC_RESET0_ECIF1      (0x1 << 12)
#define SC_RESET0_ECIF0      (0x1 << 11)
#define SC_RESET0_FB3        (0x1 << 10)
#define SC_RESET0_FB2        (0x1 << 9 )
#define SC_RESET0_FB1        (0x1 << 8 )
#define SC_RESET0_FB0        (0x1 << 7 )
#define SC_RESET0_SCIF2      (0x1 << 6 )
#define SC_RESET0_SCIF1      (0x1 << 5 )
#define SC_RESET0_ISP        (0x1 << 4 )
#define SC_RESET0_MBUS       (0x1 << 3 )
#define SC_RESET0_MD         (0x1 << 2 )
#define SC_RESET0_CIF0       (0x1 << 1 )
#define SC_RESET0_GPIO       (0x1 << 0 )
#define SC_RESET0_ALL        (0xffffffff)

/* logic reset 0x24 */
#define SC_RESET1_AI1            (0x1 << 31) 
#define SC_RESET1_AI0            (0x1 << 30)
#define SC_RESET1_STITCH         (0x1 << 29)
#define SC_RESET1_DCPC1          (0x1 << 28)
#define SC_RESET1_DCPC0          (0x1 << 27)
#define SC_RESET1_VFIFO_LEFT     (0x1 << 26)
#define SC_RESET1_VFIFO_RIGHT    (0x1 << 25)
#define SC_RESET1_MIMG           (0x1 << 24)
#define SC_RESET1_USBHOST_PHY    (0x1 << 23)
#define SC_RESET1_USBHOST        (0x1 << 22)
#define SC_RESET1_EMBL           (0x1 << 21)
#define SC_RESET1_MIPICIF3       (0x1 << 20)
#define SC_RESET1_MIPICIF2       (0x1 << 19)
#define SC_RESET1_MIPICIF1       (0x1 << 18)
#define SC_RESET1_MIPICIF0       (0x1 << 17)
#define SC_RESET1_IDCV2          (0x1 << 16)
#define SC_RESET1_IDCD4          (0x1 << 15)
#define SC_RESET1_RAWSCALE3      (0x1 << 14)
#define SC_RESET1_RAWSCALE2      (0x1 << 13)
#define SC_RESET1_RAWSCALE1      (0x1 << 12)
#define SC_RESET1_RAWSCALE0      (0x1 << 11)
#define SC_RESET1_DID41_OUT      (0x1 << 8 )
#define SC_RESET1_DID40_OUT      (0x1 << 7 )
#define SC_RESET1_DID41_IN       (0x1 << 4 )
#define SC_RESET1_DID40_IN       (0x1 << 3 )
#define SC_RESET1_USBDEV_IRQ     (0x1 << 2 )
#define SC_RESET1_USBDEV         (0x1 << 1 )
#define SC_RESET1_USBPHY         (0x1 << 0 )
#define SC_RESET1_ALL            (0xffffffff)

/* logic reset2 (0x84) */
#define SC_RESET2_SIF2           (0x1 << 24)
#define SC_RESET2_ISPD1CLOCK     (0x1 << 23)
#define SC_RESET2_D4CLK          (0x1 << 22)
#define SC_RESET2_D2CLK          (0x1 << 21)
#define SC_RESET2_D1CLK          (0x1 << 20)
#define SC_RESET2_MIPITXSCL      (0x1 << 19)
#define SC_RESET2_PDAF           (0x1 << 18)
#define SC_RESET2_CRYPTION       (0x1 << 17)
#define SC_RESET2_AC1            (0x1 << 16)
#define SC_RESET2_AC0            (0x1 << 15)
#define SC_RESET2_AI             (0x1 << 14)
#define SC_RESET2_AUDIOCODEC     (0x1 << 13)
#define SC_RESET2_COLORBAR       (0x1 << 12)
#define SC_RESET2_CIF1           (0x1 << 11)
#define SC_RESET2_RGBIR          (0x1 << 10)
#define SC_RESET2_MIPITX         (0x1 << 9 )
#define SC_RESET2_BT12X          (0x1 << 8 )
#define SC_RESET2_BT1LOGIC       (0x1 << 7 )
#define SC_RESET2_OSD4L          (0x1 << 6 )
#define SC_RESET2_OSDRLC         (0x1 << 5 )
#define SC_RESET2_SCCBM2         (0x1 << 4 )
#define SC_RESET2_SCCBM3         (0x1 << 3 )
#define SC_RESET2_YUVSCALE2      (0x1 << 2 )
#define SC_RESET2_YUVSCALE1      (0x1 << 1 )
#define SC_RESET2_YUVSCALE0      (0x1 << 0 )
#define SC_RESET2_ALL            (0xffffffff)

/* register reset 0x28 */
#define SC_RRESET0_AUDIO_CODEC    (0x1 << 31)
#define SC_RRESET0_VE             (0x1 << 29)
#define SC_RRESET0_DMA            (0x1 << 28)
#define SC_RRESET0_UARTS          (0x1 << 27)
#define SC_RRESET0_UARTM          (0x1 << 26)
#define SC_RRESET0_VIF1           (0x1 << 25)
#define SC_RRESET0_VIF0           (0x1 << 24)
#define SC_RRESET0_MIMG           (0x1 << 23)
#define SC_RRESET0_SCCBM3         (0x1 << 22)
#define SC_RRESET0_SCCBM2         (0x1 << 21)
#define SC_RRESET0_SCCBM1         (0x1 << 20)
#define SC_RRESET0_SCCBM0         (0x1 << 19)
#define SC_RRESET0_MIPIRX3        (0x1 << 18)
#define SC_RRESET0_MIPIRX2        (0x1 << 17)
#define SC_RRESET0_MIPIRX1        (0x1 << 16)
#define SC_RRESET0_MIPIRX0        (0x1 << 15)
#define SC_RRESET0_MIPITX         (0x1 << 14)
#define SC_RRESET0_SIF2           (0x1 << 13)
#define SC_RRESET0_FB4            (0x1 << 12)
#define SC_RRESET0_ECIF1          (0x1 << 11)
#define SC_RRESET0_ECIF0          (0x1 << 10)
#define SC_RRESET0_FB3            (0x1 << 9 )
#define SC_RRESET0_FB2            (0x1 << 8 )
#define SC_RRESET0_FB1            (0x1 << 7 )
#define SC_RRESET0_FB0            (0x1 << 6 )
#define SC_RRESET0_ISP            (0x1 << 5 )
#define SC_RRESET0_MD             (0x1 << 4 )
#define SC_RRESET0_CIF1           (0x1 << 3 )
#define SC_RRESET0_RGBIR          (0x1 << 2 )
#define SC_RRESET0_CIF0           (0x1 << 1 )
#define SC_RRESET0_GPIO           (0x1 << 0 )
#define SC_RRESET0_ALL            (0xffffffff)

/* register reset 0x2c */
#define SC_RRESET1_AI1           (0x1 << 31) 
#define SC_RRESET1_AI0           (0x1 << 30)
#define SC_RRESET1_SIF1          (0x1 << 29)
#define SC_RRESET1_SIF0          (0x1 << 28)
#define SC_RRESET1_SCIF1         (0x1 << 27)
#define SC_RRESET1_NAND         (0x1 << 26)
#define SC_RRESET1_CRYPTION      (0x1 << 25)
#define SC_RRESET1_STITCH        (0x1 << 24)
#define SC_RRESET1_IDC           (0x1 << 23)
#define SC_RRESET1_RAWSCALE3     (0x1 << 22)
#define SC_RRESET1_RAWSCALE2     (0x1 << 21)
#define SC_RRESET1_RAWSCALE1     (0x1 << 20)
#define SC_RRESET1_RAWSCALE0     (0x1 << 19)
#define SC_RRESET1_DCPC1         (0x1 << 18)
#define SC_RRESET1_DCPC0         (0x1 << 17)
#define SC_RRESET1_MIPICIF3      (0x1 << 16)
#define SC_RRESET1_MIPICIF2      (0x1 << 15)
#define SC_RRESET1_MIPICIF1      (0x1 << 14)
#define SC_RRESET1_MIPICIF0      (0x1 << 13)
#define SC_RRESET1_EMBL          (0x1 << 12)
#define SC_RRESET1_SCIF2         (0x1 << 11)
#define SC_RRESET1_VFIFO         (0x1 << 10)
#define SC_RRESET1_USBDEV        (0x1 << 9 )
#define SC_RRESET1_OSD4L         (0x1 << 8 )
#define SC_RRESET1_OSDRLC        (0x1 << 7 )
#define SC_RRESET1_BT            (0x1 << 6 )
#define SC_RRESET1_ANTISHAKE     (0x1 << 5 )
#define SC_RRESET1_ALL           (0xffffffff)

#define SC_RESET0_RELEASE(XXX) do{ WriteReg32(REG_SC_RESET0, ReadReg32(REG_SC_RESET0) & ~(SC_RESET0_##XXX)); }while(0)
#define SC_RESET0_SET(XXX) do{ WriteReg32(REG_SC_RESET0, ReadReg32(REG_SC_RESET0) | (SC_RESET0_##XXX)); }while(0)
#define SC_RRESET0_RELEASE(XXX) do{ WriteReg32(REG_SC_RRESET0, ReadReg32(REG_SC_RRESET0) & ~(SC_RRESET0_##XXX)); }while(0)
#define SC_RRESET0_SET(XXX) do{ WriteReg32(REG_SC_RRESET0, ReadReg32(REG_SC_RRESET0) | (SC_RRESET0_##XXX)); }while(0)

#define SC_RESET1_RELEASE(XXX) do{ WriteReg32(REG_SC_RESET1, ReadReg32(REG_SC_RESET1) & ~(SC_RESET1_##XXX)); }while(0)
#define SC_RESET1_SET(XXX) do{ WriteReg32(REG_SC_RESET1, ReadReg32(REG_SC_RESET1) | (SC_RESET1_##XXX)); }while(0)
#define SC_RRESET1_RELEASE(XXX) do{ WriteReg32(REG_SC_RRESET1, ReadReg32(REG_SC_RRESET1) & ~(SC_RRESET1_##XXX)); }while(0)
#define SC_RRESET1_SET(XXX) do{ WriteReg32(REG_SC_RRESET1, ReadReg32(REG_SC_RRESET1) | (SC_RRESET1_##XXX)); }while(0)

#define SC_RESET2_SET(XXX) do{ WriteReg32(REG_SC_RESET2, ReadReg32(REG_SC_RESET2) | (SC_RESET2_##XXX)); }while(0)
#define SC_RESET2_RELEASE(XXX) do{ WriteReg32(REG_SC_RESET2, ReadReg32(REG_SC_RESET2) & ~(SC_RESET2_##XXX)); }while(0)

#define SC_CLK0_EN(XXX) do{ WriteReg32(REG_SC_CLK0, ReadReg32(REG_SC_CLK0) | (SC_CLK0_##XXX)); }while(0)
#define SC_CLK0_DISABLE(XXX) do{ WriteReg32(REG_SC_CLK0, ReadReg32(REG_SC_CLK0) & ~(SC_CLK0_##XXX)); }while(0)
#define SC_CLK1_EN(XXX) do{ WriteReg32(REG_SC_CLK1, ReadReg32(REG_SC_CLK1) | (SC_CLK1_##XXX)); }while(0)
#define SC_CLK1_DISABLE(XXX) do{ WriteReg32(REG_SC_CLK1, ReadReg32(REG_SC_CLK1) & ~(SC_CLK1_##XXX)); }while(0)
#define SC_CLK2_EN(XXX) do{ WriteReg32(REG_SC_CLK2, ReadReg32(REG_SC_CLK2) | (SC_CLK2_##XXX)); }while(0)
#define SC_CLK2_DISABLE(XXX) do{ WriteReg32(REG_SC_CLK2, ReadReg32(REG_SC_CLK2) & ~(SC_CLK2_##XXX)); }while(0)

/*gpio/normall function selection*/
/* register0 gpio/normal function selection 0x22c, 0: normal function 1: GPIO, default is 0 */
#define SC_PINSEL0_SD_D3          (0x1 << 31)
#define SC_PINSEL0_SD_D2          (0x1 << 30)
#define SC_PINSEL0_SD_D1          (0x1 << 29)
#define SC_PINSEL0_SD_D0          (0x1 << 28)
#define SC_PINSEL0_JTAG_TDO       (0x1 << 27)
#define SC_PINSEL0_JTAG_TDI       (0x1 << 26)
#define SC_PINSEL0_JTAG_TMS       (0x1 << 25)
#define SC_PINSEL0_JTAG_CLK       (0x1 << 24)
#define SC_PINSEL0_JTAG_RST       (0x1 << 23)
#define SC_PINSEL0_SDIO_CLK       (0x1 << 22)
#define SC_PINSEL0_SDIO_CMD       (0x1 << 21)
#define SC_PINSEL0_SDIO_D3        (0x1 << 20)
#define SC_PINSEL0_SDIO_D2        (0x1 << 19)
#define SC_PINSEL0_SDIO_D1        (0x1 << 18)
#define SC_PINSEL0_SDIO_D0        (0x1 << 17)
#define SC_PINSEL0_SFC_DQ3        (0x1 << 16)
#define SC_PINSEL0_SFC_DQ2        (0x1 << 15)
#define SC_PINSEL0_SFC_DQ1        (0x1 << 14)
#define SC_PINSEL0_SFC_DQ0        (0x1 << 13)
#define SC_PINSEL0_SFC_CLK        (0x1 << 12)
#define SC_PINSEL0_SFC_CS         (0x1 << 11)
#define SC_PINSEL0_SNR_CCLK       (0x1 << 10)
#define SC_PINSEL0_SNR_PCLK       (0x1 << 9)
#define SC_PINSEL0_SNR_VSYNC      (0x1 << 8)
#define SC_PINSEL0_SNR_HREF       (0x1 << 7)
#define SC_PINSEL0_SNR_D9         (0x1 << 6)
#define SC_PINSEL0_SNR_D8         (0x1 << 5)
#define SC_PINSEL0_SNR_DATA7TO0   (0x1 << 4)
#define SC_PINSEL0_UARTS_TX       (0x1 << 3)
#define SC_PINSEL0_UARTS_RX       (0x1 << 2)
#define SC_PINSEL0_UARTM_CTSARTS  (0x1 << 1) /*set both CTS and RTS pin as normal fuction or gpio */
#define SC_PINSEL0_UARTM_RXATX    (0x1 << 0)
#define SC_PINSEL0_ALL            (0xffffffff)

/* register2 gpio/normal function selection 0x23c */
#define SC_PINSEL2_BT1120_DATA2   (0x1 << 9) /* BT1120 [15:10] */
#define SC_PINSEL2_BT1120_HSYNC   (0x1 << 8)
#define SC_PINSEL2_BT1120_VSYNC   (0x1 << 7)
#define SC_PINSEL2_BT1120_DE      (0x1 << 6)
#define SC_PINSEL2_BT1120_CLK     (0x1 << 5)
#define SC_PINSEL2_BT1120_DATA1   (0x1 << 4) /* BT1120 [9:0] */
#define SC_PINSEL2_MCLK           (0x1 << 3)
#define SC_PINSEL2_I2S            (0x1 << 2)
#define SC_PINSEL2_SD_CLK         (0x1 << 1)
#define SC_PINSEL2_SD_CMD         (0x1 << 0)
#define SC_PINSEL2_ALL            (0xffffffff)

/*select pin as gpio/normall function */
/*set one pin*/
#define SC_PINSEL0_FUNC(XXX) do{ WriteReg32(REG_SC_PINSEL0, ReadReg32(REG_SC_PINSEL0) & ~(SC_PINSEL0_##XXX)); }while(0)
#define SC_PINSEL0_GPIO(XXX) do{ WriteReg32(REG_SC_PINSEL0, ReadReg32(REG_SC_PINSEL0) | (SC_PINSEL0_##XXX)); }while(0)
#define SC_PINSEL2_FUNC(XXX) do{ WriteReg32(REG_SC_PINSEL2, ReadReg32(REG_SC_PINSEL2) & ~(SC_PINSEL2_##XXX)); }while(0)
#define SC_PINSEL2_GPIO(XXX) do{ WriteReg32(REG_SC_PINSEL2, ReadReg32(REG_SC_PINSEL2) | (SC_PINSEL2_##XXX)); }while(0)
/*set one or multiple pin*/
#define SC_PINSEL0_FUNC_MUL(x) do{ WriteReg32(REG_SC_PINSEL0, ReadReg32(REG_SC_PINSEL0) & ~(x)); }while(0)
#define SC_PINSEL0_GPIO_MUL(x) do{ WriteReg32(REG_SC_PINSEL0, ReadReg32(REG_SC_PINSEL0) | (x)); }while(0)
#define SC_PINSEL2_FUNC_MUL(x) do{ WriteReg32(REG_SC_PINSEL2, ReadReg32(REG_SC_PINSEL2) & ~(x)); }while(0)
#define SC_PINSEL2_GPIO_MUL(x) do{ WriteReg32(REG_SC_PINSEL2, ReadReg32(REG_SC_PINSEL2) | (x)); }while(0)

/*pin input enable, if disable, input will always be 0. 0:disable 1:enable*/
/* register 0x24c */
#define SC_PINEN0_SDIO_D2          (0x1 << 31)
#define SC_PINEN0_SDIO_D1          (0x1 << 30)
#define SC_PINEN0_SDIO_D0          (0x1 << 29)
#define SC_PINEN0_SDIO_CLK         (0x1 << 28)
#define SC_PINEN0_SDIO_CMD         (0x1 << 27)
#define SC_PINEN0_SD_D3            (0x1 << 26)
#define SC_PINEN0_SD_D2            (0x1 << 25)
#define SC_PINEN0_SD_D1            (0x1 << 24)
#define SC_PINEN0_SD_D0            (0x1 << 23)
#define SC_PINEN0_SD_CLK           (0x1 << 22)
#define SC_PINEN0_SD_CMD           (0x1 << 21)
#define SC_PINEN0_DVP_PCLK         (0x1 << 20)
#define SC_PINEN0_DVP_CCLK         (0x1 << 19)
#define SC_PINEN0_DVP_HREF         (0x1 << 18)
#define SC_PINEN0_DVP_VSYNC        (0x1 << 17)
#define SC_PINEN0_DVP_D9           (0x1 << 16)
#define SC_PINEN0_DVP_D8           (0x1 << 15)
#define SC_PINEN0_DVP_D7           (0x1 << 14)
#define SC_PINEN0_DVP_D6           (0x1 << 13)
#define SC_PINEN0_DVP_D5           (0x1 << 12)
#define SC_PINEN0_DVP_D4           (0x1 << 11)
#define SC_PINEN0_DVP_D3           (0x1 << 10)
#define SC_PINEN0_DVP_D2           (0x1 << 9)
#define SC_PINEN0_DVP_D1           (0x1 << 8)
#define SC_PINEN0_DVP_D0           (0x1 << 7)
#define SC_PINEN0_BOOT2            (0x1 << 6)
#define SC_PINEN0_BOOT1            (0x1 << 5)
#define SC_PINEN0_BOOT0            (0x1 << 4)
#define SC_PINEN0_JTAG_TDO         (0x1 << 3)
#define SC_PINEN0_JTAG_TDI         (0x1 << 2)
#define SC_PINEN0_JTAG_TMS         (0x1 << 1)
#define SC_PINEN0_JTAG_TCLK        (0x1 << 0)
#define SC_PINEN0_ALL              (0xffffffff)

/* register 0x250 */
#define SC_PINEN1_BT1120_D9        (0x1 << 31)
#define SC_PINEN1_BT1120_D8        (0x1 << 30)
#define SC_PINEN1_BT1120_D7        (0x1 << 29)
#define SC_PINEN1_BT1120_D6        (0x1 << 28)
#define SC_PINEN1_BT1120_D5        (0x1 << 27)
#define SC_PINEN1_BT1120_D4        (0x1 << 26)
#define SC_PINEN1_BT1120_D3        (0x1 << 25)
#define SC_PINEN1_BT1120_D2        (0x1 << 24)
#define SC_PINEN1_BT1120_D1        (0x1 << 23)
#define SC_PINEN1_BT1120_D0        (0x1 << 22)
#define SC_PINEN1_BT1120_VSYNC     (0x1 << 21)
#define SC_PINEN1_BT1120_HSYNC     (0x1 << 20)
#define SC_PINEN1_BT1120_DE        (0x1 << 19)
#define SC_PINEN1_BT1120_CLK       (0x1 << 18)
#define SC_PINEN1_UARTS_RX         (0x1 << 17) 
#define SC_PINEN1_UARTS_TX         (0x1 << 16) 
#define SC_PINEN1_UARTM_CTS        (0x1 << 15) 
#define SC_PINEN1_UARTM_RTS        (0x1 << 14) 
#define SC_PINEN1_UARTM_RX         (0x1 << 13) 
#define SC_PINEN1_UARTM_TX         (0x1 << 12) 
#define SC_PINEN1_SFC_CS           (0x1 << 11) 
#define SC_PINEN1_SFC_CLK          (0x1 << 10) 
#define SC_PINEN1_SFC_DQ3          (0x1 << 9) 
#define SC_PINEN1_SFC_DQ2          (0x1 << 8) 
#define SC_PINEN1_SFC_DQ1          (0x1 << 7) 
#define SC_PINEN1_SFC_DQ0          (0x1 << 6) 
#define SC_PINEN1_I2S_MCLK         (0x1 << 5) 
#define SC_PINEN1_I2S_BCLK         (0x1 << 4) 
#define SC_PINEN1_I2S_LCLK         (0x1 << 3) 
#define SC_PINEN1_I2S_DS           (0x1 << 2) 
#define SC_PINEN1_I2S_DI           (0x1 << 1) 
#define SC_PINEN1_SDIO_D3          (0x1 << 0) 
#define SC_PINEN1_ALL              (0xffffffff)

#define SC_PINEN2_BT1120_D10		(0x1 << 0)
#define SC_PINEN2_BT1120_D11		(0x1 << 1)
#define SC_PINEN2_BT1120_D12		(0x1 << 2)
#define SC_PINEN2_BT1120_D13		(0x1 << 3)
#define SC_PINEN2_BT1120_D14		(0x1 << 4)
#define SC_PINEN2_BT1120_D15		(0x1 << 5)
#define SC_PINEN2_ALL              (0xffffffff)

/*pin input enable. 1: enable*/
/*set one pin*/
#define SC_PIN0_EN(XXX) do{ WriteReg32(REG_SC_PINEN0, ReadReg32(REG_SC_PINEN0) | (SC_PINEN0_##XXX)); }while(0)
#define SC_PIN0_DISABLE(XXX) do{ WriteReg32(REG_SC_PINEN0, ReadReg32(REG_SC_PINEN0) & ~(SC_PINEN0_##XXX)); }while(0)
#define SC_PIN1_EN(XXX) do{ WriteReg32(REG_SC_PINEN1, ReadReg32(REG_SC_PINEN1) | (SC_PINEN1_##XXX)); }while(0)
#define SC_PIN1_DISABLE(XXX) do{ WriteReg32(REG_SC_PINEN1, ReadReg32(REG_SC_PINEN1) & ~(SC_PINEN1_##XXX)); }while(0)
#define SC_PIN2_EN(XXX) do{ WriteReg32(REG_SC_PINEN2, ReadReg32(REG_SC_PINEN2) | (SC_PINEN2_##XXX)); }while(0)
#define SC_PIN2_DISABLE(XXX) do{ WriteReg32(REG_SC_PINEN2, ReadReg32(REG_SC_PINEN2) & ~(SC_PINEN2_##XXX)); }while(0)
/*set one or multiple pin*/
#define SC_PIN0_EN_MUL(x) do{ WriteReg32(REG_SC_PINEN0, ReadReg32(REG_SC_PINEN0) | (x)); }while(0)
#define SC_PIN0_DISABLE_MUL(x) do{ WriteReg32(REG_SC_PINEN0, ReadReg32(REG_SC_PINEN0) & ~(x)); }while(0)
#define SC_PIN1_EN_MUL(x) do{ WriteReg32(REG_SC_PINEN1, ReadReg32(REG_SC_PINEN1) | (x)); }while(0)
#define SC_PIN1_DISABLE_MUL(x) do{ WriteReg32(REG_SC_PINEN1, ReadReg32(REG_SC_PINEN1) & ~(x)); }while(0)
#define SC_PIN2_EN_MUL(x) do{ WriteReg32(REG_SC_PINEN2, ReadReg32(REG_SC_PINEN2) | (x)); }while(0)
#define SC_PIN2_DISABLE_MUL(x) do{ WriteReg32(REG_SC_PINEN2, ReadReg32(REG_SC_PINEN2) & ~(x)); }while(0)

/*****************************************************/
/*  MailBox Register  */
/*****************************************************/
#define MBX_BASE_ADDR	0xc0007000
#define MBX_MASTER_WD	(MBX_BASE_ADDR + 0x4)
#define MBX_SLAVE_WD	(MBX_BASE_ADDR + 0xc)
#define MBX_INTMASK		(MBX_BASE_ADDR + 0x10)

#define MBX_BUSLOCK_CTRL     (MBX_BASE_ADDR + 0x20)          //used to lock bus for dual core mutex
#define MBX_BUSLOCK_STAT     (MBX_BASE_ADDR + 0x24)         //bus lock status, if read out 1, locked


/*INTERNAL_START*/

/*****************************************************/
/* GPIO register  0xC0001200 - 0xC00012FF */
/*****************************************************/
#define GPIO_BASE_ADDR			0xc0001200
#define REG_GPIO_I               (GPIO_BASE_ADDR+0x00)
#define REG_GPIO_V               (GPIO_BASE_ADDR+0x04)
#define REG_GPIO_C               (GPIO_BASE_ADDR+0x08)
#define REG_GPIO_IRQ_C2          (GPIO_BASE_ADDR+0x0C)
#define REG_GPIO_IRQ_M           (GPIO_BASE_ADDR+0x10)
#define REG_GPIO_IRQ_C0          (GPIO_BASE_ADDR+0x14)
#define REG_GPIO_IRQ_C1          (GPIO_BASE_ADDR+0x18)
#define REG_GPIO_IRQ_S           (GPIO_BASE_ADDR+0x1C)

#define REG_GPIO_DRV0            (GPIO_BASE_ADDR+0x54)
#define REG_GPIO_DRV1            (GPIO_BASE_ADDR+0x58)
#define REG_GPIO_DRV2            (GPIO_BASE_ADDR+0x5c)
#define REG_GPIO_DRV3            (GPIO_BASE_ADDR+0x60)
#define REG_GPIO_DRV4            (GPIO_BASE_ADDR+0x64)


/*****************************************************/
/*  SCCB Register */
/*****************************************************/
#define SCCBM0_BASE_ADDR    0xc0006000
#define SCCBM1_BASE_ADDR    0xc0006100
#define SCCBM2_BASE_ADDR    0xc0006200
#define SCCBM3_BASE_ADDR    0xc0006300
#define SCCB_BASE_ADDR(num)      (SCCBM0_BASE_ADDR + 0x100*num)

#define REG_SCCB_SP0(num)        (SCCBM0_BASE_ADDR + 0x100*num + 0x0) // sccb speed 0
#define REG_SCCB_SP1(num)        (SCCBM0_BASE_ADDR + 0x100*num + 0x1) // sccb speed 1
#define REG_SCCB_ID(num)         (SCCBM0_BASE_ADDR + 0x100*num + 0x4) // ID to be sent
#define REG_SCCB_AL(num)         (SCCBM0_BASE_ADDR + 0x100*num + 0x8) // Address 2nd to be sen
#define REG_SCCB_AH(num)         (SCCBM0_BASE_ADDR + 0x100*num + 0x9) // Address  1st to be sent
#define REG_SCCB_DOL(num)        (SCCBM0_BASE_ADDR + 0x100*num + 0xc) // Data out, 2nd to be sent
#define REG_SCCB_DOH(num)        (SCCBM0_BASE_ADDR + 0x100*num + 0xd) //Data out, 1st to be sent
#define REG_SCCB_B(num)          (SCCBM0_BASE_ADDR + 0x100*num + 0x10) // Enable control
#define REG_SCCB_CMD(num)        (SCCBM0_BASE_ADDR + 0x100*num + 0x14) // Master command control
#define REG_SCCB_DIL(num)        (SCCBM0_BASE_ADDR + 0x100*num + 0x1c) //Data in, receive 2nd
#define REG_SCCB_STA(num)        (SCCBM0_BASE_ADDR + 0x100*num + 0x18) // Data in, receive 1st

/*****************************************************/
/*  SIF Register */
/*****************************************************/
#define SIF0_BASE  0xc0002800
#define SIF2_BASE  0xc0002a00 //TODO: test

/*****************************************************/
/*  SFC Register  */
/*****************************************************/
#define SFC_BASE 0xc0002c00

#define REG_SFC_TIM_CFG        (SFC_BASE+0x0)
#define REG_SFC_PIN_CFG        (SFC_BASE+0x4)
#define REG_SFC_SIF_CFG        (SFC_BASE+0x8)
#define REG_SFC_MOD_CFG        (SFC_BASE+0xc)
#define REG_SFC_DAC_RDCFG      (SFC_BASE+0x10) 
#define REG_SFC_DAC_WRCFG      (SFC_BASE+0x14)
#define REG_SFC_DAC_OFTADR     (SFC_BASE+0x18)
#define REG_SFC_HEAD_DUMMY     (SFC_BASE+0x1c)
#define REG_SFC_TRIG           (SFC_BASE+0x20)
#define REG_SFC_FLASH_CMDCFG   (SFC_BASE+0x24)
#define REG_SFC_FLASH_R_DATCFG (SFC_BASE+0x28) /*sfc flash read datacfg*/
#define REG_SFC_FLASH_W_DATCFG (SFC_BASE+0x78) /*sfc flash write datacfg*/
#define REG_SFC_FLASH_ADDRCFG  (SFC_BASE+0x2c)
#define REG_SFC_STE_WRREG0     (SFC_BASE+0x30)
#define REG_SFC_STE_WRREG1     (SFC_BASE+0x34)
#define REG_SFC_STE_RDREG0     (SFC_BASE+0x38)
#define REG_SFC_STE_RDREG1     (SFC_BASE+0x3c)
#define REG_SFC_DMA_BUFWTMK    (SFC_BASE+0x40)
#define REG_SFC_DMA_HEADCTRL   (SFC_BASE+0x44)
#define REG_SFC_DMA_MIDDCTRL   (SFC_BASE+0x48)
#define REG_SFC_DMA_TAILCTRL   (SFC_BASE+0x4c)
#define REG_SFC_DMA_LEN        (SFC_BASE+0x50)
#define REG_SFC_STATUS         (SFC_BASE+0x54)
#define REG_SFC_CMDFIFO        (SFC_BASE+0x58)
#define REG_SFC_TXFIFO         (SFC_BASE+0x5c)
#define REG_SFC_RXFIFO         (SFC_BASE+0x60)
#define REG_SFC_FIFO_WTMK      (SFC_BASE+0x64)
#define REG_SFC_FIFO_STATUS    (SFC_BASE+0x68)
#define REG_SFC_INT_MASK       (SFC_BASE+0x70)
#define REG_SFC_INT            (SFC_BASE+0x74)
#define REG_SFC_DMA_WRBUF      (SFC_BASE+0xf4)
#define REG_SFC_DMA_RDBUF      (SFC_BASE+0xf8)
#define REG_SFC_DAC_BASE       (SFC_BASE+0x4000)

/*****************************************************/
/*  NAND Register  */
/*****************************************************/
#define NAND_BASE_ADDR 0xc0004000
#define   REG_NAND_FSM_CTRL       (NAND_BASE_ADDR+0x00)                // hardware finite state machine
#define   REG_NAND_TRAN_SIZE      (NAND_BASE_ADDR+0x04)                // transfer size config
#define   REG_NAND_TIMING         (NAND_BASE_ADDR+0x08)                 // flash timing config

#define   REG_NAND_MODE_FIFO      (NAND_BASE_ADDR+0x10)                 // command/mode fifo
#define   REG_NAND_WRITE_FIFO     (NAND_BASE_ADDR+0x14)                 // write fifo
#define   REG_NAND_READ_FIFO      (NAND_BASE_ADDR+0x18)                 // read fifo
#define   REG_NAND_FIFO_STATUS    (NAND_BASE_ADDR+0x1c)                 // fifo status

#define   REG_NAND_INT   		  (NAND_BASE_ADDR+0x20)					// interupt status
#define   REG_NAND_INT_MASK       (NAND_BASE_ADDR+0x24)                 // interrupt mask
#define   REG_NAND_DMA_ADDR       (NAND_BASE_ADDR+0x30)                 // dma address
#define   REG_NAND_DMA_LEN        (NAND_BASE_ADDR+0x34)                 // dma length
#define   REG_NAND_DMA_CFG        (NAND_BASE_ADDR+0x38)                 // dma config
#define   REG_NAND_DMA_START      (NAND_BASE_ADDR+0x3c)					// dma trigger

#define   REG_NAND_ECC_CFG        (NAND_BASE_ADDR+0x40)					//internal ECC config
#define   REG_NAND_ECC_START      (NAND_BASE_ADDR+0x44)					//internal ECC trigger
#define   REG_NAND_ECC_BYTE0      (NAND_BASE_ADDR+0x50)					//internal ECC value0
#define   REG_NAND_ECC_BYTE1      (NAND_BASE_ADDR+0x54)					//internal ECC value1
#define   REG_NAND_ECC_BYTE2      (NAND_BASE_ADDR+0x58)					//internal ECC value2
#define   REG_NAND_ECC_BYTE3      (NAND_BASE_ADDR+0x5c)					//internal ECC value3

#define   REG_NAND_IDSTA_REG0     (NAND_BASE_ADDR+0x60)					//ID/status reg0
#define   REG_NAND_IDSTA_REG1     (NAND_BASE_ADDR+0x64)					//ID/status reg1
#define   REG_NAND_FMS_STATUS     (NAND_BASE_ADDR+0x70)					//FSM status
#define   REG_NAND_RBN_STATUS     (NAND_BASE_ADDR+0x74)					//R/B status
#define	  REG_NAND_USRDEF_CMD     (NAND_BASE_ADDR+0x78)					//user defined cmd

/* TODO: rename to REG_NAND_XXX */
/* NFC_FSM_CTRL */
#define CLEAR_FSM_BIT  		(7)
#define RBN_EDGE_SEL_BIT	(4)
#define CEB_HW_CTRL_BIT		(3)
#define CEN_SEL_BIT			(2)
#define CEN_CONFIG_BIT		(1)
#define WPN_CONFIG_BIT		(0)
/* NFC_TIMING */
#define TADLM_BIT			(24)
#define TWP_BIT				(20)
#define TWH_BIT				(16)
#define TREA_BIT			(12)
#define TWHRM_BIT			(8)
#define TACSM_BIT			(0)
/* NFC_MODE_FIFO */
#define NFC_MODE_TYPE		(27)
#define NFC_CMD_CYCLE		(24)
/* NFC_FIFO_STATUS */
#define RD_FIFO_FULL		(6)
#define RD_FIFO_EMPTY		(5)
#define RD_FIFO_FULL_BURST	(4)
#define MODE_FIFO_FULL		(3)
#define MODE_FIFO_EMPTY		(2)
#define WR_FIFO_FULL		(1)
#define WR_FIFO_RMPTY		(0)
/* NFC_INT,NFC_INT_MASK */
#define ID_STA_CPLT			(5)
#define IO_DAT_CPLT			(4)
#define RBN_INT				(2)
#define ECC_CPTL			(1)
#define DMA_DONE			(0)
/* NFC_DMA_CFG */
#define NFC_DMA_DIRECTION	(4)
#define NFC_DMA_SELECTION	(0)
/* NFC_ECC_CFG */
#define ECC_DIRECTION		(2)
#define ECC_SIZE_BIT		(1)
#define ECC_EN				(0)

/*********************************************
	ECC MODULE REG
*********************************************/
#define ECC_BCHROM_BASE_ADDR    0xC0040000      // BCH ROM 
#define ECC_BCH_BASE_ADDR       0xC0004400      // BCH HW Registers
#define REG_ECC_BCH_DMA_DATA    (ECC_BCH_BASE_ADDR + 0x00) 
#define REG_ECC_BCH_FIFO_STATUS (ECC_BCH_BASE_ADDR + 0x10) 
#define REG_ECC_BCH_SW_RESET    (ECC_BCH_BASE_ADDR + 0x14) 
#define REG_ECC_BCH_DONE        (ECC_BCH_BASE_ADDR + 0x18) 
#define REG_ECC_BCH_PARITY_NUM  (ECC_BCH_BASE_ADDR + 0x1C) 
#define REG_ECC_BCH_PARITY0     (ECC_BCH_BASE_ADDR + 0x20) 
#define REG_ECC_BCH_PARITY1     (ECC_BCH_BASE_ADDR + 0x24) 
#define REG_ECC_BCH_PARITY2     (ECC_BCH_BASE_ADDR + 0x28) 
#define REG_ECC_BCH_PARITY3     (ECC_BCH_BASE_ADDR + 0x2c) 
#define REG_ECC_BCH_PARITY4     (ECC_BCH_BASE_ADDR + 0x30) 
#define REG_ECC_BCH_SYNDRM01    (ECC_BCH_BASE_ADDR + 0x34) 
#define REG_ECC_BCH_SYNDRM23    (ECC_BCH_BASE_ADDR + 0x38) 
#define REG_ECC_BCH_SYNDRM45    (ECC_BCH_BASE_ADDR + 0x3c) 
#define REG_ECC_BCH_SYNDRM67    (ECC_BCH_BASE_ADDR + 0x40) 
#define REG_ECC_BCH_SYNDRM89    (ECC_BCH_BASE_ADDR + 0x44) 
#define REG_ECC_BCH_SYNDRM1011  (ECC_BCH_BASE_ADDR + 0x48) 
#define REG_ECC_BCH_SYNDRM1213  (ECC_BCH_BASE_ADDR + 0x4c) 
#define REG_ECC_BCH_SYNDRM1415  (ECC_BCH_BASE_ADDR + 0x50) 
#define REG_ECC_BCH_SYNDRM1617  (ECC_BCH_BASE_ADDR + 0x54) 
#define REG_ECC_BCH_SYNDRM1819  (ECC_BCH_BASE_ADDR + 0x58) 
#define REG_ECC_BCH_SYNDRM2021  (ECC_BCH_BASE_ADDR + 0x5c) 
#define REG_ECC_BCH_SYNDRM2223  (ECC_BCH_BASE_ADDR + 0x60) 
#define REG_ECC_BCH_SYNDRM2425  (ECC_BCH_BASE_ADDR + 0x64)
#define REG_ECC_BCH_ERR_CNT     (ECC_BCH_BASE_ADDR + 0x68)
#define REG_ECC_BCH_ERR_LOC     (ECC_BCH_BASE_ADDR + 0x6c)
#define REG_ECC_BCH_RAND_NUM    (ECC_BCH_BASE_ADDR + 0x70)
/*INTERNAL_END */

/*********************************************
	SCIF REG
*********************************************/
#define SCIF1_BASE_ADDR	0xc0003800 
#define SCIF2_BASE_ADDR	0xc0003c00

#define   REG_SCIF_DMA_SYS_ADR    (0x00)                // DMA System Address
#define   REG_SCIF_BLK_CNT_SIZ    (0x04)                // Block Count & Size Register
#define   REG_SCIF_CMD_ARG        (0x08)                 // Command Argument Register
#define   REG_SCIF_CMD_TRMOD      (0x0c)                 // Command & Transfer Mode Resgister
#define   REG_SCIF_RESP0          (0x10)                 // SCIF Response Register0
#define   REG_SCIF_RESP1          (0x14)                 // SCIF Response Register1
#define   REG_SCIF_RESP2          (0x18)                 // SCIF Response Register2
#define   REG_SCIF_RESP3          (0x1c)                 // SCIF Response Register3
#define   REG_SCIF_DAT_TRAN_FIFO  (0x20)                 // Data Transfer FIFO 
#define   REG_SCIF_PRST_ST        (0x24)                 // Present Status Register
#define   REG_SCIF_HST_CTRL       (0x28)                 // Host Controller Register
#define   REG_SCIF_CLK_CTRL       (0x2c)                 // Host Clock control register
#define   REG_SCIF_NMRERR_ST      (0x30)                 // Normal & Error Status Register
#define   REG_SCIF_NMRERR_ST_EN   (0x34)                 // Normal & Error Status Enable Register
#define   REG_SCIF_NMRR_INT_EN    (0x38)                 // Normal & Error Interrupt Signal Enable Register
#define   REG_SCIF_ACMD12_ERR_ST  (0x3c)                 // Auto CMD12 Error Status Register
#define   REG_SCIF_CAP            (0x40)                 // Capabilitier Register
#define   REG_SCIF_ADMA_ERR_ST    (0x54)                 // ADMA error status
#define   REG_SCIF_ADMA_ADDR      (0x58)                 //ADMA address
#define   REG_SCIF_FIFO_WM        (0x64)                 // Tx fifo water mark
#define   REG_SCIF_SLOT_HST       (0xfc)                 // Slot Interrupt & Host Controller Version Register
#define   REG_SCIF_ECC_CTRL       (0xb4)

#define SCIF1_WP_DISABLE do{ WriteReg32(SCIF1_BASE_ADDR+REG_SCIF_FIFO_WM, ReadReg32(SCIF1_BASE_ADDR+REG_SCIF_FIFO_WM)|BIT7); }while(0)
#define SCIF2_WP_DISABLE do{ WriteReg32(SCIF2_BASE_ADDR+REG_SCIF_FIFO_WM, ReadReg32(SCIF2_BASE_ADDR+REG_SCIF_FIFO_WM)|BIT7); }while(0)
#define SCIF_ACCESS_RAM  do{ WriteReg32(REG_SC_ADDR+0x0, ReadReg32(REG_SC_ADDR+0x0)|BIT19); }while(0)

#define PIN_SCIF1_NORMAL do{ WriteReg32(REG_SC_ADDR+0x1c, ReadReg32(REG_SC_ADDR+0x1c)&(~(BIT0|BIT1|BIT2|BIT3)));\
							 WriteReg32(REG_SC_ADDR+0x22c, ReadReg32(REG_SC_ADDR+0x22c)&(~(BIT28|BIT29|BIT30|BIT31)));\
							 WriteReg32(REG_SC_ADDR+0x23c,ReadReg32(REG_SC_ADDR+0x23c)&(~(BIT0|BIT1)));\
}while(0)
#define PIN_SCIF2_NORMAL do{ WriteReg32(REG_SC_ADDR+0x1c, ReadReg32(REG_SC_ADDR+0x1c)&(~(BIT4|BIT5|BIT6|BIT7)));\
							 WriteReg32(REG_SC_ADDR+0x22c, ReadReg32(REG_SC_ADDR+0x22c)&(~(BIT17|BIT18|BIT19|BIT20|BIT21|BIT22)));\
}while(0)
#define PIN_SCIF3_NORMAL do{ WriteReg32(REG_SC_ADDR+0x1c, ReadReg32(REG_SC_ADDR+0x1c)|(BIT12));\
							 WriteReg32(REG_SC_ADDR+0x23c, ReadReg32(REG_SC_ADDR+0x23c)&(~(BIT4|BIT9)));\
}while(0)

#define PIN_SCIF1_ENABLE do{ WriteReg32(REG_SC_ADDR+0x24c, ReadReg32(REG_SC_ADDR+0x24c)|(BIT21|BIT22|BIT23|BIT24|BIT25|BIT26));\
}while(0)
#define PIN_SCIF2_ENABLE do{ WriteReg32(REG_SC_ADDR+0x24c, ReadReg32(REG_SC_ADDR+0x24c)|(BIT27|BIT28|BIT29|BIT30|BIT31));\
							 WriteReg32(REG_SC_ADDR+0x23c,ReadReg32(REG_SC_ADDR+0x23c)|(BIT0));\
}while(0)
#define PIN_SCIF3_ENABLE do{ WriteReg32(REG_SC_ADDR+0x250, ReadReg32(REG_SC_ADDR+0x250)|(BIT29|BIT30|BIT31));\
							 WriteReg32(REG_SC_ADDR+0x254,ReadReg32(REG_SC_ADDR+0x254)|(BIT3|BIT4));\
}while(0)

/*****************************************************/
/*  Cryption Register  */
/*****************************************************/
#define CRP_BASE_ADDR 0xc0038400
#define REG_CRP_CONFIG			(CRP_BASE_ADDR)
#define REG_CRP_START_ADDR		(CRP_BASE_ADDR+0x04)
#define REG_CRP_LENGTH			(CRP_BASE_ADDR+0x08)
#define REG_CRP_KEY0			(CRP_BASE_ADDR+0x20)
#define REG_CRP_KEY1			(CRP_BASE_ADDR+0x28)
#define REG_CRP_KEY2			(CRP_BASE_ADDR+0x30)
#define REG_CRP_KEY3			(CRP_BASE_ADDR+0x38)
#define REG_CRP_INIT_VEC		(CRP_BASE_ADDR+0x40)
#define REG_CRP_INT				(CRP_BASE_ADDR+0x50)

/*****************************************************/
/*  datapath registers */
/*****************************************************/
#define VE_BASE_ADDR      						0xc0030000      

#define     FB0_BASE_ADDR       0xc0039400
#define     FB1_BASE_ADDR       0xc0039500
#define     FB2_BASE_ADDR       0xc0039600
#define     FB3_BASE_ADDR       0xc0039700
#define     FB4_BASE_ADDR       0xc0038000

#define     ECIF0_BASE_ADDR     0xc0033400
#define     ECIF1_BASE_ADDR     0xc0033800
#define     ECIF2_BASE_ADDR     0xc0033c00

#define  RAWSCALE0_BASE_ADDR  0xc0007400
#define  RAWSCALE1_BASE_ADDR  0xc0007500
#define  RAWSCALE2_BASE_ADDR  0xc0007600
#define  RAWSCALE3_BASE_ADDR  0xc0007700

#define  YUVSCALE0_BASE_ADDR  0xc0038800
#define  YUVSCALE1_BASE_ADDR  0xc0038900
#define  YUVSCALE2_BASE_ADDR  0xc0038a00
/*****************************************************/
/* CIF register   */
/*****************************************************/
#define     CIF0_BASE_ADDR      0xc0080000
#define     CIF1_BASE_ADDR      0xc0080400

/*****************************************************/
/* MIPI0 register   */
/*****************************************************/
#define  MIPIRX0_BASE_ADDR   0xc0089000
#define  MIPIRX1_BASE_ADDR   0xc0089100
#define  MIPIRX2_BASE_ADDR   0xc0089200
#define  MIPIRX3_BASE_ADDR   0xc0089300

#define  MIPICIF0_BASE_ADDR  0xc0081000
#define  MIPICIF1_BASE_ADDR  0xc0081100
#define  MIPICIF2_BASE_ADDR  0xc0081200
#define  MIPICIF3_BASE_ADDR  0xc0081300

#define  MIPITX_BASE_ADDR	0xc0006800
/*****************************************************/
/* JPEG register   */
/*****************************************************/
#define     JPEG_BASE_ADDR      0xc0084000

/*********************************************
	VIF REG
*********************************************/
#define     VIF0_BASE_ADDR      0xc0002000
#define     VIF1_BASE_ADDR      0xc0002400

/*********************************************
	VFIFO REG
*********************************************/
#define VFIFO_BASE_ADDR       0xc0089400

/*********************************************
	IDC REG
*********************************************/
#define IDC_BASE_ADDR   0xc0007800

/*********************************************
	ISP REG
*********************************************/
#define     ISP_BASE_ADDR       0xe0080000
/*********************************************
  FOSD REG(the same with OV788)
 *********************************************/
#define FOSD_BASE_ADDR		0xc0005200
#define OSD_CTRL			(FOSD_BASE_ADDR + 0x0) 
#define OSD_IMG_SIZE		(FOSD_BASE_ADDR + 0x4)
#define OSD_W0_MEMADDR		(FOSD_BASE_ADDR + 0x8)
#define OSD_W0_LINEOFF		(FOSD_BASE_ADDR + 0xc)
#define OSD_W0_SIZE			(FOSD_BASE_ADDR + 0x10) 
#define OSD_W0_SADDR		(FOSD_BASE_ADDR + 0x14)
#define OSD_W1_MEMADDR		(FOSD_BASE_ADDR + 0x18)
#define OSD_W1_LINEOFF		(FOSD_BASE_ADDR + 0x1c)
#define OSD_W1_SIZE			(FOSD_BASE_ADDR + 0x20)
#define OSD_W1_SADDR		(FOSD_BASE_ADDR + 0x24)
#define OSD_W2_MEMADDR		(FOSD_BASE_ADDR + 0x28)
#define OSD_W2_LINEOFF		(FOSD_BASE_ADDR + 0x2c)
#define OSD_W2_SIZE			(FOSD_BASE_ADDR + 0x30)
#define OSD_W2_SADDR		(FOSD_BASE_ADDR + 0x34)
#define OSD_W3_MEMADDR		(FOSD_BASE_ADDR + 0x38)
#define OSD_W3_LINEOFF		(FOSD_BASE_ADDR + 0x3c)
#define OSD_W3_SIZE			(FOSD_BASE_ADDR + 0x40)
#define OSD_W3_SADDR		(FOSD_BASE_ADDR + 0x44)
#define OSD_BLINK			(FOSD_BASE_ADDR + 0x48)
#define OSD_TIMEOUT			(FOSD_BASE_ADDR + 0x4c)
#define OSD_LUT0			(FOSD_BASE_ADDR + 0x50)
#define OSD_LUT1			(FOSD_BASE_ADDR + 0x54)
#define OSD_LUT2			(FOSD_BASE_ADDR + 0x58)
#define OSD_LUT3			(FOSD_BASE_ADDR + 0x5c)
#define OSD_STATUS			(FOSD_BASE_ADDR + 0xa0)

/*********************************************
  FOSD REG(R3 new)
 *********************************************/
#define FOSD_NEW_BASE_ADDR  0xc0005000 
#define OSDN_CTRL           (FOSD_NEW_BASE_ADDR + 0x0) 
#define OSDN_MEMIF          (FOSD_NEW_BASE_ADDR + 0x4)
#define OSDN_IMG_SIZE		(FOSD_NEW_BASE_ADDR + 0x8)
#define OSDN_W0_MEMADDR		(FOSD_NEW_BASE_ADDR + 0xc)
#define OSDN_W0_SIZE		(FOSD_NEW_BASE_ADDR + 0x10) 
#define OSDN_W1_MEMADDR		(FOSD_NEW_BASE_ADDR + 0x14)
#define OSDN_W1_SIZE		(FOSD_NEW_BASE_ADDR + 0x18)
#define OSDN_W2_MEMADDR		(FOSD_NEW_BASE_ADDR + 0x1c)
#define OSDN_W2_SIZE		(FOSD_NEW_BASE_ADDR + 0x20)
#define OSDN_W3_MEMADDR		(FOSD_NEW_BASE_ADDR + 0x24)
#define OSDN_W3_SIZE		(FOSD_NEW_BASE_ADDR + 0x28)
#define OSDN_OFFSET		    (FOSD_NEW_BASE_ADDR + 0x2c)
#define OSDN_W0_LUT0		(FOSD_NEW_BASE_ADDR + 0x30)
#define OSDN_W0_LUT1		(FOSD_NEW_BASE_ADDR + 0x34)
#define OSDN_W0_LUT2		(FOSD_NEW_BASE_ADDR + 0x38)
#define OSDN_W0_LUT3		(FOSD_NEW_BASE_ADDR + 0x3c)
#define OSDN_W0_LUT4		(FOSD_NEW_BASE_ADDR + 0x40)
#define OSDN_W0_LUT5		(FOSD_NEW_BASE_ADDR + 0x44)
#define OSDN_W0_LUT6		(FOSD_NEW_BASE_ADDR + 0x48)
#define OSDN_W0_LUT7		(FOSD_NEW_BASE_ADDR + 0x4c)
#define OSDN_W1_LUT0		(FOSD_NEW_BASE_ADDR + 0x50)
#define OSDN_W1_LUT1		(FOSD_NEW_BASE_ADDR + 0x54)
#define OSDN_W1_LUT2		(FOSD_NEW_BASE_ADDR + 0x58)
#define OSDN_W1_LUT3		(FOSD_NEW_BASE_ADDR + 0x5c)
#define OSDN_W1_LUT4		(FOSD_NEW_BASE_ADDR + 0x60)
#define OSDN_W1_LUT5		(FOSD_NEW_BASE_ADDR + 0x64)
#define OSDN_W1_LUT6		(FOSD_NEW_BASE_ADDR + 0x68)
#define OSDN_W1_LUT7		(FOSD_NEW_BASE_ADDR + 0x6c)
#define OSDN_W2_LUT0		(FOSD_NEW_BASE_ADDR + 0x70)
#define OSDN_W2_LUT1		(FOSD_NEW_BASE_ADDR + 0x74)
#define OSDN_W2_LUT2		(FOSD_NEW_BASE_ADDR + 0x78)
#define OSDN_W2_LUT3		(FOSD_NEW_BASE_ADDR + 0x7c)
#define OSDN_W2_LUT4		(FOSD_NEW_BASE_ADDR + 0x80)
#define OSDN_W2_LUT5		(FOSD_NEW_BASE_ADDR + 0x84)
#define OSDN_W2_LUT6		(FOSD_NEW_BASE_ADDR + 0x88)
#define OSDN_W2_LUT7		(FOSD_NEW_BASE_ADDR + 0x8c)
#define OSDN_W3_LUT0		(FOSD_NEW_BASE_ADDR + 0x90)
#define OSDN_W3_LUT1		(FOSD_NEW_BASE_ADDR + 0x94)
#define OSDN_W3_LUT2		(FOSD_NEW_BASE_ADDR + 0x98)
#define OSDN_W3_LUT3		(FOSD_NEW_BASE_ADDR + 0x9c)
#define OSDN_W3_LUT4		(FOSD_NEW_BASE_ADDR + 0xa0)
#define OSDN_W3_LUT5		(FOSD_NEW_BASE_ADDR + 0xa4)
#define OSDN_W3_LUT6		(FOSD_NEW_BASE_ADDR + 0xa8)
#define OSDN_W3_LUT7		(FOSD_NEW_BASE_ADDR + 0xac)
#define OSDN_W0_STARTPOS	(FOSD_NEW_BASE_ADDR + 0xb0)
#define OSDN_W1_STARTPOS	(FOSD_NEW_BASE_ADDR + 0xb4)
#define OSDN_W2_STARTPOS	(FOSD_NEW_BASE_ADDR + 0xb8)
#define OSDN_W3_STARTPOS	(FOSD_NEW_BASE_ADDR + 0xbc)
#define OSDN_W0_OLSIZE	    (FOSD_NEW_BASE_ADDR + 0xc0)
#define OSDN_W1_OLSIZE	    (FOSD_NEW_BASE_ADDR + 0xc4)
#define OSDN_W2_OLSIZE	    (FOSD_NEW_BASE_ADDR + 0xc8)
#define OSDN_W3_OLSIZE	    (FOSD_NEW_BASE_ADDR + 0xcc)


/*****************************************************/
/* MD registers define */
/*****************************************************/
#define REG_MD_BASE      				    0xC0033000 
#define REG_MD_CTRL							REG_MD_BASE+0x00 
#define REG_MD_CFG						    REG_MD_BASE+0x04 
#define REG_MD_LIFE_VALUE					REG_MD_BASE+0x08 
#define REG_MD_PIC_SIZE						REG_MD_BASE+0x0c 
#define REG_MD_PREV_BURST_NUM			    REG_MD_BASE+0x10 
#define REG_MD_EXP_BURST_NUM			    REG_MD_BASE+0x14 
#define REG_MD_MASK_BURST_NUM				REG_MD_BASE+0x18 
#define REG_MD_PREV_BASE_ADDR				REG_MD_BASE+0x1c 
#define REG_MD_EXP_BASE_ADDR				REG_MD_BASE+0x20 
#define REG_MD_MSK_BASE_ADDR				REG_MD_BASE+0x24 
#define REG_MD_KICK     					REG_MD_BASE+0x28 
#define REG_MD_STATUS						REG_MD_BASE+0x2c 
#define REG_MD_CLR_OPTION  					REG_MD_BASE+0x30 
#define REG_MD_CLR_FIFO   					REG_MD_BASE+0x34 
#define REG_MD_RAW_INTR						REG_MD_BASE+0x38 
#define REG_MD_MSK_INTR						REG_MD_BASE+0x3c 
#define REG_MD_INTR_MASK    				REG_MD_BASE+0x40 
#define REG_MD_INTR_CLR    					REG_MD_BASE+0x44
#define REG_MD_WIN  						REG_MD_BASE+0x60 
#define REG_MD_WIN0_TL			    		REG_MD_BASE+0x64 
#define REG_MD_WIN0_SIZE	     			REG_MD_BASE+0x68 
#define REG_MD_WIN0_MOTION_CNT				REG_MD_BASE+0x6c 
#define REG_MD_WIN1_TL			    		REG_MD_BASE+0x70 
#define REG_MD_WIN1_SIZE	     			REG_MD_BASE+0x74 
#define REG_MD_WIN1_MOTION_CNT				REG_MD_BASE+0x78
#define REG_MD_WIN2_TL			    		REG_MD_BASE+0x7c 
#define REG_MD_WIN2_SIZE	     			REG_MD_BASE+0x80 
#define REG_MD_WIN2_MOTION_CNT				REG_MD_BASE+0x84
#define REG_MD_WIN3_TL			    		REG_MD_BASE+0x88 
#define REG_MD_WIN3_SIZE	     			REG_MD_BASE+0x8c 
#define REG_MD_WIN3_MOTION_CNT				REG_MD_BASE+0x90
#define REG_MD_WIN4_TL			    		REG_MD_BASE+0x94 
#define REG_MD_WIN4_SIZE	     			REG_MD_BASE+0x98 
#define REG_MD_WIN4_MOTION_CNT				REG_MD_BASE+0x9c
#define REG_MD_WIN5_TL			    		REG_MD_BASE+0xa0 
#define REG_MD_WIN5_SIZE	     			REG_MD_BASE+0xa4 
#define REG_MD_WIN5_MOTION_CNT				REG_MD_BASE+0xa8
#define REG_MD_WIN6_TL			    		REG_MD_BASE+0xac 
#define REG_MD_WIN6_SIZE	     			REG_MD_BASE+0xb0 
#define REG_MD_WIN6_MOTION_CNT				REG_MD_BASE+0xb4
#define REG_MD_WIN7_TL			    		REG_MD_BASE+0xb8 
#define REG_MD_WIN7_SIZE	     			REG_MD_BASE+0xbc 
#define REG_MD_WIN7_MOTION_CNT				REG_MD_BASE+0xc0


/*********************************************
	UARTM REG
*********************************************/
#define UART_BASE_M		0xc0083000
#define UART_BASE_S		0xc0083400

#define SRAM1_CTRL_BASE		0xc0004800 //TODO: ???

/* TODO: check the end address after asic team confirm the final register table  */
/*****************************************************/
/* DMA register  0x0xc0005400 - 0x0xc00057ff */
/*****************************************************/
#define DMA_BASE_ADDR    0xc0005400
#define REG_DMA_CSR     (DMA_BASE_ADDR)           // dma configuratio & status regisger(CSR)
#define REG_DMA_CER     (DMA_BASE_ADDR + 0x04)    // dma channel enable register(CER)
#define REG_DMA_CMR     (DMA_BASE_ADDR + 0x08)    // dma channel mapping register(CMR)
#define REG_DMA_CPR     (DMA_BASE_ADDR + 0x0C)    // dma channel priority register(CPR)
#define REG_DMA_RMR     (DMA_BASE_ADDR + 0x10)    // dma request mode(hardward & software) resiger(rmr)
#define REG_DMA_SRR     (DMA_BASE_ADDR + 0x14)    // dma software request resiger(SRR). 0: not request 1: reqest
#define REG_DMA_CDR     (DMA_BASE_ADDR + 0x18)    // channel tramsfer done(write 1 to clear) register(CDR)
#define REG_DMA_ISR     (DMA_BASE_ADDR + 0x1c)    // interrupt status register(ISR)
#define REG_DMA_ITCMR   (DMA_BASE_ADDR + 0x20)    // interrupt transfer complete mask regsiter(ITCMR)
#define REG_DMA_MDDR    (DMA_BASE_ADDR + 0x30)    // data transfer direction register 00: AHB/AXI->SRAM(GRFC); 
												  /* 01:AHB/AXI->AHB/AXI; 10:SRAM(GRFC)->AHB/AXI; 11:SRAM(GRFC)->SRAM(GRFC) */
#define REG_DMA_ENDIAN  (DMA_BASE_ADDR + 0x34)    // endian 
                                                  /* [5]: GRFC read port endian
                                                   [4]: GRFC write port endian
                                                   [3]: AXI read port endian
                                                   [2]: AXI write port endian
                                                   [1]: AHB read port endian
                                                   [0]: AHB write port endian
												   */

#define DMA_CHR_BASE         (DMA_BASE_ADDR + 0x40)

#define REG_DMA_CFR(x)       (DMA_CHR_BASE + 0x20 * (x) )        //Channel x configuration register(CFT)
#define REG_DMA_SOFR(x)      (DMA_CHR_BASE + 0x20 * (x) + 4 )    //Channle x source address offset register(SOFR)
#define REG_DMA_SAR(x)       (DMA_CHR_BASE + 0x20 * (x) + 8 )    // Channle x source address register(SAR)
#define REG_DMA_DAR(x)       (DMA_CHR_BASE + 0x20 * (x) + 0xc )  // Channle x destination address register(DAR)
#define REG_DMA_CTS(x)       (DMA_CHR_BASE + 0x20 * (x) + 0x10 ) // channel x total transfer size
/* TODO: this reg is different with r2 */
#define REG_DMA_LINKLIST(x)  (DMA_CHR_BASE + 0x20 * (x) + 0x14 ) // channel x linklist pointer address register
#define REG_DMA_DISOFFSET(x) (DMA_CHR_BASE + 0x20 * (x) + 0x1c ) // channel x destination address offset register

#define REG_DMA_CFR0         (DMA_CHR_BASE + 0x0)   // Channel 0 configuration register
                                                    /*
													 b(13:10):  burst length - 1. length support 4, 8 and 16. The reg value
													 equals real length minus one.
													 b(9:8): read address update mode (00:increment, 01:Decrement, 1x:Fixed)
													 b(7:6): write addrss update mode (00:increment, 01:Decrement, 1x:Fixed)
													 b(2): 0:linklist disable 1:linklist enalbe
													 b(1): 0:select AHB 1: select AXI
													 b(0): 0:32bit AHB/AXI, 1:8bit AHB/AXI
													 */
#define REG_DMA_SOFR0 	(DMA_CHR_BASE + 0x4) 		// Channel 0 source sddress offset register
#define REG_DMA_SAR0 	(DMA_CHR_BASE + 0x8) 		// Channel 0 source address register
#define REG_DMA_DAR0 	(DMA_CHR_BASE + 0xc) 		// Channel 0 destination address register
#define REG_DMA_CTS0 	(DMA_CHR_BASE + 0x10) 		// Channel 0 total transfer size register, 32 bits when REG_DMA_CFR0[0] is 0, 8 bits when REG_DMA_CFR0[0] is 1
#define REG_DMA_LINKLIST0  (DMA_CHR_BASE + 0x14)		// Channel 0 linklist pointer address register
#define REG_DMA_DISOFFSET0 	(DMA_CHR_BASE + 0x1c) 		// Channel 0 destination address offset register

#define REG_DMA_CFR1    (DMA_CHR_BASE + 0x20) 		// Channel 1 configuration register
#define REG_DMA_SOFR1 	(DMA_CHR_BASE + 0x24) 		// Channel 1 source sddress offset register
#define REG_DMA_SAR1 	(DMA_CHR_BASE + 0x28) 		// Channel 1 source address register
#define REG_DMA_DAR1 	(DMA_CHR_BASE + 0x2c) 		// Channel 1 destination address register
#define REG_DMA_CTS1 	(DMA_CHR_BASE + 0x30)		// Channel 1 total transfer size register
#define REG_DMA_LINKLIST1  (DMA_CHR_BASE + 0x34)		// Channel 1 linklist pointer address register
#define REG_DMA_DISOFFSET1 	(DMA_CHR_BASE + 0x3c) 		// Channel 1 destination address offset register

#define REG_DMA_CFR2    (DMA_CHR_BASE + 0x40)		// Channel 2 configuration register
#define REG_DMA_SOFR2 	(DMA_CHR_BASE + 0x44) 		// Channel 2 source sddress offset register
#define REG_DMA_SAR2 	(DMA_CHR_BASE + 0x48) 		// Channel 2 source address register
#define REG_DMA_DAR2 	(DMA_CHR_BASE + 0x4c) 		// Channel 2 destination address register
#define REG_DMA_CTS2 	(DMA_CHR_BASE + 0x50) 		// Channel 2 total transfer size register
#define REG_DMA_LINKLIST2  (DMA_CHR_BASE + 0x54)		// Channel 2 linklist pointer address register
#define REG_DMA_DISOFFSET2 	(DMA_CHR_BASE + 0x5c) 		// Channel 2 destination address offset register

#define REG_DMA_CFR3    (DMA_CHR_BASE + 0x60) 		// Channel 3 configuration register
#define REG_DMA_SOFR3 	(DMA_CHR_BASE + 0x64) 		// Channel 3 source sddress offset register
#define REG_DMA_SAR3 	(DMA_CHR_BASE + 0x68) 		// Channel 3 source address register
#define REG_DMA_DAR3 	(DMA_CHR_BASE + 0x6c) 		// Channel 3 destination address register
#define REG_DMA_CTS3 	(DMA_CHR_BASE + 0x70) 		// Channel 3 total transfer size register
#define REG_DMA_LINKLIST3  (DMA_CHR_BASE + 0x74)		// Channel 3 linklist pointer address register
#define REG_DMA_DISOFFSET3 	(DMA_CHR_BASE + 0x7c) 		// Channel 3 destination address offset register

/*****************************************************/
/*  USB Register                 0xC0020000 - 0xC002FFF                   */
/*****************************************************/
#define UDC_BASE_ADDR      0xc0020000
#define UDC_RAM_BASE    UDC_BASE_ADDR
#define UDC_BASE        (UDC_BASE_ADDR+0x4000)

#define UDCIF_CSR_BASE  UDC_BASE
#define UDCIF_CSR_ADDR  (UDCIF_CSR_BASE + 0x0)
#define UDCIF_CSR_DATA  (UDCIF_CSR_BASE + 0x4)
#define UDCIF_CSR_CTRL  (UDCIF_CSR_BASE + 0x8)
#define UDCIF_VP_CSR    (UDCIF_CSR_BASE + 0xc)
#define UDCIF_EP1_CSR   (UDCIF_CSR_BASE + 0x10)
#define UDCIF_EP2_CSR   (UDCIF_CSR_BASE + 0x14)
#define UDCIF_EP3_CSR   (UDCIF_CSR_BASE + 0x18)
#define UDCIF_ISOEP_ADDR    (UDCIF_CSR_BASE + 0x1c)

#define UDCIF_CTRL_BASE  (UDC_BASE + 0x80)

#define UDCIF_CTRL_CFG   (UDCIF_CTRL_BASE)
#define UDCIF_CTRL_ADDR  (UDCIF_CTRL_BASE + 0x4)
#define UDCIF_CTRL_DATA  (UDCIF_CTRL_BASE + 0x8)
#define UDCIF_CTRL_CTRL  (UDCIF_CTRL_BASE + 0xc)

#define UDCIF_UDC_BASE   (UDC_BASE + 0x100)

#define UDCIF_UDC_CFG    UDCIF_UDC_BASE
#define UDCIF_UDC_STA    (UDCIF_UDC_BASE + 0x4)
#define UDCIF_UDC_IRQ    (UDCIF_UDC_BASE + 0x8)
#define UDCIF_P_IRQ      (UDCIF_UDC_BASE + 0xc)
#define UDCIF_P1_CFG0    (UDCIF_UDC_BASE + 0x10)
#define UDCIF_P1_CFG1    (UDCIF_UDC_BASE + 0x14)
#define UDCIF_P1_CFG2    (UDCIF_UDC_BASE + 0x18)
#define UDCIF_P1_CFG3    (UDCIF_UDC_BASE + 0x1c)
#define UDCIF_P2_CFG0    (UDCIF_UDC_BASE + 0x20)
#define UDCIF_P2_CFG1    (UDCIF_UDC_BASE + 0x24)
#define UDCIF_P2_CFG2    (UDCIF_UDC_BASE + 0x28)
#define UDCIF_P2_CFG3    (UDCIF_UDC_BASE + 0x2c)
#define UDCIF_P3_CFG0    (UDCIF_UDC_BASE + 0x30)
#define UDCIF_P3_CFG1    (UDCIF_UDC_BASE + 0x34)
#define UDCIF_P3_CFG2    (UDCIF_UDC_BASE + 0x38)
#define UDCIF_P3_CFG3    (UDCIF_UDC_BASE + 0x3c)
#define UDCIF_P4_CFG0    (UDCIF_UDC_BASE + 0x40)
#define UDCIF_P4_CFG1    (UDCIF_UDC_BASE + 0x44)
#define UDCIF_P4_CFG2    (UDCIF_UDC_BASE + 0x48)
#define UDCIF_P4_CFG3    (UDCIF_UDC_BASE + 0x4c)
#define UDCIF_P5_CFG0    (UDCIF_UDC_BASE + 0x50)
#define UDCIF_P5_CFG1    (UDCIF_UDC_BASE + 0x54)
#define UDCIF_P5_CFG2    (UDCIF_UDC_BASE + 0x58)
#define UDCIF_P5_CFG3    (UDCIF_UDC_BASE + 0x5c)
#define UDCIF_P6_CFG0    (UDCIF_UDC_BASE + 0x60)
#define UDCIF_P6_CFG1    (UDCIF_UDC_BASE + 0x64)
#define UDCIF_P6_CFG2    (UDCIF_UDC_BASE + 0x68)
#define UDCIF_P6_CFG3    (UDCIF_UDC_BASE + 0x6c)
#define UDCIF_P7_CFG0    (UDCIF_UDC_BASE + 0x70)
#define UDCIF_P7_CFG1    (UDCIF_UDC_BASE + 0x74)
#define UDCIF_DB_CFG    (UDCIF_UDC_BASE + 0x70)
#define UDCIF_VD_CFG    (UDCIF_UDC_BASE + 0x74)
#define UDCIF_CTRL0     (UDCIF_UDC_BASE + 0x78)

#define UDCIF_VIDEO_CFG0    (UDCIF_UDC_BASE + 0x70)
#define UDCIF_VIDEO_CFG1    (UDCIF_UDC_BASE + 0x74)

#define UDCIF_VIDEO_CFG    (UDCIF_VIDEO_CFG0)

/* FIXME: suppose logical EPNum is the same as physical EP number in hardware */
#define UDCIF_EP_CFG0(EP) (UDCIF_UDC_BASE + 0x10*(EP))
#define UDCIF_EP_CFG1(EP) (UDCIF_UDC_BASE + 0x10*(EP) + 0x4)
#define UDCIF_EP_CFG2(EP) (UDCIF_UDC_BASE + 0x10*(EP) + 0x8)
#define UDCIF_EP_CFG3(EP) (UDCIF_UDC_BASE + 0x10*(EP) + 0xc)

/*****************************************************/
/* AI1 register  0xC00ab000 - 0xC00ab7ff */
/*****************************************************/
#define AI1_BASE_ADDR         0xC0003000   
#define AI1_MODE_SET          (AI1_BASE_ADDR + 0x00)
#define AI1_PLAY_LADDR          (AI1_BASE_ADDR + 0x04)
#define AI1_PLAY_RADDR         (AI1_BASE_ADDR + 0x08)
#define AI1_CTL_REG			(AI1_BASE_ADDR + 0x14)
#define AI1_REC_LADDR		(AI1_BASE_ADDR + 0x18)	
#define AI1_REC_RADDR		(AI1_BASE_ADDR + 0x1c)	
#define AI1_BUF_SET			(AI1_BASE_ADDR + 0x20)	
#define AI1_INT_STATUS        (AI1_BASE_ADDR + 0x24)
#define AI1_INT_MSK			(AI1_BASE_ADDR + 0x28)
#define AI1_TAKE_EFFECT			(AI1_BASE_ADDR + 0x2c)

/*****************************************************/
/* AI2 register  0xC00ab800 - 0xC00abfff */
/*****************************************************/
#define AI2_BASE_ADDR 		0xC0003200   
#define AI2_MODE_SET          (AI2_BASE_ADDR + 0x00)
#define AI2_PLAY_LADDR          (AI2_BASE_ADDR + 0x04)
#define AI2_PLAY_RADDR         (AI2_BASE_ADDR + 0x08)
#define AI2_CTL_REG			(AI2_BASE_ADDR + 0x14)
#define AI2_REC_LADDR		(AI2_BASE_ADDR + 0x18)	
#define AI2_REC_RADDR		(AI2_BASE_ADDR + 0x1c)	
#define AI2_BUF_SET			(AI2_BASE_ADDR + 0x20)	
#define AI2_INT_STATUS      (AI2_BASE_ADDR + 0x24)
#define AI2_INT_MSK			(AI2_BASE_ADDR + 0x28)
#define AI2_TAKE_EFFECT		(AI2_BASE_ADDR + 0x2c)

/*********************************************
	IMG
*********************************************/
#define REG_IMG_BASE	0xc00c4000

#define   REG_IMG_BUFF_START       (REG_IMG_BASE + 0x0)
#define   REG_IMG_BUFF_END         (REG_IMG_BASE + 0x4)
#define   REG_IMG_LCD_LB_0         (REG_IMG_BASE + 0x8)
#define   REG_IMG_LCD_LB_1         (REG_IMG_BASE + 0xc)
#define   REG_IMG_CONFIG           (REG_IMG_BASE + 0x10)

#define   REG_IMG_DEC_RD_LEN       (REG_IMG_BASE + 0x24)
#define   REG_IMG_ENC_SIZE         (REG_IMG_BASE + 0x28)
#define   REG_IMG_DEC_SIZE         (REG_IMG_BASE + 0x30)  //read only
#define   REG_IMG_IRQ_STATUS       (REG_IMG_BASE + 0x3c)  
#define   REG_IMG_ENC_LEN          (REG_IMG_BASE + 0x38)  //read only
#define   REG_IMG_QS0              (REG_IMG_BASE + 0x40)
#define   REG_IMG_QS1              (REG_IMG_BASE + 0x44)
#define   REG_IMG_QS2              (REG_IMG_BASE + 0x48)
#define   REG_IMG_QS3              (REG_IMG_BASE + 0x4c)
#define   REG_IMG_QS4              (REG_IMG_BASE + 0x50)
#define   REG_IMG_HALT_EN		   (REG_IMG_BASE + 0x54)
#define   REG_IMG_DVP_CFG		   (REG_IMG_BASE + 0x60)
#define   REG_IMG_EOF_INTERVAL	   (REG_IMG_BASE + 0x64)
#define   REG_IMG_L2B_CFG    	   (REG_IMG_BASE + 0x68)
#define   REG_IMG_LCD_IF_CFG       (REG_IMG_BASE + 0x6c)
#define   REG_IMG_PP_CIRCL_CTRL    (REG_IMG_BASE + 0x70)
#define   REG_IMG_BUF_WR_PTR       (REG_IMG_BASE + 0x74)
#define   REG_IMG_BUF_RD_PTR       (REG_IMG_BASE + 0x78)
#define   REG_IMG_BUF_SIZE_CTRL    (REG_IMG_BASE + 0x7C)
#define   REG_IMG_DEC_KICK_CTRL    (REG_IMG_BASE + 0x80)
#define   REG_IMG_VIF_PP_BUFF0     (REG_IMG_BASE + 0x84)
#define   REG_IMG_VIF_PP_BUFF1     (REG_IMG_BASE + 0x88)
#define   REG_IMG_BIST_EN          (REG_IMG_BASE + 0x98)
#define   REG_IMG_FULL_DUPLEX_EN   (REG_IMG_BASE + 0xa0)
#define   REG_IMG_FULL_DUPLEX_BUF0 (REG_IMG_BASE + 0xa4)
#define   REG_IMG_FULL_DUPLEX_BUF1 (REG_IMG_BASE + 0xa8)
#define   REG_IMG_VDEC_RDY_SIZE    (REG_IMG_BASE + 0xac)
#define   REG_IMG_VDEC_Y_BASE      (REG_IMG_BASE + 0xb0)
#define   REG_IMG_VDEC_Y_START     (REG_IMG_BASE + 0xb4)
#define   REG_IMG_VDEC_Y_END       (REG_IMG_BASE + 0xb8)
#define   REG_IMG_VDEC_UV_BASE     (REG_IMG_BASE + 0xbc)
#define   REG_IMG_VDEC_UV_START    (REG_IMG_BASE + 0xc0)
#define   REG_IMG_VDEC_UV_END      (REG_IMG_BASE + 0xc4)

/*********************************************
	EHCI
*********************************************/
#define EHCI_BASE_ADDR     0xc0032000

/* ehci capability register */
#define EHCI_BASE_CAP               (EHCI_BASE_ADDR + 0x0)

#define EHCI_REG_CAPBASE            (EHCI_BASE_CAP + 0x0)
#define EHCI_REG_HCSPARAMS          (EHCI_BASE_CAP + 0x4)
#define EHCI_REG_HCCPARAMS          (EHCI_BASE_CAP + 0x8)
#define EHCI_REG_PORTROUTE          (EHCI_BASE_CAP + 0xc)

/* ehci operation register */
#define EHCI_BASE_OP         (EHCI_BASE_ADDR + 0x10)

#define EHCI_REG_CMD            (EHCI_BASE_OP + 0x0)
#define EHCI_REG_STATUS         (EHCI_BASE_OP + 0x4)
#define EHCI_REG_INTREN         (EHCI_BASE_OP + 0x8)
#define EHCI_REG_FRAMEINDEX     (EHCI_BASE_OP + 0xc)
#define EHCI_REG_SEGMENT        (EHCI_BASE_OP + 0x10)
#define EHCI_REG_FRAMELIST      (EHCI_BASE_OP + 0x14)
#define EHCI_REG_ASYNCNEXT      (EHCI_BASE_OP + 0x18)

#define EHCI_REG_CFGFLAG        (EHCI_BASE_OP + 0x40)
#define EHCI_REG_PORTSTS        (EHCI_BASE_OP + 0x44)

/*********************************************
	OHCI
*********************************************/
#define OHCI_BASE_ADDR     0xc0032800

/* control and status registers (section 7.1) */
#define OHCI_REG_VER           (OHCI_BASE_ADDR + 0x00)
#define OHCI_REG_CONTROL       (OHCI_BASE_ADDR + 0x04)
#define OHCI_REG_CMDSTS        (OHCI_BASE_ADDR + 0x08)
#define OHCI_REG_INTRSTS       (OHCI_BASE_ADDR + 0x0c)
#define OHCI_REG_INTREN        (OHCI_BASE_ADDR + 0x10)
#define OHCI_REG_INTRDIS       (OHCI_BASE_ADDR + 0x14)

/* memory pointers (section 7.2) */
#define OHCI_REG_HCCA            (OHCI_BASE_ADDR + 0x18)
#define OHCI_REG_PERIODIC     (OHCI_BASE_ADDR + 0x1c)
#define OHCI_REG_CTRLHEAD     (OHCI_BASE_ADDR + 0x20)
#define OHCI_REG_CTRLCUR      (OHCI_BASE_ADDR + 0x24)
#define OHCI_REG_BULKHEAD     (OHCI_BASE_ADDR + 0x28)
#define OHCI_REG_BULKCUR      (OHCI_BASE_ADDR + 0x2c)
#define OHCI_REG_DONEHEAD        (OHCI_BASE_ADDR + 0x30)

/* frame counters (section 7.3) */
#define OHCI_REG_FMINTERVAL       (OHCI_BASE_ADDR + 0x34)
#define OHCI_REG_FMREMAINING      (OHCI_BASE_ADDR + 0x38)
#define OHCI_REG_FMNUMBER          (OHCI_BASE_ADDR + 0x3c)
#define OHCI_REG_PERIODICSTART      (OHCI_BASE_ADDR + 0x40)
#define OHCI_REG_LSTHRESH         (OHCI_BASE_ADDR + 0x44)

/* Root hub ports (section 7.4) */
#define OHCI_REG_RHA     (OHCI_BASE_ADDR + 0x48)
#define OHCI_REG_RHB     (OHCI_BASE_ADDR + 0x4c)
#define OHCI_REG_RHSTS   (OHCI_BASE_ADDR + 0x50)
#define OHCI_REG_RHPORTSTS   (OHCI_BASE_ADDR + 0x54)

/*********************************************
	RTC
*********************************************/
#define RTC_BASE_ADDR	(0xe0010000)

/* INTERNAL_END */

#define ReadReg32(addr) (*( volatile unsigned long *)(addr))
#define WriteReg32(addr,data) (*(volatile unsigned long *)(addr)=(data))
#define ReadReg16(addr) (*( volatile unsigned short *)(addr))
#define WriteReg16(addr,data) (*( volatile unsigned short *)(addr)=(data))
#define ReadReg8(addr) (*(volatile unsigned char *)(addr))
#define WriteReg8(addr,data) (*( volatile unsigned char *)(addr)=(data))
#define REG8(addr)     *((volatile unsigned char *)(addr))
#define REG16(add) *((volatile unsigned short *)(add))
#define REG32(add) (*((volatile unsigned long *)(add)))

/* TODO: confirm this */
#define WATCHDOG_DISABLE	do{WriteReg32(REG_SC_WATCHDOG, 0x3fffffff);}while(0)
#define WATCHDOG_SET(x)	do{WriteReg32(REG_SC_WATCHDOG, (0xc0000000 | (x)));}while(0)
#define BOOT_SRAM() do{ WriteReg32(REG_SC_ADDR + 0x60, (ReadReg32(REG_SC_ADDR + 0x60) & (~BIT5) & (~BIT6)) | BIT7 ); }while(0)
#define BOOT_DDR() do{ WriteReg32(REG_SC_ADDR + 0x60, (ReadReg32(REG_SC_ADDR + 0x60) & (~BIT6)) | (BIT5) | BIT7 ); }while(0)

/* TODO: for debug, remove it in real case */
#define BOOTROM_FPGA_TEST

#define DDR_WAIT_READY do{while((ReadReg32(REG_SC_STATUS) & BIT3) == 0);}while(0)

#define REG_INT_BASE    0xc0006600
#define CONFIG_SYS_TIMER_COUNTER (REG_INT_BASE + 0x94)

#endif
