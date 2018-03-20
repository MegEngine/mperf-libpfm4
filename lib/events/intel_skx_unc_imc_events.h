/*
 * Copyright (c) 2017 Google Inc. All rights reserved
 * Contributed by Stephane Eranian <eranian@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
 * CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
 * OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * This file is part of libpfm, a performance monitoring support library for
 * applications on Linux.
 *
 * PMU: skx_unc_imc
 */

static intel_x86_umask_t skx_unc_m_act_count[]={
	{ .uname = "BYP",
	  .ucode = 0x800,
	  .udesc = "DRAM Activate Count -- Activate due to Bypass",
	},
	{ .uname = "RD",
	  .ucode = 0x100,
	  .udesc = "DRAM Activate Count -- Activate due to Read",
	},
	{ .uname = "WR",
	  .ucode = 0x200,
	  .udesc = "DRAM Activate Count -- Activate due to Write",
	},
};

static intel_x86_umask_t skx_unc_m_byp_cmds[]={
	{ .uname = "ACT",
	  .ucode = 0x100,
	  .udesc = "ACT command issued by 2 cycle bypass",
	},
	{ .uname = "CAS",
	  .ucode = 0x200,
	  .udesc = "CAS command issued by 2 cycle bypass",
	},
	{ .uname = "PRE",
	  .ucode = 0x400,
	  .udesc = "PRE command issued by 2 cycle bypass",
	},
};

static intel_x86_umask_t skx_unc_m_cas_count[]={
	{ .uname = "ALL",
	  .ucode = 0xf00,
	  .udesc = "DRAM CAS (Column Address Strobe) Commands. -- All CASes issued.",
	},
	{ .uname = "RD",
	  .ucode = 0x300,
	  .udesc = "DRAM CAS (Column Address Strobe) Commands. -- All DRAM Reads (includes underfills)",
	},
	{ .uname = "RD_ISOCH",
	  .ucode = 0x4000,
	  .udesc = "DRAM CAS (Column Address Strobe) Commands. -- Read CAS issued in Read ISOCH Mode",
	},
	{ .uname = "RD_REG",
	  .ucode = 0x100,
	  .udesc = "DRAM CAS (Column Address Strobe) Commands. -- All read CAS (w/ and w/out auto-pre)",
	},
	{ .uname = "RD_RMM",
	  .ucode = 0x2000,
	  .udesc = "DRAM CAS (Column Address Strobe) Commands. -- Read CAS issued in RMM",
	},
	{ .uname = "RD_UNDERFILL",
	  .ucode = 0x200,
	  .udesc = "DRAM CAS (Column Address Strobe) Commands. -- Underfill Read Issued",
	},
	{ .uname = "RD_WMM",
	  .ucode = 0x1000,
	  .udesc = "DRAM CAS (Column Address Strobe) Commands. -- Read CAS issued in WMM",
	},
	{ .uname = "WR",
	  .ucode = 0xc00,
	  .udesc = "DRAM CAS (Column Address Strobe) Commands. -- All DRAM WR_CAS (both Modes)",
	},
	{ .uname = "WR_ISOCH",
	  .ucode = 0x8000,
	  .udesc = "DRAM CAS (Column Address Strobe) Commands. -- Read CAS issued in Write ISOCH Mode",
	},
	{ .uname = "WR_RMM",
	  .ucode = 0x800,
	  .udesc = "DRAM CAS (Column Address Strobe) Commands. -- DRAM WR_CAS (w/ and w/out auto-pre) in Read Major Mode",
	},
	{ .uname = "WR_WMM",
	  .ucode = 0x400,
	  .udesc = "DRAM CAS (Column Address Strobe) Commands. -- DRAM WR_CAS (w/ and w/out auto-pre) in Write Major Mode",
	},
};

static intel_x86_umask_t skx_unc_m_dram_refresh[]={
	{ .uname = "HIGH",
	  .ucode = 0x400,
	  .udesc = "Number of DRAM Refreshes Issued -- ",
	},
	{ .uname = "PANIC",
	  .ucode = 0x200,
	  .udesc = "Number of DRAM Refreshes Issued -- ",
	},
};

static intel_x86_umask_t skx_unc_m_major_modes[]={
	{ .uname = "ISOCH",
	  .ucode = 0x800,
	  .udesc = "Cycles in a Major Mode -- Isoch Major Mode",
	},
	{ .uname = "PARTIAL",
	  .ucode = 0x400,
	  .udesc = "Cycles in a Major Mode -- Partial Major Mode",
	},
	{ .uname = "READ",
	  .ucode = 0x100,
	  .udesc = "Cycles in a Major Mode -- Read Major Mode",
	},
	{ .uname = "WRITE",
	  .ucode = 0x200,
	  .udesc = "Cycles in a Major Mode -- Write Major Mode",
	},
};

static intel_x86_umask_t skx_unc_m_power_cke_cycles[]={
	{ .uname = "RANK0",
	  .ucode = 0x100,
	  .udesc = "Rank0 -- DIMM ID",
	},
	{ .uname = "RANK1",
	  .ucode = 0x200,
	  .udesc = "Rank1 -- DIMM ID",
	},
	{ .uname = "RANK2",
	  .ucode = 0x400,
	  .udesc = "Rank2 -- DIMM ID",
	},
	{ .uname = "RANK3",
	  .ucode = 0x800,
	  .udesc = "Rank3 -- DIMM ID",
	},
	{ .uname = "RANK4",
	  .ucode = 0x1000,
	  .udesc = "Rank4 -- DIMM ID",
	},
	{ .uname = "RANK5",
	  .ucode = 0x2000,
	  .udesc = "Rank5 -- DIMM ID",
	},
	{ .uname = "RANK6",
	  .ucode = 0x4000,
	  .udesc = "Rank6 -- DIMM ID",
	},
	{ .uname = "RANK7",
	  .ucode = 0x8000,
	  .udesc = "Rank7 -- DIMM ID",
	},
};

static intel_x86_umask_t skx_unc_m_preemption[]={
	{ .uname = "RD_PREEMPT_RD",
	  .ucode = 0x100,
	  .udesc = "Read Preemption Count -- Read over Read Preemption",
	},
	{ .uname = "RD_PREEMPT_WR",
	  .ucode = 0x200,
	  .udesc = "Read Preemption Count -- Read over Write Preemption",
	},
};

static intel_x86_umask_t skx_unc_m_pre_count[]={
	{ .uname = "BYP",
	  .ucode = 0x1000,
	  .udesc = "DRAM Precharge commands. -- Precharge due to bypass",
	},
	{ .uname = "PAGE_CLOSE",
	  .ucode = 0x200,
	  .udesc = "DRAM Precharge commands. -- Precharge due to timer expiration",
	},
	{ .uname = "PAGE_MISS",
	  .ucode = 0x100,
	  .udesc = "DRAM Precharge commands. -- Precharges due to page miss",
	},
	{ .uname = "RD",
	  .ucode = 0x400,
	  .udesc = "DRAM Precharge commands. -- Precharge due to read",
	},
	{ .uname = "WR",
	  .ucode = 0x800,
	  .udesc = "DRAM Precharge commands. -- Precharge due to write",
	},
};

static intel_x86_umask_t skx_unc_m_rd_cas_prio[]={
	{ .uname = "HIGH",
	  .ucode = 0x400,
	  .udesc = " -- Read CAS issued with HIGH priority",
	},
	{ .uname = "LOW",
	  .ucode = 0x100,
	  .udesc = " -- Read CAS issued with LOW priority",
	},
	{ .uname = "MED",
	  .ucode = 0x200,
	  .udesc = " -- Read CAS issued with MEDIUM priority",
	},
	{ .uname = "PANIC",
	  .ucode = 0x800,
	  .udesc = " -- Read CAS issued with PANIC NON ISOCH priority (starved)",
	},
};

static intel_x86_umask_t skx_unc_m_rd_cas_rank0[]={
	{ .uname = "ALLBANKS",
	  .ucode = 0x1000,
	  .udesc = "Access to all banks",
	},
	{ .uname = "BANK0",
	  .ucode = 0x0,
	  .udesc = "Access to Bank 0",
	},
	{ .uname = "BANK1",
	  .ucode = 0x100,
	  .udesc = "Access to Bank 1",
	},
	{ .uname = "BANK2",
	  .ucode = 0x200,
	  .udesc = "Access to Bank 2",
	},
	{ .uname = "BANK3",
	  .ucode = 0x300,
	  .udesc = "Access to Bank 3",
	},
	{ .uname = "BANK4",
	  .ucode = 0x400,
	  .udesc = "Access to Bank 4",
	},
	{ .uname = "BANK5",
	  .ucode = 0x500,
	  .udesc = "Access to Bank 5",
	},
	{ .uname = "BANK6",
	  .ucode = 0x600,
	  .udesc = "Access to Bank 6",
	},
	{ .uname = "BANK7",
	  .ucode = 0x700,
	  .udesc = "Access to Bank 7",
	},
	{ .uname = "BANK8",
	  .ucode = 0x800,
	  .udesc = "Access to Bank 8",
	},
	{ .uname = "BANK9",
	  .ucode = 0x900,
	  .udesc = "Access to Bank 9",
	},
	{ .uname = "BANK10",
	  .ucode = 0xa00,
	  .udesc = "Access to Bank 10",
	},
	{ .uname = "BANK11",
	  .ucode = 0xb00,
	  .udesc = "Access to Bank 11",
	},
	{ .uname = "BANK12",
	  .ucode = 0xc00,
	  .udesc = "Access to Bank 12",
	},
	{ .uname = "BANK13",
	  .ucode = 0xd00,
	  .udesc = "Access to Bank 13",
	},
	{ .uname = "BANK14",
	  .ucode = 0xe00,
	  .udesc = "Access to Bank 14",
	},
	{ .uname = "BANK15",
	  .ucode = 0xf00,
	  .udesc = "Access to Bank 15",
	},
	{ .uname = "BANKG0",
	  .ucode = 0x1100,
	  .udesc = "Access to Bank Group 0 (Banks 0-3)",
	},
	{ .uname = "BANKG1",
	  .ucode = 0x1200,
	  .udesc = "Access to Bank Group 1 (Banks 4-7)",
	},
	{ .uname = "BANKG2",
	  .ucode = 0x1300,
	  .udesc = "Access to Bank Group 2 (Banks 8-11)",
	},
	{ .uname = "BANKG3",
	  .ucode = 0x1400,
	  .udesc = "Access to Bank Group 3 (Banks 12-15)",
	},
};


static intel_x86_umask_t skx_unc_m_wmm_to_rmm[]={
	{ .uname = "LOW_THRESH",
	  .ucode = 0x100,
	  .udesc = "Transition from WMM to RMM because of low threshold -- Transition from WMM to RMM because of starve counter",
	},
	{ .uname = "STARVE",
	  .ucode = 0x200,
	  .udesc = "Transition from WMM to RMM because of low threshold -- ",
	},
	{ .uname = "VMSE_RETRY",
	  .ucode = 0x400,
	  .udesc = "Transition from WMM to RMM because of low threshold -- ",
	},
};

static intel_x86_entry_t intel_skx_unc_m_pe[]={
  { .name   = "UNC_M_ACT_COUNT",
    .code   = 0x1,
    .desc   = "Counts the number of DRAM Activate commands sent on this channel.  Activate commands are issued to open up a page on the DRAM devices so that it can be read or written to with a CAS.  One can calculate the number of Page Misses by subtracting the number of Page Miss precharges from the number of Activates.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_act_count,
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_act_count),
  },
  { .name   = "UNC_M_BYP_CMDS",
    .code   = 0xa1,
    .desc   = "TBD",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_byp_cmds,
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_byp_cmds),
  },
  { .name   = "UNC_M_CAS_COUNT",
    .code   = 0x4,
    .desc   = "TBD",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_cas_count,
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_cas_count),
  },
  { .name   = "UNC_M_DCLOCKTICKS",
    .desc   = "DRAM Clock ticks, fixed counter. Counts at half the DDR speed. Speed never changes",
    .modmsk = 0x0,
    .cntmsk = 0x100000000ull,
    .code   = 0xff, /* perf pseudo encoding for fixed counter */
  },
  { .name   = "UNC_M_CLOCKTICKS",
    .code   = 0x0,
    .desc   = "DRAM Clock ticks, generic counters",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_DRAM_PRE_ALL",
    .code   = 0x6,
    .desc   = "Counts the number of times that the precharge all command was sent.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_DRAM_REFRESH",
    .code   = 0x5,
    .desc   = "Counts the number of refreshes issued.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_dram_refresh,
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_dram_refresh),
  },
  { .name   = "UNC_M_ECC_CORRECTABLE_ERRORS",
    .code   = 0x9,
    .desc   = "Counts the number of ECC errors detected and corrected by the iMC on this channel.  This counter is only useful with ECC DRAM devices.  This count will increment one time for each correction regardless of the number of bits corrected.  The iMC can correct up to 4 bit errors in independent channel mode and 8 bit erros in lockstep mode.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_MAJOR_MODES",
    .code   = 0x7,
    .desc   = "Counts the total number of cycles spent in a major mode (selected by a filter) on the given channel.   Major modea are channel-wide, and not a per-rank (or dimm or bank) mode.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_major_modes,
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_major_modes),
  },
  { .name   = "UNC_M_POWER_CHANNEL_DLLOFF",
    .code   = 0x84,
    .desc   = "Number of cycles when all the ranks in the channel are in CKE Slow (DLLOFF) mode.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_POWER_CHANNEL_PPD",
    .code   = 0x85,
    .desc   = "Number of cycles when all the ranks in the channel are in PPD mode.  If IBT=off is enabled, then this can be used to count those cycles.  If it is not enabled, then this can count the number of cycles when that could have been taken advantage of.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_POWER_CKE_CYCLES",
    .code   = 0x83,
    .desc   = "Number of cycles spent in CKE ON mode.  The filter allows you to select a rank to monitor.  If multiple ranks are in CKE ON mode at one time, the counter will ONLY increment by one rather than doing accumulation.  Multiple counters will need to be used to track multiple ranks simultaneously.  There is no distinction between the different CKE modes (APD, PPDS, PPDF).  This can be determined based on the system programming.  These events should commonly be used with Invert to get the number of cycles in power saving mode.  Edge Detect is also useful here.  Make sure that you do NOT use Invert with Edge Detect (this just confuses the system and is not necessary).",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_power_cke_cycles,
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_power_cke_cycles),
  },
  { .name   = "UNC_M_POWER_CRITICAL_THROTTLE_CYCLES",
    .code   = 0x86,
    .desc   = "Counts the number of cycles when the iMC is in critical thermal throttling.  When this happens, all traffic is blocked.  This should be rare unless something bad is going on in the platform.  There is no filtering by rank for this event.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_POWER_PCU_THROTTLING",
    .code   = 0x42,
    .desc   = "TBD",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_POWER_SELF_REFRESH",
    .code   = 0x43,
    .desc   = "Counts the number of cycles when the iMC is in self-refresh and the iMC still has a clock.  This happens in some package C-states.  For example, the PCU may ask the iMC to enter self-refresh even though some of the cores are still processing.  One use of this is for Monroe technology.  Self-refresh is required during package C3 and C6, but there is no clock in the iMC at this time, so it is not possible to count these cases.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_POWER_THROTTLE_CYCLES",
    .code   = 0x41,
    .desc   = "Counts the number of cycles while the iMC is being throttled by either thermal constraints or by the PCU throttling.  It is not possible to distinguish between the two.  This can be filtered by rank.  If multiple ranks are selected and are being throttled at the same time, the counter will only increment by 1.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_power_cke_cycles, /* shared */
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_power_cke_cycles),
  },
  { .name   = "UNC_M_PREEMPTION",
    .code   = 0x8,
    .desc   = "Counts the number of times a read in the iMC preempts another read or write.  Generally reads to an open page are issued ahead of requests to closed pages.  This improves the page hit rate of the system.  However, high priority requests can cause pages of active requests to be closed in order to get them out.  This will reduce the latency of the high-priority request at the expense of lower bandwidth and increased overall average latency.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_preemption,
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_preemption),
  },
  { .name   = "UNC_M_PRE_COUNT",
    .code   = 0x2,
    .desc   = "Counts the number of DRAM Precharge commands sent on this channel.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_pre_count,
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_pre_count),
  },
  { .name   = "UNC_M_RD_CAS_PRIO",
    .code   = 0xa0,
    .desc   = "TBD",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_rd_cas_prio,
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_rd_cas_prio),
  },
  { .name   = "UNC_M_RD_CAS_RANK0",
    .code   = 0xb0,
    .desc   = "Read Cass Access to Rank",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_rd_cas_rank0,
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_rd_cas_rank0),
  },
  { .name   = "UNC_M_RD_CAS_RANK1",
    .code   = 0xb1,
    .desc   = "Read Cass Access to Rank",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_rd_cas_rank0, /* shared */
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_rd_cas_rank0),
  },
  { .name   = "UNC_M_RD_CAS_RANK2",
    .code   = 0xb2,
    .desc   = "Read Cass Access to Rank",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_rd_cas_rank0, /* shared */
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_rd_cas_rank0),
  },
  { .name   = "UNC_M_RD_CAS_RANK3",
    .code   = 0xb3,
    .desc   = "Read Cass Access to Rank",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_rd_cas_rank0, /* shared */
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_rd_cas_rank0),
  },
  { .name   = "UNC_M_RD_CAS_RANK4",
    .code   = 0xb4,
    .desc   = "Read Cass Access to Rank",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_rd_cas_rank0, /* shared */
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_rd_cas_rank0),
  },
  { .name   = "UNC_M_RD_CAS_RANK5",
    .code   = 0xb5,
    .desc   = "Read Cass Access to Rank",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_rd_cas_rank0, /* shared */
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_rd_cas_rank0),
  },
  { .name   = "UNC_M_RD_CAS_RANK6",
    .code   = 0xb6,
    .desc   = "Read Cass Access to Rank",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_rd_cas_rank0, /* shared */
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_rd_cas_rank0),
  },
  { .name   = "UNC_M_RD_CAS_RANK7",
    .code   = 0xb7,
    .desc   = "Read Cass Access to Rank",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_rd_cas_rank0, /* shared */
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_rd_cas_rank0),
  },
  { .name   = "UNC_M_RPQ_CYCLES_FULL",
    .code   = 0x12,
    .desc   = "Counts the number of cycles when the Read Pending Queue is full.  When the RPQ is full, the HA will not be able to issue any additional read requests into the iMC.  This count should be similar count in the HA which tracks the number of cycles that the HA has no RPQ credits, just somewhat smaller to account for the credit return overhead.  We generally do not expect to see RPQ become full except for potentially during Write Major Mode or while running with slow DRAM.  This event only tracks non-ISOC queue entries.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_RPQ_CYCLES_NE",
    .code   = 0x11,
    .desc   = "Counts the number of cycles that the Read Pending Queue is not empty.  This can then be used to calculate the average occupancy (in conjunction with the Read Pending Queue Occupancy count).  The RPQ is used to schedule reads out to the memory controller and to track the requests.  Requests allocate into the RPQ soon after they enter the memory controller, and need credits for an entry in this buffer before being sent from the HA to the iMC.  They deallocate after the CAS command has been issued to memory.  This filter is to be used in conjunction with the occupancy filter so that one can correctly track the average occupancies for schedulable entries and scheduled requests.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_RPQ_INSERTS",
    .code   = 0x10,
    .desc   = "Counts the number of allocations into the Read Pending Queue.  This queue is used to schedule reads out to the memory controller and to track the requests.  Requests allocate into the RPQ soon after they enter the memory controller, and need credits for an entry in this buffer before being sent from the HA to the iMC.  They deallocate after the CAS command has been issued to memory.  This includes both ISOCH and non-ISOCH requests.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_RPQ_OCCUPANCY",
    .code   = 0x80,
    .desc   = "Accumulates the occupancies of the Read Pending Queue each cycle.  This can then be used to calculate both the average occupancy (in conjunction with the number of cycles not empty) and the average latency (in conjunction with the number of allocations).  The RPQ is used to schedule reads out to the memory controller and to track the requests.  Requests allocate into the RPQ soon after they enter the memory controller, and need credits for an entry in this buffer before being sent from the HA to the iMC. They deallocate after the CAS command has been issued to memory.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_WMM_TO_RMM",
    .code   = 0xc0,
    .desc   = "Transitions from WMM to RMM because of low threshold",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_wmm_to_rmm,
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_wmm_to_rmm),
  },
  { .name   = "UNC_M_WPQ_CYCLES_FULL",
    .code   = 0x22,
    .desc   = "Counts the number of cycles when the Write Pending Queue is full.  When the WPQ is full, the HA will not be able to issue any additional write requests into the iMC.  This count should be similar count in the CHA which tracks the number of cycles that the CHA has no WPQ credits, just somewhat smaller to account for the credit return overhead.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_WPQ_CYCLES_NE",
    .code   = 0x21,
    .desc   = "Counts the number of cycles that the Write Pending Queue is not empty.  This can then be used to calculate the average queue occupancy (in conjunction with the WPQ Occupancy Accumulation count).  The WPQ is used to schedule write out to the memory controller and to track the writes.  Requests allocate into the WPQ soon after they enter the memory controller, and need credits for an entry in this buffer before being sent from the CHA to the iMC.  They deallocate after being issued to DRAM.  Write requests themselves are able to complete (from the perspective of the rest of the system) as soon they have posted to the iMC.  This is not to be confused with actually performing the write to DRAM.  Therefore, the average latency for this queue is actually not useful for deconstruction intermediate write latencieies.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_WPQ_INSERTS",
    .code   = 0x20,
    .desc   = "Counts the number of allocations into the Write Pending Queue.  This can then be used to calculate the average queuing latency (in conjunction with the WPQ occupancy count).  The WPQ is used to schedule write out to the memory controller and to track the writes.  Requests allocate into the WPQ soon after they enter the memory controller, and need credits for an entry in this buffer before being sent from the CHA to the iMC.  They deallocate after being issued to DRAM.  Write requests themselves are able to complete (from the perspective of the rest of the system) as soon they have posted to the iMiMC.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_WPQ_READ_HIT",
    .code   = 0x23,
    .desc   = "Counts the number of times a request hits in the WPQ (write-pending queue).  The iMC allows writes and reads to pass up other writes to different addresses.  Before a read or a write is issued, it will first CAM the WPQ to see if there is a write pending to that address.  When reads hit, they are able to directly pull their data from the WPQ instead of going to memory.  Writes that hit will overwrite the existing data.  Partial writes that hit will not need to do underfill reads and will simply update their relevant sections.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_WPQ_WRITE_HIT",
    .code   = 0x24,
    .desc   = "Counts the number of times a request hits in the WPQ (write-pending queue).  The iMC allows writes and reads to pass up other writes to different addresses.  Before a read or a write is issued, it will first CAM the WPQ to see if there is a write pending to that address.  When reads hit, they are able to directly pull their data from the WPQ instead of going to memory.  Writes that hit will overwrite the existing data.  Partial writes that hit will not need to do underfill reads and will simply update their relevant sections.",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_WRONG_MM",
    .code   = 0xc1,
    .desc   = "Number of times not getting the requested major mode",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
  },
  { .name   = "UNC_M_WR_CAS_RANK0",
    .code   = 0xb8,
    .desc   = "Write VAS to Rank",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_rd_cas_rank0, /* shared */
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_rd_cas_rank0),
  },
  { .name   = "UNC_M_WR_CAS_RANK1",
    .code   = 0xb9,
    .desc   = "Write VAS to Rank",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_rd_cas_rank0 /* shared */,
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_rd_cas_rank0),
  },
  { .name   = "UNC_M_WR_CAS_RANK2",
    .code   = 0xba,
    .desc   = "Write VAS to Rank",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_rd_cas_rank0,
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_rd_cas_rank0),
  },
  { .name   = "UNC_M_WR_CAS_RANK3",
    .code   = 0xbb,
    .desc   = "Write VAS to Rank",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_rd_cas_rank0,
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_rd_cas_rank0),
  },
  { .name   = "UNC_M_WR_CAS_RANK4",
    .code   = 0xbc,
    .desc   = "Write VAS to Rank",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_rd_cas_rank0,
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_rd_cas_rank0),
  },
  { .name   = "UNC_M_WR_CAS_RANK5",
    .code   = 0xbd,
    .desc   = "Write VAS to Rank",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_rd_cas_rank0, /* shared */
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_rd_cas_rank0),
  },
  { .name   = "UNC_M_WR_CAS_RANK6",
    .code   = 0xbe,
    .desc   = "Write VAS to Rank",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_rd_cas_rank0, /* shared */
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_rd_cas_rank0),
  },
  { .name   = "UNC_M_WR_CAS_RANK7",
    .code   = 0xbf,
    .desc   = "Write VAS to Rank",
    .modmsk = SKX_UNC_IMC_ATTRS,
    .cntmsk = 0xf,
    .ngrp   = 1,
    .umasks = skx_unc_m_rd_cas_rank0, /* shared */
    .numasks= LIBPFM_ARRAY_SIZE(skx_unc_m_rd_cas_rank0),
  },
};