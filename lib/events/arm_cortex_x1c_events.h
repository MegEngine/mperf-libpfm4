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
 * Cortex-X1C Event Table
 */
static const arm_entry_t arm_cortex_x1c_pe[]={
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
	 .desc = "L1 instruction cache access or L0 Macro-op cache access"
	},
	{.name = "L1D_CACHE_WB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x15,
	 .desc = "L1 data cache Write-Back"
	},
	{.name = "L2D_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x16,
	 .desc = "L2 unified cache access"
	},
	{.name = "L2D_CACHE_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x17,
	 .desc = "L2 unified cache refill"
	},
	{.name = "L2D_CACHE_WB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x18,
	 .desc = "L2 unified cache write-back"
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
	{.name = "BUS_MASTER_CYCLE",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "BUS_CYCLES",
	 .code = 0x1d,
	 .desc = "Bus cycles"
	},
	{.name = "L2D_CACHE_ALLOCATE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x20,
	 .desc = "L2 unified cache allocation without refill"
	},
	{.name = "CACHE_ALLOCATE",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_CACHE_ALLOCATE",
	 .code = 0x20,
	 .desc = "L2 unified cache allocation without refill"
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
	 .desc = "L1 data TLB access"
	},
	{.name = "L1I_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x26,
	 .desc = "L1 instruction TLB access"
	},
	{.name = "L3D_CACHE_ALLOCATE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x29,
	 .desc = "Attributable L3 unified cache allocation without refill"
	},
	{.name = "L3D_CACHE_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x2a,
	 .desc = "Attributable L3 unified cache refill"
	},
	{.name = "L3D_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x2b,
	 .desc = "Attributable L3 unified cache access"
	},
	{.name = "L2D_TLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x2d,
	 .desc = "Attributable L2 unified TLB refill"
	},
	{.name = "L2TLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_TLB_REFILL",
	 .code = 0x2d,
	 .desc = "Attributable L2 unified TLB refill"
	},
	{.name = "L2D_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x2f,
	 .desc = "Attributable L2 unified TLB access"
	},
	{.name = "L2TLB_REQ",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_TLB",
	 .code = 0x2f,
	 .desc = "Attributable L2 unified TLB access"
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
	{.name = "DTLB_WLK",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "DTLB_WALK",
	 .code = 0x34,
	 .desc = "Access to data TLB that caused a page table walk"
	},
	{.name = "ITLB_WALK",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x35,
	 .desc = "Access to instruction TLB that caused a page table walk"
	},
	{.name = "ITLB_WLK",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "ITLB_WALK",
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
	{.name = "L1D_CACHE_LMISS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x39,
	 .desc = "L1 data cache long-latency miss"
	},
	{.name = "OP_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x3a,
	 .desc = "Micro-operation architecturally executed"
	},
	{.name = "OP_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x3b,
	 .desc = "Micro-operation speculatively executed"
	},
	{.name = "STALL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x3c,
	 .desc = "No operation sent for execution"
	},
	{.name = "STALL_SLOT_BACKEND",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x3d,
	 .desc = "No operation sent for execution on a slot due to the backend"
	},
	{.name = "STALL_SLOT_FRONTEND",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x3e,
	 .desc = "No operation sent for execution on a slot due to the frontend"
	},
	{.name = "STALL_SLOT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x3f,
	 .desc = "No operation sent for execution on a slot"
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
	 .desc = "L2 unified cache access, read"
	},
	{.name = "CACHE_ACCESS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_CACHE_RD",
	 .code = 0x50,
	 .desc = "L2 unified cache access, read"
	},
	{.name = "L2D_CACHE_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x51,
	 .desc = "L2 unified cache access, write"
	},
	{.name = "CACHE_ACCESS_WR",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_CACHE_WR",
	 .code = 0x51,
	 .desc = "L2 unified cache access, write"
	},
	{.name = "L2D_CACHE_REFILL_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x52,
	 .desc = "L2 unified cache refill, read"
	},
	{.name = "CACHE_RD_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_CACHE_REFILL_RD",
	 .code = 0x52,
	 .desc = "L2 unified cache refill, read"
	},
	{.name = "L2D_CACHE_REFILL_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x53,
	 .desc = "L2 unified cache refill, write"
	},
	{.name = "CACHE_WR_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_CACHE_REFILL_WR",
	 .code = 0x53,
	 .desc = "L2 unified cache refill, write"
	},
	{.name = "L2D_CACHE_WB_VICTIM",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x56,
	 .desc = "L2 unified cache write-back, victim"
	},
	{.name = "CACHE_WRITEBACK_VICTIM",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_CACHE_WB_VICTIM",
	 .code = 0x56,
	 .desc = "L2 unified cache write-back, victim"
	},
	{.name = "L2D_CACHE_WB_CLEAN",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x57,
	 .desc = "L2 unified cache write-back, cleaning and coherency"
	},
	{.name = "CACHE_WRITEBACK_CLEAN_COH",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_CACHE_WB_CLEAN",
	 .code = 0x57,
	 .desc = "L2 unified cache write-back, cleaning and coherency"
	},
	{.name = "L2D_CACHE_INVAL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x58,
	 .desc = "L2 unified cache invalidate"
	},
	{.name = "L2CACHE_INV",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_CACHE_INVAL",
	 .code = 0x58,
	 .desc = "L2 unified cache invalidate"
	},
	{.name = "L2D_TLB_REFILL_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x5c,
	 .desc = "L2 unified TLB refill, read"
	},
	{.name = "L2TLB_RD_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_TLB_REFILL_RD",
	 .code = 0x5c,
	 .desc = "L2 unified TLB refill, read"
	},
	{.name = "L2D_TLB_REFILL_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x5d,
	 .desc = "L2 unified TLB refill, write"
	},
	{.name = "L2TLB_WR_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_TLB_REFILL_WR",
	 .code = 0x5d,
	 .desc = "L2 unified TLB refill, write"
	},
	{.name = "L2D_TLB_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x5e,
	 .desc = "L2 unified TLB access, read"
	},
	{.name = "L2TLB_RD_REQ",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_TLB_RD",
	 .code = 0x5e,
	 .desc = "L2 unified TLB access, read"
	},
	{.name = "L2D_TLB_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x5f,
	 .desc = "L2 unified TLB access, write"
	},
	{.name = "L2TLB_WR_REQ",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "L2D_TLB_WR",
	 .code = 0x5f,
	 .desc = "L2 unified TLB access, write"
	},
	{.name = "BUS_ACCESS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x60,
	 .desc = "Bus access read"
	},
	{.name = "BUS_ACCESS_REQ",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "BUS_ACCESS_RD",
	 .code = 0x60,
	 .desc = "Bus access read"
	},
	{.name = "BUS_ACCESS_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x61,
	 .desc = "Bus access write"
	},
	{.name = "BUS_ACCESS_RETRY",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "BUS_ACCESS_WR",
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
	 .desc = "Release consistency operation speculatively executed, loadacquire"
	},
	{.name = "RC_ST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x91,
	 .desc = "Release consistency operation speculatively executed, storerelease"
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
	{.name = "CNT_CYCLES",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x4004,
	 .desc = "Constant frequency cycles"
	},
	{.name = "STALL_BACKEND_MEM",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x4005,
	 .desc = "No operation sent due to the backend and memory stalls"
	},
	{.name = "L1I_CACHE_LMISS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x4006,
	 .desc = "L1 instruction cache long latency miss"
	},
	{.name = "L2D_CACHE_LMISS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x4009,
	 .desc = "L2 unified cache long latency miss"
	},
	{.name = "L3D_CACHE_LMISS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x400b,
	 .desc = "L3 unified cache long latency miss"
	},
	/* END Cortex-X1C specific events */
};
