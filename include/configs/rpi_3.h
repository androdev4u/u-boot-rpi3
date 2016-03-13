/*
 * (C) Copyright 2012,2015 Stephen Warren
 *
 * SPDX-License-Identifier:	GPL-2.0
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#define CONFIG_SKIP_LOWLEVEL_INIT
#define CONFIG_BCM2836
#define CONFIG_SYS_CACHELINE_SIZE		64
#define CONFIG_SYS_DCACHE_OFF

#include "rpi-common.h"

#undef CONFIG_SYS_TEXT_BASE
#define CONFIG_SYS_TEXT_BASE		0x00000000

/* Have release address at the end of 256MB for now */
#define CPU_RELEASE_ADDR	0xFFFFFF0

#endif
