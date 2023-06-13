/*
* Copyright (C) ARM Ltd. 2016.  All rights reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

/*
 * Cortex-A65 Event Table
 */
static const arm_entry_t arm_cortex_a65_pe[]={
	{.name = "SW_INCR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x00,
	 .desc = "Instruction architecturally executed, condition code check pass, software increment"
	},
	{.name = "L1I_CACHE_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x01,
	 .desc = "Level 1 instruction cache refill"
	},
	{.name = "L1I_TLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x02,
	 .desc = "Level 1 instruction TLB refill"
	},
	{.name = "L1D_CACHE_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x03,
	 .desc = "Level 1 data cache refill"
	},
	{.name = "L1D_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x04,
	 .desc = "Level 1 data cache access"
	},
	{.name = "L1D_TLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x05,
	 .desc = "Level 1 data TLB refill"
	},
	{.name = "LD_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x06,
	 .desc = "Instruction architecturally executed, condition code check pass, load"
	},
	{.name = "ST_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x07,
	 .desc = "Instruction architecturally executed, condition code check pass, store"
	},
	{.name = "INST_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x08,
	 .desc = "Instruction architecturally executed"
	},
	{.name = "EXC_TAKEN",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x09,
	 .desc = "Exception taken"
	},
	{.name = "EXC_RETURN",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0a,
	 .desc = "Instruction architecturally executed, condition code check pass, exception return"
	},
	{.name = "CID_WRITE_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0b,
	 .desc = "Instruction architecturally executed, condition code check pass, write to CONTEXTIDR"
	},
	{.name = "PC_WRITE_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0c,
	 .desc = "Instruction architecturally executed, condition code check pass, software change of the PC"
	},
	{.name = "BR_IMMED_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0d,
	 .desc = "Instruction architecturally executed, immediate branch"
	},
	{.name = "BR_RETURN_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0e,
	 .desc = "Instruction architecturally executed, condition code check pass, procedure return"
	},
	{.name = "BR_MIS_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x10,
	 .desc = "Mispredicted or not predicted branch speculatively executed"
	},
	{.name = "CPU_CYCLES",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x11,
	 .desc = "The counter increments on every cycle"
	},
	{.name = "BR_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x12,
	 .desc = "Predictable branch speculatively executed"
	},
	{.name = "MEM_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x13,
	 .desc = "Data memory access"
	},
	{.name = "L1I_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x14,
	 .desc = "Level 1 instruction cache access"
	},
	{.name = "L1D_CACHE_WB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x15,
	 .desc = "Level 1 data cache Write-Back"
	},
	{.name = "L2D_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x16,
	 .desc = "Level 2 data cache access"
	},
	{.name = "L2D_CACHE_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x17,
	 .desc = "Level 2 data cache refill"
	},
	{.name = "L2D_CACHE_WB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x18,
	 .desc = "Level 2 data cache Write-Back"
	},
	{.name = "BUS_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x19,
	 .desc = "Bus access"
	},
	{.name = "MEMORY_ERROR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1a,
	 .desc = "Local memory error"
	},
	{.name = "INST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1b,
	 .desc = "Operation speculatively executed"
	},
	{.name = "TTBR_WRITE_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1c,
	 .desc = "Instruction architecturally executed, condition code check pass, write to TTBR"
	},
	{.name = "BUS_CYCLES",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1d,
	 .desc = "Bus cycles"
	},
	{.name = "L2D_CACHE_ALLOCATE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x20,
	 .desc = "Level 2 data cache allocation without refill"
	},
	{.name = "BR_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x21,
	 .desc = "Instruction architecturally executed, branch"
	},
	{.name = "BR_MIS_PRED_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x22,
	 .desc = "Instruction architecturally executed, mispredicted branch"
	},
	{.name = "BR__MIS_PRED_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "BR_MIS_PRED_RETIRED",
	 .code = 0x22,
	 .desc = "Instruction architecturally executed, mispredicted branch"
	},
	{.name = "STALL_FRONTEND",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x23,
	 .desc = "No operation issued because of the frontend"
	},
	{.name = "STALL_BACKEND",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x24,
	 .desc = "No operation issued because of the backend"
	},
	{.name = "L1D_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x25,
	 .desc = "Level 1 data TLB access"
	},
	{.name = "L1I_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x26,
	 .desc = "Level 1 instruction TLB access"
	},
	{.name = "L3D_CACHE_ALLOCATE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x29,
	 .desc = "Attributable Level 3 unified cache allocation without refill"
	},
	{.name = "L3D_CACHE_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x2a,
	 .desc = "Attributable Level 3 unified cache refill"
	},
	{.name = "L3D_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x2b,
	 .desc = "Attributable Level 3 unified cache access"
	},
	{.name = "L2D_TLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x2d,
	 .desc = "Attributable Level 2 unified TLB refill"
	},
	{.name = "L2D_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x2f,
	 .desc = "Attributable Level 2 unified TLB access"
	},
	{.name = "DTLB_WALK",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x34,
	 .desc = "Access to data TLB that caused a page table walk"
	},
	{.name = "ITLB_WALK",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x35,
	 .desc = "Access to instruction TLB that caused a page table walk"
	},
	{.name = "LL_CACHE_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x36,
	 .desc = "Last level cache access, read"
	},
	{.name = "LL_CACHE_MISS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x37,
	 .desc = "Last level cache miss, read"
	},
	{.name = "REMOTE_ACCESS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x38,
	 .desc = "Access to another socket in a multi-socket system, read"
	},
	{.name = "L1D_CACHE_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x40,
	 .desc = "Level 1 data cache access, read"
	},
	{.name = "L1D_CACHE_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x41,
	 .desc = "Level 1 data cache access, write"
	},
	{.name = "L1D_CACHE_REFILL_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x42,
	 .desc = "Level 1 data cache refill, read"
	},
	{.name = "L1D_CACHE_REFILL_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x43,
	 .desc = "Level 1 data cache refill, write"
	},
	{.name = "L1D_CACHE_REFILL_INNER",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x44,
	 .desc = "Level 1 data cache refill, inner"
	},
	{.name = "L1D_CACHE_REFILL_OUTER",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x45,
	 .desc = "Level 1 data cache refill, outer"
	},
	{.name = "L2D_CACHE_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x50,
	 .desc = "Level 2 cache access, read"
	},
	{.name = "L2D_CACHE_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x51,
	 .desc = "Level 2 cache access, write"
	},
	{.name = "L2D_CACHE_REFILL_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x52,
	 .desc = "Level 2 cache refill, read"
	},
	{.name = "L2D_CACHE_REFILL_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x53,
	 .desc = "Level 2 cache refill, write"
	},
	{.name = "BUS_ACCESS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x60,
	 .desc = "Bus access, read"
	},
	{.name = "BUS_ACCESS_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x61,
	 .desc = "Bus access, write"
	},
	{.name = "MEM_ACCESS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x66,
	 .desc = "Data memory access, read"
	},
	{.name = "MEM_ACCESS_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x67,
	 .desc = "Data memory access, write"
	},
	{.name = "UNALIGNED_LD_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x68,
	 .desc = "Unaligned access, read"
	},
	{.name = "UNALIGNED_ST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x69,
	 .desc = "Unaligned access, write"
	},
	{.name = "UNALIGNED_LDST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x6a,
	 .desc = "Unaligned access"
	},
	{.name = "LD_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x70,
	 .desc = "Operation speculatively executed, load"
	},
	{.name = "ST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x71,
	 .desc = "Operation speculatively executed, store"
	},
	{.name = "LDST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x72,
	 .desc = "Operation speculatively executed, load or store"
	},
	{.name = "DP_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x73,
	 .desc = "Operation speculatively executed, integer data processing"
	},
	{.name = "ASE_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x74,
	 .desc = "Operation speculatively executed, Advanced SIMD instruction"
	},
	{.name = "VFP_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x75,
	 .desc = "Instruction speculatively executed, Float Point"
	},
	{.name = "CRYPTO_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x77,
	 .desc = "Operation speculatively executed, Cryptographic instruction"
	},
	{.name = "BR_IMMED_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x78,
	 .desc = "Branch speculatively executed, immediate branch"
	},
	{.name = "BR_RETURN_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x79,
	 .desc = "Branch speculatively executed, procedure return"
	},
	{.name = "BR_INDIRECT_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x7a,
	 .desc = "Branch speculatively executed, indirect branch"
	},
	{.name = "ISB_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x7c,
	 .desc = "ISB speculatively executed"
	},
	{.name = "EXC_IRQ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x86,
	 .desc = "Exception taken, IRQ"
	},
	{.name = "EXC_FIQ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x87,
	 .desc = "Exception taken, FIQ"
	},
	{.name = "L3D_CACHE_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xa0,
	 .desc = "Attributable Level 3 unified cache access, read"
	},
	{.name = "L3D_CACHE_REFILL_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xa2,
	 .desc = "Attributable Level 3 unified cache refill, read"
	},
	{.name = "STB_STALL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc0,
	 .desc = "Merge in the store buffer"
	},
	{.name = "BIU_EXT_MEM_REQ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc1,
	 .desc = "External memory request"
	},
	{.name = "BIU_EXT_MEM_REQ_NC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc2,
	 .desc = "External memory request to non-cacheable memory"
	},
	{.name = "L1D_PREF_LINE_FILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc3,
	 .desc = "Level 1 data cache refill started due to prefetch"
	},
	{.name = "L2D_PREF_LINE_FILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc4,
	 .desc = "Level 2 cache refill due to prefetch"
	},
	{.name = "L3_PREF_LINE_FILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc5,
	 .desc = "Level 3 cache refill due to prefetch"
	},
	{.name = "L1D_WS_MODE_ENTER",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc6,
	 .desc = "L1D entering write stream mode"
	},
	{.name = "L1D_WS_MODE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc7,
	 .desc = "L1D is in write stream mode"
	},
	{.name = "L2D_WS_MODE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc8,
	 .desc = "Level 2 cache write streaming mode"
	},
	{.name = "L3D_WS_MODE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc9,
	 .desc = "Level 3 cache write streaming mode"
	},
	{.name = "TLB_L2TLB_LLWALK_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xca,
	 .desc = "Level 2 TLB last-level walk cache access"
	},
	{.name = "TLB_L2TLB_LLWALK_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xcb,
	 .desc = "Level 2 TLB last-level walk cache refill"
	},
	{.name = "TLB_L2TLB_L2WALK_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xcc,
	 .desc = "Level 2 TLB level-2 walk cache access"
	},
	{.name = "TLB_L2TLB_L2WALK_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xcd,
	 .desc = "Level 2 TLB level-2 walk cache refill"
	},
	{.name = "TLB_L2TLB_S2_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xce,
	 .desc = "Level 2 TLB IPA cache access"
	},
	{.name = "TLB_L2TLB_S2_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xcf,
	 .desc = "Level 2 TLB IPA cache refill"
	},
	{.name = "IFU_IC_MISS_WAIT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd0,
	 .desc = "I-Cache miss on an access from the prefetch block"
	},
	{.name = "IFU_IUTLB_MISS_WAIT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd1,
	 .desc = "Counts the cycles spent on a request for Level 2 TLB lookup after a Level 1l ITLB miss"
	},
	{.name = "IFU_MICRO_COND_MISPRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd2,
	 .desc = "Micro-predictor conditional/direction mispredict, with respect to"
	},
	{.name = "IFU_MICRO_CADDR_MISPRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd3,
	 .desc = "Micro-predictor address mispredict, with respect to if3/if4 predictor"
	},
	{.name = "IFU_MICRO_HIT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd4,
	 .desc = "Micro-predictor hit with immediate redirect"
	},
	{.name = "IFU_MICRO_NEG_HIT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd6,
	 .desc = "Micro-predictor negative cache hit"
	},
	{.name = "IFU_MICRO_CORRECTION",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd7,
	 .desc = "Micro-predictor correction"
	},
	{.name = "IFU_MICRO_NO_INSTR1",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd8,
	 .desc = "A 2nd instruction could have been pushed but was not because it was nonsequential"
	},
	{.name = "IFU_MICRO_NO_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd9,
	 .desc = "Micro-predictor miss"
	},
	{.name = "IFU_FLUSHED_TLB_MISS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xda,
	 .desc = "Thread flushed due to TLB miss"
	},
	{.name = "IFU_FLUSHED_EXCL_TLB_MISS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xdb,
	 .desc = "Thread flushed due to reasons other than TLB miss"
	},
	{.name = "IFU_ALL_THRDS_RDY",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xdc,
	 .desc = "This thread and the other thread both ready for scheduling in if0"
	},
	{.name = "IFU_WIN_ARB_OTHER_RDY",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xdd,
	 .desc = "This thread was arbitrated when the other thread was also ready for scheduling"
	},
	{.name = "IFU_WIN_ARB_OTHER_ACT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xde,
	 .desc = "This thread was arbitrated when the other thread was also active, but not necessarily ready"
	},
	{.name = "IFU_NOT_RDY_FOR_ARB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xdf,
	 .desc = "This thread was not arbitrated because it was not ready for scheduling"
	},
	{.name = "IFU_GOTO_IDLE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe0,
	 .desc = "The thread moved from an active state to an inactive state (long-term sleep state, causing deallocation of some resources)"
	},
	{.name = "IFU_IC_LOOKUP_UNDER_MISS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe1,
	 .desc = "I-Cache lookup under miss from other thread"
	},
	{.name = "IFU_IC_MISS_UNDER_MISS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe2,
	 .desc = "I-Cache miss under miss from other thread"
	},
	{.name = "IFU_INSTR_PUSHED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe3,
	 .desc = "This thread pushed an instruction into the IQ"
	},
	{.name = "IFU_IC_LF_SP",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe4,
	 .desc = "I-Cache Speculative line fill"
	},
	{.name = "DPU_BR_COND_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe8,
	 .desc = "Instruction retired, conditional branch"
	},
	{.name = "DPU_BR_IND_MIS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe9,
	 .desc = "Instruction retired, indirect branch, mispredicted"
	},
	{.name = "DPU_BR_COND_MIS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xea,
	 .desc = "Instruction retired, conditional branch, mispredicted"
	},
	{.name = "DPU_MEM_ERR_IFU",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xeb,
	 .desc = "Memory error (any type) from IFU"
	},
	{.name = "DPU_MEM_ERR_DCU",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xec,
	 .desc = "Memory error (any type) from DCU"
	},
	{.name = "DPU_MEM_ERR_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xed,
	 .desc = "Memory error (any type) from TLB"
	},
	{.name = "L2_L1D_CACHE_WB_UNATT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xf0,
	 .desc = "Unattributable Level 1 data cache write-back"
	},
	{.name = "L2_L2D_CACHE_UNATT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xf1,
	 .desc = "Unattributable Level 2 data cache access"
	},
	{.name = "L2_L2D_CACHE_RD_UNATT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xf2,
	 .desc = "Unattributable Level 2 data cache access, read"
	},
	{.name = "L2_L3D_CACHE_UNATT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xf3,
	 .desc = "Unattributable Level 3 data cache access"
	},
	{.name = "L2_L3D_CACHE_RD_UNATT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xf4,
	 .desc = "Unattributable Level 3 data cache access, read"
	},
	{.name = "L2_L3D_CACHE_ALLOC_UNATT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xf5,
	 .desc = "Unattributable Level 3 data or unified cache allocation without refill"
	},
	{.name = "L2_L3D_CACHE_REFILL_UNATT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xf6,
	 .desc = "Unattributable Level 3 data or unified cache refill"
	},
	{.name = "L2D_CACHE_STASH_DROPPED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xf7,
	 .desc = "Level 2 cache stash dropped"
	},
	/* END Cortex-A65 specific events */
};
