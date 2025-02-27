/*
 * Arm SCP/MCP Software
 * Copyright (c) 2020-2022, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SCP_SOC_MMAP_H
#define SCP_SOC_MMAP_H

#include "platform_core.h"
#include "scp_mmap.h"

#define SCP_NOR0_FLASH_BASE (SCP_SOC_EXPANSION1_BASE + 0x07000000)

#define SCP_PLL_BASE (SCP_SOC_EXPANSION3_BASE + 0x03000000)

#define SCP_PLL_SYSPLL       (SCP_PLL_BASE + 0x00000000)
#define SCP_PLL_DMC          (SCP_PLL_BASE + 0x00000010)
#define SCP_PLL_INTERCONNECT (SCP_PLL_BASE + 0x00000020)
#define SCP_PLL_STATUS0      (SCP_PLL_BASE + 0x00000180)
#define SCP_PLL_STATUS1      (SCP_PLL_BASE + 0x00000184)

#define SCP_PLL_CPU0  (SCP_PLL_BASE + 0x00000100)
#define SCP_PLL_CPU1  (SCP_PLL_BASE + 0x00000104)
#define SCP_PLL_CPU2  (SCP_PLL_BASE + 0x00000108)
#define SCP_PLL_CPU3  (SCP_PLL_BASE + 0x0000010C)
#if (NUMBER_OF_CLUSTERS > 4)
#    define SCP_PLL_CPU4 (SCP_PLL_BASE + 0x00000110)
#    define SCP_PLL_CPU5 (SCP_PLL_BASE + 0x00000114)
#    define SCP_PLL_CPU6 (SCP_PLL_BASE + 0x00000118)
#    define SCP_PLL_CPU7 (SCP_PLL_BASE + 0x0000011C)
#    if (NUMBER_OF_CLUSTERS > 8)
#        define SCP_PLL_CPU8  (SCP_PLL_BASE + 0x00000120)
#        define SCP_PLL_CPU9  (SCP_PLL_BASE + 0x00000124)
#        define SCP_PLL_CPU10 (SCP_PLL_BASE + 0x00000128)
#        define SCP_PLL_CPU11 (SCP_PLL_BASE + 0x0000012c)
#        define SCP_PLL_CPU12 (SCP_PLL_BASE + 0x00000130)
#        define SCP_PLL_CPU13 (SCP_PLL_BASE + 0x00000134)
#        define SCP_PLL_CPU14 (SCP_PLL_BASE + 0x00000138)
#        define SCP_PLL_CPU15 (SCP_PLL_BASE + 0x0000013C)
#    endif
#endif

/* PCIe ECAM and MMIO addresses */
#define AP_PCIE_ECAM_BASE  (0x1010000000ULL)
#define AP_PCIE_MMIOL_BASE (0x60000000)
#define AP_PCIE_MMIOH_BASE (0x4000000000ULL)

#endif /* SCP_SOC_MMAP_H */
