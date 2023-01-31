/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2021 MediaTek Inc.
 */

#ifndef __CONN_DBG_CTL_REGS_H__
#define __CONN_DBG_CTL_REGS_H__

#define CONN_DBG_CTL_BASE                                      0x18023000

#define CONN_DBG_CTL_BGF_MONFLAG_OFF_OUT_ADDR                  (CONN_DBG_CTL_BASE + 0xA00)
#define CONN_DBG_CTL_CR_DBGCTL2BGF_OFF_DEBUG_SEL_ADDR          (CONN_DBG_CTL_BASE + 0xA04)

#define CONN_DBG_CTL_BGF_MONFLAG_OFF_OUT_BGF_MONFLAG_OFF_OUT_ADDR CONN_DBG_CTL_BGF_MONFLAG_OFF_OUT_ADDR
#define CONN_DBG_CTL_BGF_MONFLAG_OFF_OUT_BGF_MONFLAG_OFF_OUT_MASK 0xFFFFFFFF
#define CONN_DBG_CTL_BGF_MONFLAG_OFF_OUT_BGF_MONFLAG_OFF_OUT_SHFT 0

#define CONN_DBG_CTL_CR_DBGCTL2BGF_OFF_DEBUG_SEL_CR_DBGCTL2BGF_OFF_DEBUG_SEL_ADDR \
	CONN_DBG_CTL_CR_DBGCTL2BGF_OFF_DEBUG_SEL_ADDR
#define CONN_DBG_CTL_CR_DBGCTL2BGF_OFF_DEBUG_SEL_CR_DBGCTL2BGF_OFF_DEBUG_SEL_MASK 0xFFFFFFFF
#define CONN_DBG_CTL_CR_DBGCTL2BGF_OFF_DEBUG_SEL_CR_DBGCTL2BGF_OFF_DEBUG_SEL_SHFT 0


#endif /* __CONN_DBG_CTL_REGS_H__ */

