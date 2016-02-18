/*
 * Copyright (C) 2014 Atmel Corporation
 *		      Bo Shen <voice.shen@atmel.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <mmc.h>
#include <asm/io.h>

DECLARE_GLOBAL_DATA_PTR;

extern void clockconfig_360M(void);

int board_early_init_f(void)
{
#ifndef CONFIG_FOR_FPGA
	clockconfig_360M();
#endif
	
	return 0;
}

int board_init(void)
{
	//TODO: fix
	gd->bd->bi_boot_params = CONFIG_SYS_SDRAM_BASE + 0x100;

	return 0;
}

int dram_init(void)
{
	//TODO
	gd->ram_size = CONFIG_SYS_SDRAM_SIZE;

	return 0;
}

