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
 * Cortex-R52 Event Table
 */
static const arm_entry_t arm_cortex_r52_pe[]={
	{.name = "SW_INCR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x00,
	 .desc = "Software increment"
	},
	{.name = "L1I_CACHE_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x01,
	 .desc = "L1 instruction cache refill"
	},
	{.name = "L1D_CACHE_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x03,
	 .desc = "L1 data cache refill"
	},
	{.name = "L1D_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x04,
	 .desc = "L1 data cache access"
	},
	{.name = "LD_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x06,
	 .desc = "Instruction architecturally executed, condition check pass - load"
	},
	{.name = "ST_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x07,
	 .desc = "Instruction architecturally executed, condition check pass - store"
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
	 .desc = "Instruction architecturally executed, condition check pass, software change of the PC"
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
	{.name = "UNALIGNED_LDST_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0f,
	 .desc = "Instruction architecturally executed, condition code check pass, unaligned load or store"
	},
	{.name = "BR_MIS_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x10,
	 .desc = "Mispredicted or not predicted branch speculatively executed"
	},
	{.name = "CPU_CYCLES",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x11,
	 .desc = "Cycle"
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
	 .desc = "L1 instruction cache access"
	},
	{.name = "BUS_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x19,
	 .desc = "AXIM, Flash, or LLPP bus access"
	},
	{.name = "MEMORY_ERROR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1a,
	 .desc = "Local memory error (instruction cache, data cache, ATCM, BTCM, CTCM, or Flash)"
	},
	{.name = "INST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1b,
	 .desc = "Operation speculatively executed"
	},
	{.name = "BUS_CYCLES",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1d,
	 .desc = "Bus cycle (AXIM)"
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
	{.name = "STALL_FRONTEND",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x23,
	 .desc = "No operation issued due to the front end"
	},
	{.name = "STALL_BACKEND",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x24,
	 .desc = "No operation issued due to the back end"
	},
	{.name = "BUS_ACCESS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x60,
	 .desc = "Bus access - Read (AXIM, Flash, or LLPP)"
	},
	{.name = "BUS_ACCESS_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x61,
	 .desc = "Bus access - Write (AXIM, Flash, or LLPP)"
	},
	{.name = "EXC_SVC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x82,
	 .desc = "Exception taken, supervisor call"
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
	{.name = "EXC_HVC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x8a,
	 .desc = "Exception taken, Hypervisor Call"
	},
	{.name = "EXC_TRAP_IRQ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x8e,
	 .desc = "Exception taken, IRQ not taken locally"
	},
	{.name = "EXC_TRAP_FIQ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x8f,
	 .desc = "Exception taken, FIQ not taken locally"
	},
	{.name = "KITE_AXI_READ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc0,
	 .desc = "External memory request, AXIM read"
	},
	{.name = "KITE_AXI_WRITE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc1,
	 .desc = "External memory request, AXIM write"
	},
	{.name = "KITE_FLASH_READ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc2,
	 .desc = "External memory request, Flash (read-only)"
	},
	{.name = "KITE_LLPP_READ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc3,
	 .desc = "External memory request, LLPP read"
	},
	{.name = "KITE_LLPP_WRITE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc4,
	 .desc = "External memory request, LLPP write"
	},
	{.name = "KITE_NC_AXI_READ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc5,
	 .desc = "Non-cacheable external memory request, AXIM read"
	},
	{.name = "KITE_NC_AXI_WRITE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc6,
	 .desc = "Non-cacheable external memory request, AXIM write"
	},
	{.name = "KITE_NC_FLASH_READ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc7,
	 .desc = "Non-cacheable external memory request, Flash (read-only)"
	},
	{.name = "KITE_REFILL_PF_AXI",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc8,
	 .desc = "L1 data cache refill because of prefetch (AXIM only)"
	},
	{.name = "KITE_REFILL_LS_AXI",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc9,
	 .desc = "L1 data cache refill because of load or store, AXIM"
	},
	{.name = "KITE_REFILL_LS_FLASH",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xca,
	 .desc = "L1 data cache refill because of load or store, Flash"
	},
	{.name = "KITE_DC_ACCESS_AXI",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xcb,
	 .desc = "L1 data cache access in a way reserved for AXIM"
	},
	{.name = "KITE_DC_ACCESS_FLASH",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xcc,
	 .desc = "L1 data cache access in a way reserved for Flash"
	},
	{.name = "KITE_IC_ACCESS_AXI",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xcd,
	 .desc = "L1 instruction cache access in a way reserved for AXIM"
	},
	{.name = "KITE_IC_ACCESS_FLASH",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xce,
	 .desc = "L1 instruction cache access in a way reserved for Flash"
	},
	{.name = "KITE_NC_LS_HINTED_AXI",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xcf,
	 .desc = "Non-cacheable external memory request because of load was hinted, AXIM"
	},
	{.name = "KITE_NC_LS_HINTED_FLASH_READ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd0,
	 .desc = "Non-cacheable external memory request because of load was hinted, Flash"
	},
	{.name = "KITE_REFILL_IC_AXI",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd1,
	 .desc = "L1 Instruction cache refill, AXIM"
	},
	{.name = "KITE_REFILL_IC_FLASH",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd2,
	 .desc = "L1 Instruction cache refill, Flash"
	},
	{.name = "KITE_NC_LS_AXI_READ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd3,
	 .desc = "Non-cacheable external memory request because of load, AXIM"
	},
	{.name = "KITE_NC_LS_FLASH_READ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd4,
	 .desc = "Non-cacheable external memory request because of load, Flash"
	},
	{.name = "KITE_COND_BR_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd5,
	 .desc = "Conditional branch executed"
	},
	{.name = "KITE_MIS_PRED_COND_BR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd6,
	 .desc = "Conditional branch mispredicted"
	},
	{.name = "KITE_BTAC_BR_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd7,
	 .desc = "BTAC branch executed"
	},
	{.name = "KITE_MIS_PRED_BTAC_BR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd8,
	 .desc = "Conditional branch mispredicted"
	},
	{.name = "KITE_VSCTLR_CHANGED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd9,
	 .desc = "Instruction architecturally executed, MCR to VSCTLR"
	},
	{.name = "KITE_DSB_ALL_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xda,
	 .desc = "Instruction architecturally executed, strong DSB, DFB"
	},
	{.name = "KITE_SIMULT_ACCESS_AXI",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xdb,
	 .desc = "Simultaneous accesses from instruction side and data side to AXIM (causing contention)"
	},
	{.name = "KITE_SIMULT_ACCESS_FLASH",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xdc,
	 .desc = "Simultaneous accesses from instruction side and data side to Flash (causing contention)"
	},
	{.name = "KITE_EL2_ENTERED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xdd,
	 .desc = "Exception taken to EL2 (hyp mode entry), excluding reset"
	},
	{.name = "KITE_CRS_BR_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xde,
	 .desc = "Implementation defined event"
	},
	{.name = "KITE_MIS_PRED_CRS_BR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xdf,
	 .desc = "CRS branch mispredicted"
	},
	{.name = "KITE_COR_ERR_MEM",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xf0,
	 .desc = "Correctable memory error occurred from any source (L1 instruction cache, L1 data cache, ATCM, BTCM, CTCM, or flash)"
	},
	{.name = "KITE_FAT_ERR_MEM",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xf1,
	 .desc = "Fatal memory error occurred from any source (ATCM, BTCM, CTCM, or Flash)"
	},
	{.name = "KITE_BUS_COR_DATA",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xf2,
	 .desc = "Correctable data payload bus error occurred from any source (AXIM or LLPP)"
	},
	{.name = "KITE_BUS_FAT_OTHER",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xf3,
	 .desc = "Fatal non-protocol bus error (payload errors, except data) occurred from any source (AXIM, Flash, or LLPP)"
	},
	{.name = "KITE_BUS_PROTOCOL_ANY",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xf4,
	 .desc = "Fatal protocol bus error (LEN, ID, LAST, READY, and interconnect protection errors) occurred from any source (AXIM, Flash, or LLPP)"
	},
	{.name = "KITE_IQ_EMPTY_NO_MISS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x100,
	 .desc = "Counts every cycle that the DPU IQ is empty and that is not because of a recent instruction cache miss in any cache way"
	},
	{.name = "KITE_IQ_EMPTY_AXI_MISS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x101,
	 .desc = "Counts every cycle that the DPU IQ is empty and there is an instruction cache miss being processed for a cache way reserved for AXI Master"
	},
	{.name = "KITE_IQ_EMPTY_FLASH_MISS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x102,
	 .desc = "Counts every cycle that the DPU IQ is empty and there is an instruction cache miss being processed for a cache way reserved for Flash"
	},
	{.name = "KITE_INTERLOCK_OTHER",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x103,
	 .desc = "Counts every cycle there is an interlock that is not because of an Advanced SIMD or floating-point instruction, and not because of a load/store instruction waiting for data to calculate the address in the AGU"
	},
	{.name = "KITE_INTERLOCK_AGU",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x104,
	 .desc = "Counts every cycle there is an interlock that is because of a load/ store instruction waiting for data to calculate the address in the AGU"
	},
	{.name = "KITE_INTERLOCK_FPASIMD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x105,
	 .desc = "Counts every cycle there is an interlock that is because of an Advanced SIMD or floating-point instruction"
	},
	{.name = "KITE_LOAD_STALL_AXI",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x106,
	 .desc = "Counts every cycle there is a stall in the Wr stage because of a load miss from the AXIM"
	},
	{.name = "KITE_LOAD_STALL_FLASH",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x107,
	 .desc = "Counts every cycle there is a stall in the Wr stage because of a load miss from Flash"
	},
	{.name = "KITE_WR_STALL_STORE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x108,
	 .desc = "Counts every cycle there is a stall in the Wr stage because of a store"
	},
	{.name = "KITE_WR_STALL_AXI_STB_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x109,
	 .desc = "Store stalled because the AXIM part of the store buffer was full"
	},
	{.name = "KITE_WR_STALL_TCM_STB_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x10a,
	 .desc = "Store stalled because the TCM part of the store buffer was full"
	},
	{.name = "KITE_WR_STALL_LLPP_STB_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x10b,
	 .desc = "Store stalled because the LLPP part of the store buffer was full"
	},
	{.name = "KITE_BARRIER_STALL_BARRIER",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x10c,
	 .desc = "Barrier stalled because store buffer was busy with another barrier"
	},
	{.name = "KITE_BARRIER_STORE_AXIWRITE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x10d,
	 .desc = "Barrier stalled because it was waiting for a write to complete on the AXIM bus"
	},
	{.name = "KITE_IC_WT_HIT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x200,
	 .desc = "L1 instruction cache way tracker hit"
	},
	{.name = "KITE_DC_WT_HIT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x201,
	 .desc = "L1 data cache way tracker hit"
	},
	{.name = "KITE_I_UMPU_HIT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x202,
	 .desc = "Instruction side micro MPU hit"
	},
	{.name = "KITE_D_UMPU_HIT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x203,
	 .desc = "Data side micro MPU hit"
	},
	{.name = "KITE_IC_CACHE_HIT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x204,
	 .desc = "L1 instruction cache hit"
	},
	{.name = "KITE_IC_LFB_HIT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x205,
	 .desc = "L1 instruction cache linefill buffer hit"
	},
	{.name = "KITE_IC_BIU_HIT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x206,
	 .desc = "L1 instruction cache hit on BIU response"
	},
	{.name = "KITE_IC_HINT_REQ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x207,
	 .desc = "L1 instruction cache hint request sent"
	},
	/* END Cortex-R52 specific events */
};
