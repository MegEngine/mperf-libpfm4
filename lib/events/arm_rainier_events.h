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
 * Rainier Event Table
 */
static const arm_entry_t arm_rainier_pe[]={
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
	{.name = "L1I_TLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x02,
	 .desc = "L1 instruction TLB refill"
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
	{.name = "L1D_TLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x05,
	 .desc = "L1 data TLB refill"
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
	 .desc = "Level 1 instruction cache access or Level 0 Macro-op cache access"
	},
	{.name = "L1D_CACHE_WB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x15,
	 .desc = "L1 data cache Write-Back"
	},
	{.name = "L2D_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x16,
	 .desc = "L2 data cache access"
	},
	{.name = "L2D_CACHE_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x17,
	 .desc = "L2 data cache refill"
	},
	{.name = "L2D_CACHE_WB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x18,
	 .desc = "L2 data cache write-back"
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
	 .desc = "L2 data cache allocation without refill"
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
	 .desc = "Attributable L3 data or unified cache allocation without refill"
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
	 .desc = "Attributable L2 data or unified TLB refill"
	},
	{.name = "L2D_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x2f,
	 .desc = "Attributable L2 data or unified TLB access"
	},
	{.name = "REMOTE_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x31,
	 .desc = "Access to another socket in a multi-socket system"
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
	{.name = "L1D_CACHE_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x40,
	 .desc = "L1 data cache access, read"
	},
	{.name = "L1D_CACHE_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x41,
	 .desc = "L1 data cache access, write"
	},
	{.name = "L1D_CACHE_REFILL_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x42,
	 .desc = "L1 data cache refill, read"
	},
	{.name = "L1D_CACHE_REFILL_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x43,
	 .desc = "L1 data cache refill, write"
	},
	{.name = "L1D_CACHE_REFILL_INNER",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x44,
	 .desc = "L1 data cache refill, inner"
	},
	{.name = "L1D_CACHE_REFILL_OUTER",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x45,
	 .desc = "L1 data cache refill, outer"
	},
	{.name = "L1D_CACHE_WB_VICTIM",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x46,
	 .desc = "L1 data cache write-back, victim"
	},
	{.name = "L1D_CACHE_WB_CLEAN",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x47,
	 .desc = "L1 data cache write-back cleaning and coherency"
	},
	{.name = "L1D_CACHE_INVAL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x48,
	 .desc = "L1 data cache invalidate"
	},
	{.name = "L1D_TLB_REFILL_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x4c,
	 .desc = "L1 data TLB refill, read"
	},
	{.name = "L1D_TLB_REFILL_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x4d,
	 .desc = "L1 data TLB refill, write"
	},
	{.name = "L1D_TLB_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x4e,
	 .desc = "L1 data TLB access, read"
	},
	{.name = "L1D_TLB_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x4f,
	 .desc = "L1 data TLB access, write"
	},
	{.name = "L2D_CACHE_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x50,
	 .desc = "L2 data cache access, read"
	},
	{.name = "L2D_CACHE_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x51,
	 .desc = "L2 data cache access, write"
	},
	{.name = "L2D_CACHE_REFILL_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x52,
	 .desc = "L2 data cache refill, read"
	},
	{.name = "L2D_CACHE_REFILL_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x53,
	 .desc = "L2 data cache refill, write"
	},
	{.name = "L2D_CACHE_WB_VICTIM",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x56,
	 .desc = "L2 data cache write-back, victim"
	},
	{.name = "L2D_CACHE_WB_CLEAN",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x57,
	 .desc = "L2 data cache write-back, cleaning and coherency"
	},
	{.name = "L2D_CACHE_INVAL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x58,
	 .desc = "L2 data cache invalidate"
	},
	{.name = "L2D_TLB_REFILL_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x5c,
	 .desc = "L2 data or unified TLB refill, read"
	},
	{.name = "L2D_TLB_REFILL_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x5d,
	 .desc = "L2 data or unified TLB refill, write"
	},
	{.name = "L2D_TLB_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x5e,
	 .desc = "L2 data or unified TLB access, read"
	},
	{.name = "L2D_TLB_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x5f,
	 .desc = "L2 data or unified TLB access, write"
	},
	{.name = "BUS_ACCESS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x60,
	 .desc = "Bus access read"
	},
	{.name = "BUS_ACCESS_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x61,
	 .desc = "Bus access write"
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
	{.name = "LDREX_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x6c,
	 .desc = "Exclusive operation speculatively executed, LDREX or LDX"
	},
	{.name = "STREX_PASS_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x6d,
	 .desc = "Exclusive operation speculatively executed, STREX or STX pass"
	},
	{.name = "STREX_FAIL_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x6e,
	 .desc = "Exclusive operation speculatively executed, STREX or STX fail"
	},
	{.name = "STREX_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x6f,
	 .desc = "Exclusive operation speculatively executed, STREX or STX"
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
	 .desc = "Operation speculatively executed, integer data-processing"
	},
	{.name = "ASE_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x74,
	 .desc = "Operation speculatively executed, Advanced SIMD instruction"
	},
	{.name = "VFP_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x75,
	 .desc = "Operation speculatively executed, floating-point instruction"
	},
	{.name = "PC_WRITE_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x76,
	 .desc = "Operation speculatively executed, software change of the PC"
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
	 .desc = "Barrier speculatively executed, ISB"
	},
	{.name = "DSB_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x7d,
	 .desc = "Barrier speculatively executed, DSB"
	},
	{.name = "DMB_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x7e,
	 .desc = "Barrier speculatively executed, DMB"
	},
	{.name = "EXC_UNDEF",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x81,
	 .desc = "Counts the number of undefined exceptions taken locally"
	},
	{.name = "EXC_SVC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x82,
	 .desc = "Exception taken locally, Supervisor Call"
	},
	{.name = "EXC_PABORT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x83,
	 .desc = "Exception taken locally, Instruction Abort"
	},
	{.name = "EXC_DABORT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x84,
	 .desc = "Exception taken locally, Data Abort and SError"
	},
	{.name = "EXC_IRQ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x86,
	 .desc = "Exception taken locally, IRQ"
	},
	{.name = "EXC_FIQ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x87,
	 .desc = "Exception taken locally, FIQ"
	},
	{.name = "EXC_SMC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x88,
	 .desc = "Exception taken locally, Secure Monitor Call"
	},
	{.name = "EXC_HVC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x8a,
	 .desc = "Exception taken locally, Hypervisor Call"
	},
	{.name = "EXC_TRAP_PABORT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x8b,
	 .desc = "Exception taken, Instruction Abort not taken locally"
	},
	{.name = "EXC_TRAP_DABORT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x8c,
	 .desc = "Exception taken, Data Abort or SError not taken locally"
	},
	{.name = "EXC_TRAP_OTHER",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x8d,
	 .desc = "Exception taken, Other traps not taken locally"
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
	 .desc = "Release consistency operation speculatively executed, load-acquire"
	},
	{.name = "RC_ST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x91,
	 .desc = "Release consistency operation speculatively executed, store-release"
	},
	{.name = "L3D_CACHE_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xa0,
	 .desc = "L3 cache read"
	},
	{.name = "L3_CACHE_RD",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L3D_CACHE_RD",
	 .code = 0xa0,
	 .desc = "L3 cache read"
	},
	{.name = "BR_MIS_PRED_RS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x200,
	 .desc = "Branch mispredict restricted"
	},
	{.name = "BR_MIS_PRED_C64",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x201,
	 .desc = "Branch mispredict C64"
	},
	{.name = "BR_MIS_PRED_SYS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x202,
	 .desc = "Branch mispredict system permission"
	},
	{.name = "PCCRF_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x203,
	 .desc = "PCC register file full"
	},
	{.name = "EXECUTIVE_ENTRY",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x204,
	 .desc = "Entry to Executive, Operations Speculatively Executed"
	},
	{.name = "EXECUTIVE_EXIT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x205,
	 .desc = "Exit from Executive, Operations Speculatively Executed"
	},
	{.name = "INST_SPEC_A64",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x206,
	 .desc = "Instructions in A64, Operations Speculatively Executed"
	},
	{.name = "INST_SPEC_C64",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x207,
	 .desc = "Instructions in C64, Operations Speculatively Executed"
	},
	{.name = "CID_EL0_WRITE_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x208,
	 .desc = "Instruction architecturally executed, Write to CID_EL0"
	},
	{.name = "DDC_WRITE_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x209,
	 .desc = "Instruction architecturally executed, Write to DDC_ELx, RDDC_EL0"
	},
	{.name = "DDC_READ_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x20a,
	 .desc = "Read from DDC_ELx, RDDC_EL0, Operations Speculatively Executed"
	},
	{.name = "INST_SPEC_CVTD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x20b,
	 .desc = "CVTD Instructions, Operations Speculatively Executed"
	},
	{.name = "INST_SPEC_SCBNDS_NONEXACT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x20e,
	 .desc = "SCBNDS or SCBNDSE Instructions which do not set exact bounds, Operations Speculatively Executed"
	},
	{.name = "CDBM_SET_SC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x20f,
	 .desc = "SC set due to CDBM"
	},
	{.name = "CAP_LD_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x210,
	 .desc = "Capability Load Instructions, Operations Speculatively Executed"
	},
	{.name = "CAP_ST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x211,
	 .desc = "Capability Store Instructions, Operations Speculatively Executed"
	},
	{.name = "CAP_ALT_LD_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x212,
	 .desc = "Alternate Base Capability Load Instructions, Operations Speculatively Executed"
	},
	{.name = "CAP_ALT_ST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x213,
	 .desc = "Alternate Base Capability Store Instructions, Operations Speculatively Executed"
	},
	{.name = "ALT_LD_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x214,
	 .desc = "Alternate Base Load Instructions, Operations Speculatively Executed"
	},
	{.name = "ALT_ST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x215,
	 .desc = "Alternate Base Store Instructions, Operations Speculatively Executed"
	},
	{.name = "LDCT_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x216,
	 .desc = "LDCT Instructions, Operations Speculatively Executed"
	},
	{.name = "LDCT_NO_CAP_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x217,
	 .desc = "LDCT Instructions When Capability Tags are Zero, Operations Speculatively Executed"
	},
	{.name = "DC_ZVA_RET",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x218,
	 .desc = "Data Cache Zero"
	},
	{.name = "LDCT_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x21a,
	 .desc = "Data cache refill due to LDCT, Operations Speculatively Executed"
	},
	{.name = "STCT_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x21b,
	 .desc = "Data cache refill due to STCT, Operations Speculatively Executed"
	},
	{.name = "L1D_CACHE_RD_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x21c,
	 .desc = "Attributable Level 1 data cache access, read, valid capability"
	},
	{.name = "L1D_CACHE_WR_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x21d,
	 .desc = "Attributable Level 1 data cache access, write, valid capability"
	},
	{.name = "L1D_CACHE_WB_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x21e,
	 .desc = "Attributable Level 1 data cache write-back, valid capability"
	},
	{.name = "L1D_CACHE_REFILL_RD_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x21f,
	 .desc = "Attributable Level 1 data cache refill, capability"
	},
	{.name = "L1D_CACHE_REFILL_WR_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x220,
	 .desc = "Attributable Level 1 data cache refill, capability"
	},
	{.name = "L1D_CACHE_REFILL_INNER_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x221,
	 .desc = "Attributable Level 1 data cache refill, inner, valid capability"
	},
	{.name = "L1D_CACHE_REFILL_OUTER_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x222,
	 .desc = "Attributable Level 1 data cache refill, outer, valid capability"
	},
	{.name = "L1D_CACHE_WB_VICTIM_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x223,
	 .desc = "Attributable Level 1 data cache Write-Back, victim, valid capability"
	},
	{.name = "L1D_CACHE_WB_CLEAN_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x224,
	 .desc = "Attributable Level 1 data cache Write-Back, cleaning, and coherency, valid capability"
	},
	{.name = "L2D_CACHE_RD_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x226,
	 .desc = "Attributable Level 2 data cache access, read, valid capability"
	},
	{.name = "L2D_CACHE_WR_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x227,
	 .desc = "Attributable Level 2 data cache access, write, valid capability"
	},
	{.name = "L2D_CACHE_REFILL_RD_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x228,
	 .desc = "Attributable Level 2 data cache refill, valid capability"
	},
	{.name = "L2D_CACHE_WB_VICTIM_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x22a,
	 .desc = "Attributable Level 2 data cache Write-Back, victim, valid capability"
	},
	{.name = "L2D_CACHE_WB_CLEAN_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x22b,
	 .desc = "Attributable Level 2 data cache Write-Back, cleaning and coherency, valid capability"
	},
	{.name = "L2D_CACHE_INVAL_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x22c,
	 .desc = "Attributable Level 2 data cache invalidate, valid capability"
	},
	{.name = "BUS_ACCESS_RD_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x22d,
	 .desc = "Bus access, read, valid capability"
	},
	{.name = "BUS_ACCESS_WR_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x22e,
	 .desc = "Bus access, write, valid capability"
	},
	{.name = "CNT_ST_ZERO_BYTE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x22f,
	 .desc = "Store of zeros"
	},
	{.name = "CNT_ST_ZERO_16_BYTES",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x230,
	 .desc = "Store of zeros, 16 byte stores"
	},
	{.name = "MEM_ACCESS_RD_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x233,
	 .desc = "Data memory access, read, valid capability"
	},
	{.name = "MEM_ACCESS_WR_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x234,
	 .desc = "Data memory access, write, valid capability"
	},
	{.name = "CAP_MEM_ACCESS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x235,
	 .desc = "Data memory access, read, capability"
	},
	{.name = "CAP_MEM_ACCESS_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x236,
	 .desc = "Data memory access, write, capability"
	},
	{.name = "INST_SPEC_RESTRICTED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x237,
	 .desc = "Instructions in Restricted, Operations Speculatively Executed"
	},
	{.name = "LD_CAP_PERM_CLR_CTAG",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x238,
	 .desc = "Load permission cleared, Operations Speculatively Executed"
	},
	/* END Rainier specific events */
};
