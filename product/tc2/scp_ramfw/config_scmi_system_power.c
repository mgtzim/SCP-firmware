/*
 * Arm SCP/MCP Software
 * Copyright (c) 2022, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <mod_scmi_system_power.h>
#include <mod_system_power.h>

#include <fwk_module.h>

const struct fwk_module_config config_scmi_system_power = {
    .data = &((struct mod_scmi_system_power_config){
        .system_view = MOD_SCMI_SYSTEM_VIEW_FULL,
        .system_suspend_state = MOD_SYSTEM_POWER_POWER_STATE_SLEEP0,
        .alarm_id = FWK_ID_NONE_INIT }),

};
