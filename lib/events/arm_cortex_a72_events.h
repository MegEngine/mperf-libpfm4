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
 * Cortex-A72 Event Table
 */
static const arm_entry_t arm_cortex_a72_pe[]={
	{.name = "SW_INCR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x00,
	 .desc = "Instruction architecturally executed (condition check pass) - Software increment"
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
	 .desc = "Instruction architecturally executed (condition check pass) - Exception return"
	},
	{.name = "CID_WRITE_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0b,
	 .desc = "Instruction architecturally executed (condition check pass) - Write to CONTEXTIDR"
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
	 .desc = "Instruction architecturally executed (condition check pass) - Write to translation table base"
	},
	{.name = "BUS_CYCLES",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1d,
	 .desc = "Bus cycle"
	},
	{.name = "L1D_CACHE_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x40,
	 .desc = "Level 1 data cache access - Read"
	},
	{.name = "L1D_CACHE_LD",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L1D_CACHE_RD",
	 .code = 0x40,
	 .desc = "Level 1 data cache access - Read"
	},
	{.name = "L1D_CACHE_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x41,
	 .desc = "Level 1 data cache access - Write"
	},
	{.name = "L1D_CACHE_ST",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L1D_CACHE_WR",
	 .code = 0x41,
	 .desc = "Level 1 data cache access - Write"
	},
	{.name = "L1D_CACHE_REFILL_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x42,
	 .desc = "Level 1 data cache refill - Read"
	},
	{.name = "L1D_CACHE_REFILL_LD",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L1D_CACHE_REFILL_RD",
	 .code = 0x42,
	 .desc = "Level 1 data cache refill - Read"
	},
	{.name = "L1D_CACHE_REFILL_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x43,
	 .desc = "Level 1 data cache refill - Write"
	},
	{.name = "L1D_CACHE_REFILL_ST",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L1D_CACHE_REFILL_WR",
	 .code = 0x43,
	 .desc = "Level 1 data cache refill - Write"
	},
	{.name = "L1D_CACHE_WB_VICTIM",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x46,
	 .desc = "Level 1 data cache Write-back - Victim"
	},
	{.name = "L1D_CACHE_WB_CLEAN",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x47,
	 .desc = "Level 1 data cache Write-back - Cleaning and coherency"
	},
	{.name = "L1D_CACHE_INVAL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x48,
	 .desc = "Level 1 data cache invalidate"
	},
	{.name = "L1D_TLB_REFILL_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x4c,
	 .desc = "Level 1 data TLB refill - Read"
	},
	{.name = "L1D_TLB_REFILL_LD",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L1D_TLB_REFILL_RD",
	 .code = 0x4c,
	 .desc = "Level 1 data TLB refill - Read"
	},
	{.name = "L1D_TLB_REFILL_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x4d,
	 .desc = "Level 1 data TLB refill - Write"
	},
	{.name = "L1D_TLB_REFILL_ST",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L1D_TLB_REFILL_WR",
	 .code = 0x4d,
	 .desc = "Level 1 data TLB refill - Write"
	},
	{.name = "L2D_CACHE_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x50,
	 .desc = "Level 2 data cache access - Read"
	},
	{.name = "L2D_CACHE_LD",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_CACHE_RD",
	 .code = 0x50,
	 .desc = "Level 2 data cache access - Read"
	},
	{.name = "L2D_CACHE_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x51,
	 .desc = "Level 2 data cache access - Write"
	},
	{.name = "L2D_CACHE_ST",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_CACHE_WR",
	 .code = 0x51,
	 .desc = "Level 2 data cache access - Write"
	},
	{.name = "L2D_CACHE_REFILL_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x52,
	 .desc = "Level 2 data cache refill - Read"
	},
	{.name = "L2D_CACHE_REFILL_LD",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_CACHE_REFILL_RD",
	 .code = 0x52,
	 .desc = "Level 2 data cache refill - Read"
	},
	{.name = "L2D_CACHE_REFILL_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x53,
	 .desc = "Level 2 data cache refill - Write"
	},
	{.name = "L2D_CACHE_REFILL_ST",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_CACHE_REFILL_WR",
	 .code = 0x53,
	 .desc = "Level 2 data cache refill - Write"
	},
	{.name = "L2D_CACHE_WB_VICTIM",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x56,
	 .desc = "Level 2 data cache Write-back - Victim"
	},
	{.name = "L2D_CACHE_WB_CLEAN",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x57,
	 .desc = "Level 2 data cache Write-back - Cleaning and coherency"
	},
	{.name = "L2D_CACHE_INVAL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x58,
	 .desc = "Level 2 data cache invalidate"
	},
	{.name = "BUS_ACCESS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x60,
	 .desc = "Bus access - Read"
	},
	{.name = "BUS_ACCESS_LD",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "BUS_ACCESS_RD",
	 .code = 0x60,
	 .desc = "Bus access - Read"
	},
	{.name = "BUS_ACCESS_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x61,
	 .desc = "Bus access - Write"
	},
	{.name = "BUS_ACCESS_ST",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "BUS_ACCESS_WR",
	 .code = 0x61,
	 .desc = "Bus access - Write"
	},
	{.name = "BUS_ACCESS_SHARED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x62,
	 .desc = "Bus access - Normal"
	},
	{.name = "BUS_ACCESS_NOT_SHARED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x63,
	 .desc = "Bus access - Not normal"
	},
	{.name = "BUS_ACCESS_NORMAL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x64,
	 .desc = "Bus access - Normal"
	},
	{.name = "BUS_ACCESS_PERIPH",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x65,
	 .desc = "Bus access - Peripheral"
	},
	{.name = "MEM_ACCESS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x66,
	 .desc = "Data memory access - Read"
	},
	{.name = "MEM_ACCESS_LD",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "MEM_ACCESS_RD",
	 .code = 0x66,
	 .desc = "Data memory access - Read"
	},
	{.name = "MEM_ACCESS_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x67,
	 .desc = "Data memory access - Write"
	},
	{.name = "MEM_ACCESS_ST",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "MEM_ACCESS_WR",
	 .code = 0x67,
	 .desc = "Data memory access - Write"
	},
	{.name = "UNALIGNED_LD_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x68,
	 .desc = "Unaligned access - Read"
	},
	{.name = "UNALIGNED_ST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x69,
	 .desc = "Unaligned access - Write"
	},
	{.name = "UNALIGNED_LDST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x6a,
	 .desc = "Unaligned access"
	},
	{.name = "LDREX_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x6c,
	 .desc = "Exclusive operation speculatively executed - LDREX"
	},
	{.name = "STREX_PASS_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x6d,
	 .desc = "Exclusive instruction speculatively executed - STREX pass"
	},
	{.name = "STREX_FAIL_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x6e,
	 .desc = "Exclusive operation speculatively executed - STREX fail"
	},
	{.name = "LD_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x70,
	 .desc = "Operation speculatively executed - Load"
	},
	{.name = "ST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x71,
	 .desc = "Operation speculatively executed - Store"
	},
	{.name = "LDST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x72,
	 .desc = "Operation speculatively executed - Load or store"
	},
	{.name = "DP_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x73,
	 .desc = "Operation speculatively executed - Integer data processing"
	},
	{.name = "ASE_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x74,
	 .desc = "Operation speculatively executed - Advanced SIMD"
	},
	{.name = "VFP_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x75,
	 .desc = "Operation speculatively executed - VFP"
	},
	{.name = "PC_WRITE_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x76,
	 .desc = "Operation speculatively executed - Software change of the PC"
	},
	{.name = "CRYPTO_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x77,
	 .desc = "Operation speculatively executed, crypto data processing"
	},
	{.name = "BR_IMMED_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x78,
	 .desc = "Branch speculatively executed - Immediate branch"
	},
	{.name = "BR_RETURN_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x79,
	 .desc = "Branch speculatively executed - Procedure return"
	},
	{.name = "BR_INDIRECT_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x7a,
	 .desc = "Branch speculatively executed - Indirect branch"
	},
	{.name = "ISB_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x7c,
	 .desc = "Barrier speculatively executed - ISB"
	},
	{.name = "DSB_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x7d,
	 .desc = "Barrier speculatively executed - DSB"
	},
	{.name = "DMB_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x7e,
	 .desc = "Barrier speculatively executed - DMB"
	},
	{.name = "EXC_UNDEF",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x81,
	 .desc = "Exception taken, other synchronous"
	},
	{.name = "EXC_SVC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x82,
	 .desc = "Exception taken, Supervisor Call"
	},
	{.name = "EXC_PABORT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x83,
	 .desc = "Exception taken, Instruction Abort"
	},
	{.name = "EXC_DABORT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x84,
	 .desc = "Exception taken, Data Abort or SError"
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
	{.name = "EXC_SMC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x88,
	 .desc = "Exception taken, Secure Monitor Call"
	},
	{.name = "EXC_HVC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x8a,
	 .desc = "Exception taken, Hypervisor Call"
	},
	{.name = "EXC_TRAP_PABORT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x8b,
	 .desc = "Exception taken, Instruction Abort not taken locally"
	},
	{.name = "EXC_TRAP_DABORT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x8c,
	 .desc = "Exception taken, Data Abort, or SError not taken locally"
	},
	{.name = "EXC_TRAP_OTHER",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x8d,
	 .desc = "Exception taken - Other traps not taken locally"
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
	{.name = "RC_LD_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x90,
	 .desc = "Release consistency instruction speculatively executed - LoadAcquire"
	},
	{.name = "RC_ST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x91,
	 .desc = "Release consistency instruction speculatively executed - StoreRelease"
	},
	/* END Cortex-A72 specific events */
};
