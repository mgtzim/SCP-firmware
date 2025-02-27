/*
 * Arm SCP/MCP Software
 * Copyright (c) 2021, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef TC1_SDS_H
#define TC1_SDS_H

#include <mod_sds.h>

/*
 * Structure identifiers.
 */
enum tc1_sds_struct_id {
    TC1_SDS_CPU_INFO = 1 | (1 << MOD_SDS_ID_VERSION_MAJOR_POS),
    TC1_SDS_FEATURE_AVAILABILITY = 6 | (1 << MOD_SDS_ID_VERSION_MAJOR_POS),
    TC1_SDS_BOOTLOADER = 9 | (1 << MOD_SDS_ID_VERSION_MAJOR_POS),
};

enum tc1_sds_region_idx { TC1_SDS_REGION_SECURE, TC1_SDS_REGION_COUNT };

/*
 * Structure sizes.
 */
#define TC1_SDS_CPU_INFO_SIZE             4
#define TC1_SDS_FEATURE_AVAILABILITY_SIZE 4
#define TC1_SDS_BOOTLOADER_SIZE           12

/*
 * Field masks and offsets for TC1_SDS_AP_CPU_INFO structure.
 */
#define TC1_SDS_CPU_INFO_PRIMARY_MASK 0xFFFFFFFF
#define TC1_SDS_CPU_INFO_PRIMARY_POS  0

/*
 * Field masks and offsets for TC1_SDS_FEATURE_AVAILABILITY structure.
 */
#define TC1_SDS_FEATURE_FIRMWARE_MASK  0x1
#define TC1_SDS_FEATURE_DMC_MASK       0x2
#define TC1_SDS_FEATURE_MESSAGING_MASK 0x4

#define TC1_SDS_FEATURE_FIRMWARE_POS  0
#define TC1_SDS_FEATURE_DMC_POS       1
#define TC1_SDS_FEATURE_MESSAGING_POS 2

/*
 * Field masks and offsets for the TC1_SDS_BOOTLOADER structure.
 */
#define TC1_SDS_BOOTLOADER_VALID_MASK  0x1
#define TC1_SDS_BOOTLOADER_OFFSET_MASK 0xFFFFFFFF
#define TC1_SDS_BOOTLOADER_SIZE_MASK   0xFFFFFFFF

#define TC1_SDS_BOOTLOADER_VALID_POS  0
#define TC1_SDS_BOOTLOADER_OFFSET_POS 0
#define TC1_SDS_BOOTLOADER_SIZE_POS   0

#endif /* TC1_SDS_H */
