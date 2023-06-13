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
 * Cortex-X3 Event Table
 */
static const arm_entry_t arm_cortex_x3_pe[]={
	{.name = "SW_INCR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x00,
	 .desc = "Software increment This event counts any instruction architecturally executed (condition code check pass)"
	},
	{.name = "L1I_CACHE_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x01,
	 .desc = "L1 instruction cache refill This event counts any instruction fetch which misses in the cache"
	},
	{.name = "L1I_TLB_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x02,
	 .desc = "L1 instruction TLB refill This event counts any refill of the L1 instruction TLB from the MMU Translation Cache (MMUTC)"
	},
	{.name = "L1D_CACHE_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x03,
	 .desc = "L1 data cache refill This event counts any load or store operation or translation table walk access which causes data to be read from outside the L1, including accesses which do not allocate into L1"
	},
	{.name = "L1D_CACHE",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x04,
	 .desc = "L1 data cache access This event counts any load or store operation or translation table walk access which looks up in the L1 data cache"
	},
	{.name = "L1D_TLB_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x05,
	 .desc = "L1 data TLB refill This event counts any refill of the data L1 TLB from the MMUTC"
	},
	{.name = "INST_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x08,
	 .desc = "Instruction architecturally executed"
	},
	{.name = "EXC_TAKEN",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x09,
	 .desc = "Exception taken"
	},
	{.name = "EXC_RETURN",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x0a,
	 .desc = "Instruction architecturally executed, condition code check pass, exception return"
	},
	{.name = "CID_WRITE_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x0b,
	 .desc = "Instruction architecturally executed, condition code check pass, write to CONTEXTIDR This event only counts writes to CONTEXTIDR_EL1"
	},
	{.name = "BR_MIS_PRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x10,
	 .desc = "Mispredicted or not predicted branch speculatively executed This event counts any predictable branch instruction which is mispredicted either because of dynamic misprediction or because the MMU is off and the branches are statically predicted not taken"
	},
	{.name = "CPU_CYCLES",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x11,
	 .desc = "Cycle"
	},
	{.name = "BR_PRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x12,
	 .desc = "Predictable branch speculatively executed"
	},
	{.name = "MEM_ACCESS",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x13,
	 .desc = "Data memory access"
	},
	{.name = "L1I_CACHE",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x14,
	 .desc = "L1 instruction cache access or Macro-op (MOP) cache access"
	},
	{.name = "L1D_CACHE_WB",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x15,
	 .desc = "L1 data cache Write-Back This event counts any write-back of data from the L1 data cache to L2 or L3"
	},
	{.name = "L2D_CACHE",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x16,
	 .desc = "L2 cache access This event counts any transaction from L1 which looks up in the L2 cache, and any writeback from the L1 to the L2"
	},
	{.name = "L2D_CACHE_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x17,
	 .desc = "L2 cache refill This event counts any cacheable transaction from L1 which causes data to be read from outside the core"
	},
	{.name = "L2D_CACHE_WB",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x18,
	 .desc = "L2 cache write-back This event counts any write-back of data from the L2 cache to outside the core"
	},
	{.name = "BUS_ACCESS",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x19,
	 .desc = "Bus access This event counts for every beat of data transferred over the data channels between the core and the Snoop Control Unit (SCU)"
	},
	{.name = "MEMORY_ERROR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x1a,
	 .desc = "Local memory error This event counts any correctable or uncorrectable memory error (ECC or parity) in the protected core RAMs"
	},
	{.name = "INST_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x1b,
	 .desc = "Operation speculatively executed"
	},
	{.name = "TTBR_WRITE_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x1c,
	 .desc = "Instruction architecturally executed, condition code check pass, write to TTBR This event only counts writes to TTBR0_EL1/TTBR1_EL1"
	},
	{.name = "BUS_CYCLES",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x1d,
	 .desc = "Bus cycles This event duplicates CPU_CYCLES"
	},
	{.name = "BUS_MASTER_CYCLE",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "BUS_CYCLES",
	 .code = 0x1d,
	 .desc = "Bus cycles This event duplicates CPU_CYCLES"
	},
	{.name = "L2D_CACHE_ALLOCATE",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x20,
	 .desc = "L2 data cache allocation without refill"
	},
	{.name = "CACHE_ALLOCATE",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "L2D_CACHE_ALLOCATE",
	 .code = 0x20,
	 .desc = "L2 data cache allocation without refill"
	},
	{.name = "BR_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x21,
	 .desc = "Instruction architecturally executed, branch This event counts all branches, taken or not"
	},
	{.name = "BR_MIS_PRED_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x22,
	 .desc = "Instruction architecturally executed, mispredicted branch This event counts any branch counted by BR_RETIRED which is not correctly predicted and causes a pipeline flush"
	},
	{.name = "STALL_FRONTEND",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x23,
	 .desc = "No operation issued because of the frontend The counter counts on any cycle when there are no fetched instructions available to dispatch"
	},
	{.name = "STALL_BACKEND",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x24,
	 .desc = "No operation issued because of the backend The counter counts on any cycle fetched instructions are not dispatched due to resource constraints"
	},
	{.name = "L1D_TLB",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x25,
	 .desc = "Level 1 data TLB access This event counts any load or store operation which accesses the data L1 TLB"
	},
	{.name = "L1I_TLB",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x26,
	 .desc = "Level 1 instruction TLB access This event counts any instruction fetch which accesses the instruction L1 TLB"
	},
	{.name = "L3D_CACHE_ALLOCATE",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x29,
	 .desc = "Attributable L3 cache allocation without refill This event counts any full cache line write into the L3 cache which does not cause a linefill, including write-backs from L2 to L3 and full-line writes which do not allocate into L2"
	},
	{.name = "L3D_CACHE_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x2a,
	 .desc = "Attributable L3 cache refill This event counts for any cacheable read transaction returning data from the SCU for which the data source was outside the cluster"
	},
	{.name = "L3D_CACHE",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x2b,
	 .desc = "Attributable L3 cache access This event counts for any cacheable read transaction returning data from the SCU, or for any cacheable write to the SCU"
	},
	{.name = "L2D_TLB_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x2d,
	 .desc = "Attributable L2 TLB refill This event counts on any refill of the MMUTC, caused by either an instruction or data access"
	},
	{.name = "L2TLB_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "L2D_TLB_REFILL",
	 .code = 0x2d,
	 .desc = "Attributable L2 TLB refill This event counts on any refill of the MMUTC, caused by either an instruction or data access"
	},
	{.name = "L2D_TLB",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x2f,
	 .desc = "Attributable L2 TLB access This event counts on any access to the MMUTC (caused by a refill of any of the L1 TLBs)"
	},
	{.name = "L2TLB_REQ",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "L2D_TLB",
	 .code = 0x2f,
	 .desc = "Attributable L2 TLB access This event counts on any access to the MMUTC (caused by a refill of any of the L1 TLBs)"
	},
	{.name = "REMOTE_ACCESS",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x31,
	 .desc = "Access to another socket in a multi-socket system"
	},
	{.name = "DTLB_WALK",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x34,
	 .desc = "Access to data TLB that caused a page table walk This event counts on any data access which causes L2D_TLB_REFILL to count"
	},
	{.name = "DTLB_WLK",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "DTLB_WALK",
	 .code = 0x34,
	 .desc = "Access to data TLB that caused a page table walk This event counts on any data access which causes L2D_TLB_REFILL to count"
	},
	{.name = "ITLB_WALK",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x35,
	 .desc = "Access to instruction TLB that caused a translation table walk"
	},
	{.name = "ITLB_WLK",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "ITLB_WALK",
	 .code = 0x35,
	 .desc = "Access to instruction TLB that caused a translation table walk"
	},
	{.name = "LL_CACHE_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x36,
	 .desc = "Last level cache access, read If CPUECTLR"
	},
	{.name = "LL_CACHE_MISS_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x37,
	 .desc = "Last level cache miss, read If CPUECTLR"
	},
	{.name = "L1D_CACHE_LMISS_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x39,
	 .desc = "Level 1 data cache long-latency miss"
	},
	{.name = "OP_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x3a,
	 .desc = "Micro-operation architecturally executed"
	},
	{.name = "OP_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x3b,
	 .desc = "Micro-operation speculatively executed"
	},
	{.name = "STALL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x3c,
	 .desc = "No operation sent for execution"
	},
	{.name = "STALL_SLOT_BACKEND",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x3d,
	 .desc = "No operation sent for execution on a slot due to the backend"
	},
	{.name = "STALL_SLOT_FRONTEND",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x3e,
	 .desc = "No operation sent for execution on a slot due to the frontend"
	},
	{.name = "STALL_SLOT",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x3f,
	 .desc = "No operation sent for execution on a slot"
	},
	{.name = "L1D_CACHE_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x40,
	 .desc = "L1 data cache access, read This event counts any load operation or page table walk access which looks up in the L1 data cache"
	},
	{.name = "L1D_CACHE_WR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x41,
	 .desc = "L1 data cache access, write This event counts any store operation which looks up in the L1 data cache"
	},
	{.name = "L1D_CACHE_REFILL_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x42,
	 .desc = "L1 data cache refill, read This event counts any load operation or page table walk access which causes data to be read from outside the L1, including accesses which do not allocate into L1"
	},
	{.name = "L1D_CACHE_REFILL_WR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x43,
	 .desc = "L1 data cache refill, write This event counts any store operation which causes data to be read from outside the L1, including accesses which do not allocate into L1"
	},
	{.name = "L1D_CACHE_REFILL_INNER",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x44,
	 .desc = "L1 data cache refill, inner This event counts any L1 data cache linefill (as counted by L1D_CACHE_REFILL) which hits in the L2 cache, system L3 cache, or another core in the cluster"
	},
	{.name = "L1D_CACHE_REFILL_OUTER",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x45,
	 .desc = "L1 data cache refill, outer This event counts any L1 data cache linefill (as counted by L1D_CACHE_REFILL) which does not hit in the L2 cache, system L3 cache, or another core in the cluster, and instead obtains data from outside the cluster"
	},
	{.name = "L1D_CACHE_WB_VICTIM",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x46,
	 .desc = "L1 data cache write-back, victim"
	},
	{.name = "L1D_CACHE_WB_CLEAN",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x47,
	 .desc = "L1 data cache write-back cleaning and coherency"
	},
	{.name = "L1D_CACHE_INVAL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x48,
	 .desc = "L1 data cache invalidate"
	},
	{.name = "L1D_TLB_REFILL_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4c,
	 .desc = "L1 data TLB refill, read"
	},
	{.name = "L1D_TLB_REFILL_WR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4d,
	 .desc = "L1 data TLB refill, write"
	},
	{.name = "L1D_TLB_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4e,
	 .desc = "L1 data TLB access, read"
	},
	{.name = "L1D_TLB_WR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4f,
	 .desc = "L1 data TLB access, write"
	},
	{.name = "L2D_CACHE_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x50,
	 .desc = "L2 cache access, read This event counts any read transaction from L1 which looks up in the L2 cache"
	},
	{.name = "CACHE_ACCESS_RD",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "L2D_CACHE_RD",
	 .code = 0x50,
	 .desc = "L2 cache access, read This event counts any read transaction from L1 which looks up in the L2 cache"
	},
	{.name = "L2D_CACHE_WR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x51,
	 .desc = "L2 cache access, write This event counts any write transaction from L1 which looks up in the L2 cache or any write-back from L1 which allocates into the L2 cache"
	},
	{.name = "CACHE_ACCESS_WR",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "L2D_CACHE_WR",
	 .code = 0x51,
	 .desc = "L2 cache access, write This event counts any write transaction from L1 which looks up in the L2 cache or any write-back from L1 which allocates into the L2 cache"
	},
	{.name = "L2D_CACHE_REFILL_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x52,
	 .desc = "L2 cache refill, read This event counts any cacheable read transaction from L1 which causes data to be read from outside the core"
	},
	{.name = "CACHE_RD_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "L2D_CACHE_REFILL_RD",
	 .code = 0x52,
	 .desc = "L2 cache refill, read This event counts any cacheable read transaction from L1 which causes data to be read from outside the core"
	},
	{.name = "L2D_CACHE_REFILL_WR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x53,
	 .desc = "L2 cache refill, write This event counts any write transaction from L1 which causes data to be read from outside the core"
	},
	{.name = "CACHE_WR_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "L2D_CACHE_REFILL_WR",
	 .code = 0x53,
	 .desc = "L2 cache refill, write This event counts any write transaction from L1 which causes data to be read from outside the core"
	},
	{.name = "L2D_CACHE_WB_VICTIM",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x56,
	 .desc = "L2 cache write-back, victim"
	},
	{.name = "CACHE_WRITEBACK_VICTIM",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "L2D_CACHE_WB_VICTIM",
	 .code = 0x56,
	 .desc = "L2 cache write-back, victim"
	},
	{.name = "L2D_CACHE_WB_CLEAN",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x57,
	 .desc = "L2 cache write-back, cleaning and coherency"
	},
	{.name = "CACHE_WRITEBACK_CLEAN_COH",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "L2D_CACHE_WB_CLEAN",
	 .code = 0x57,
	 .desc = "L2 cache write-back, cleaning and coherency"
	},
	{.name = "L2D_CACHE_INVAL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x58,
	 .desc = "L2 cache invalidate"
	},
	{.name = "L2CACHE_INV",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "L2D_CACHE_INVAL",
	 .code = 0x58,
	 .desc = "L2 cache invalidate"
	},
	{.name = "L2D_TLB_REFILL_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x5c,
	 .desc = "L2 TLB refill, read"
	},
	{.name = "L2TLB_RD_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "L2D_TLB_REFILL_RD",
	 .code = 0x5c,
	 .desc = "L2 TLB refill, read"
	},
	{.name = "L2D_TLB_REFILL_WR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x5d,
	 .desc = "L2 TLB refill, write"
	},
	{.name = "L2TLB_WR_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "L2D_TLB_REFILL_WR",
	 .code = 0x5d,
	 .desc = "L2 TLB refill, write"
	},
	{.name = "L2D_TLB_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x5e,
	 .desc = "L2 TLB access, read"
	},
	{.name = "L2TLB_RD_REQ",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "L2D_TLB_RD",
	 .code = 0x5e,
	 .desc = "L2 TLB access, read"
	},
	{.name = "L2D_TLB_WR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x5f,
	 .desc = "L2 TLB access, write"
	},
	{.name = "L2TLB_WR_REQ",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "L2D_TLB_WR",
	 .code = 0x5f,
	 .desc = "L2 TLB access, write"
	},
	{.name = "BUS_ACCESS_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x60,
	 .desc = "Bus access read This event counts for every beat of data transferred over the read data channel between the core and the SCU"
	},
	{.name = "BUS_ACCESS_WR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x61,
	 .desc = "Bus access write This event counts for every beat of data transferred over the write data channel between the core and the SCU"
	},
	{.name = "MEM_ACCESS_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x66,
	 .desc = "Data memory access, read This event counts memory accesses due to load instructions"
	},
	{.name = "MEM_ACCESS_WR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x67,
	 .desc = "Data memory access, write This event counts memory accesses due to store instructions"
	},
	{.name = "UNALIGNED_LD_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x68,
	 .desc = "Unaligned access, read"
	},
	{.name = "UNALIGNED_ST_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x69,
	 .desc = "Unaligned access, write"
	},
	{.name = "UNALIGNED_LDST_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x6a,
	 .desc = "Unaligned access"
	},
	{.name = "LDREX_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x6c,
	 .desc = "Exclusive operation speculatively executed, LDREX or LDX"
	},
	{.name = "STREX_PASS_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x6d,
	 .desc = "Exclusive operation speculatively executed, STREX or STX pass"
	},
	{.name = "STREX_FAIL_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x6e,
	 .desc = "Exclusive operation speculatively executed, STREX or STX fail"
	},
	{.name = "STREX_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x6f,
	 .desc = "Exclusive operation speculatively executed, STREX or STX"
	},
	{.name = "LD_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x70,
	 .desc = "Operation speculatively executed, load"
	},
	{.name = "ST_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x71,
	 .desc = "Operation speculatively executed, store"
	},
	{.name = "DP_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x73,
	 .desc = "Operation speculatively executed, integer data-processing"
	},
	{.name = "ASE_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x74,
	 .desc = "Operation speculatively executed, Advanced SIMD instruction"
	},
	{.name = "VFP_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x75,
	 .desc = "Operation speculatively executed, floating-point instruction"
	},
	{.name = "PC_WRITE_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x76,
	 .desc = "Operation speculatively executed, software change of the PC"
	},
	{.name = "CRYPTO_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x77,
	 .desc = "Operation speculatively executed, Cryptographic instruction"
	},
	{.name = "BR_IMMED_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x78,
	 .desc = "Branch speculatively executed, immediate branch"
	},
	{.name = "BR_RETURN_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x79,
	 .desc = "Branch speculatively executed, procedure return"
	},
	{.name = "BR_INDIRECT_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x7a,
	 .desc = "Branch speculatively executed, indirect branch"
	},
	{.name = "ISB_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x7c,
	 .desc = "Barrier speculatively executed, ISB"
	},
	{.name = "DSB_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x7d,
	 .desc = "Barrier speculatively executed, DSB"
	},
	{.name = "DMB_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x7e,
	 .desc = "Barrier speculatively executed, DMB"
	},
	{.name = "EXC_UNDEF",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x81,
	 .desc = "Counts the number of undefined exceptions taken locally"
	},
	{.name = "EXC_SVC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x82,
	 .desc = "Exception taken locally, Supervisor Call"
	},
	{.name = "EXC_PABORT",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x83,
	 .desc = "Exception taken locally, Instruction Abort"
	},
	{.name = "EXC_DABORT",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x84,
	 .desc = "Exception taken locally, Data Abort and SError"
	},
	{.name = "EXC_IRQ",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x86,
	 .desc = "Exception taken locally, IRQ"
	},
	{.name = "EXC_FIQ",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x87,
	 .desc = "Exception taken locally, FIQ"
	},
	{.name = "EXC_SMC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x88,
	 .desc = "Exception taken locally, Secure Monitor Call"
	},
	{.name = "EXC_HVC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8a,
	 .desc = "Exception taken locally, Hypervisor Call"
	},
	{.name = "EXC_TRAP_PABORT",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8b,
	 .desc = "Exception taken, Instruction Abort not taken locally"
	},
	{.name = "EXC_TRAP_DABORT",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8c,
	 .desc = "Exception taken, Data Abort or SError not taken locally number"
	},
	{.name = "EXC_TRAP_OTHER",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8d,
	 .desc = "Exception taken, Other traps not taken locally"
	},
	{.name = "EXC_TRAP_IRQ",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8e,
	 .desc = "Exception taken, IRQ not taken locally"
	},
	{.name = "EXC_TRAP_FIQ",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8f,
	 .desc = "Exception taken, FIQ not taken locally"
	},
	{.name = "RC_LD_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x90,
	 .desc = "Release consistency operation speculatively executed, load-acquire"
	},
	{.name = "RC_ST_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x91,
	 .desc = "Release consistency operation speculatively executed, store-release"
	},
	{.name = "L3D_CACHE_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0xa0,
	 .desc = "L3 cache read"
	},
	{.name = "L3_CACHE_RD",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "L3D_CACHE_RD",
	 .code = 0xa0,
	 .desc = "L3 cache read"
	},
	{.name = "SAMPLE_POP",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4000,
	 .desc = "Sample Population"
	},
	{.name = "SAMPLE_FEED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4001,
	 .desc = "Sample Taken"
	},
	{.name = "SAMPLE_FILTRATE",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4002,
	 .desc = "Sample Taken and not removed by filtering"
	},
	{.name = "SAMPLE_COLLISION",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4003,
	 .desc = "Sample collided with previous sample"
	},
	{.name = "CNT_CYCLES",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4004,
	 .desc = "Constant frequency cycles"
	},
	{.name = "STALL_BACKEND_MEM",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4005,
	 .desc = "No operation sent due to the backend and memory stalls"
	},
	{.name = "L1I_CACHE_LMISS",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4006,
	 .desc = "L1 instruction cache long latency miss"
	},
	{.name = "L2D_CACHE_LMISS_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4009,
	 .desc = "L2 cache long latency miss"
	},
	{.name = "L3D_CACHE_LMISS_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x400b,
	 .desc = "L3 cache long latency miss"
	},
	{.name = "TRB_WRAP",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x400c,
	 .desc = "Trace buffer current write pointer wrapped"
	},
	{.name = "TRCEXTOUT0",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4010,
	 .desc = "PE Trace Unit external output 0 This event is not exported to the trace unit"
	},
	{.name = "TRCEXTOUT1",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4011,
	 .desc = "PE Trace Unit external output 1 This event is not exported to the trace unit"
	},
	{.name = "TRCEXTOUT2",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4012,
	 .desc = "PE Trace Unit external output 2 This event is not exported to the trace unit"
	},
	{.name = "TRCEXTOUT3",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4013,
	 .desc = "PE Trace Unit external output 3 This event is not exported to the trace unit"
	},
	{.name = "CTI_TRIGOUT4",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4018,
	 .desc = "Cross-trigger Interface output trigger 4"
	},
	{.name = "CTI_TRIGOUT5",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4019,
	 .desc = "Cross-trigger Interface output trigger 5"
	},
	{.name = "CTI_TRIGOUT6",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x401a,
	 .desc = "Cross-trigger Interface output trigger 6"
	},
	{.name = "CTI_TRIGOUT7",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x401b,
	 .desc = "Cross-trigger Interface output trigger 7"
	},
	{.name = "LDST_ALIGN_LAT",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4020,
	 .desc = "Access with additional latency from alignment"
	},
	{.name = "LD_ALIGN_LAT",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4021,
	 .desc = "Load with additional latency from alignment"
	},
	{.name = "ST_ALIGN_LAT",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4022,
	 .desc = "Store with additional latency from alignment"
	},
	{.name = "MEM_ACCESS_CHECKED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4024,
	 .desc = "Checked data memory access"
	},
	{.name = "MEM_ACCESS_CHECKED_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4025,
	 .desc = "Checked data memory access, read"
	},
	{.name = "MEM_ACCESS_RD_CHECKED",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "MEM_ACCESS_CHECKED_RD",
	 .code = 0x4025,
	 .desc = "Checked data memory access, read"
	},
	{.name = "MEM_ACCESS_CHECKED_WR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4026,
	 .desc = "Checked data memory access, write"
	},
	{.name = "MEM_ACCESS_WR_CHECKED",
	 .modmsk = ARMV9_ATTRS,
	 .equiv = "MEM_ACCESS_CHECKED_WR",
	 .code = 0x4026,
	 .desc = "Checked data memory access, write"
	},
	{.name = "ASE_INST_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8005,
	 .desc = "Advanced SIMD operations speculatively executed"
	},
	{.name = "SVE_INST_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8006,
	 .desc = "SVE operations speculatively executed"
	},
	{.name = "FP_HP_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8014,
	 .desc = "Half-precision floating-point operation speculatively executed"
	},
	{.name = "FP_SP_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8018,
	 .desc = "Single-precision floating-point operation speculatively executed"
	},
	{.name = "FP_DP_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x801c,
	 .desc = "Double-precision floating-point operation speculatively executed"
	},
	{.name = "SVE_PRED_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8074,
	 .desc = "SVE predicated operations speculatively executed"
	},
	{.name = "SVE_PRED_EMPTY_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8075,
	 .desc = "SVE predicated operations with no active predicates speculatively executed"
	},
	{.name = "SVE_PRED_FULL_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8076,
	 .desc = "SVE predicated operations speculatively executed with all active predicates"
	},
	{.name = "SVE_PRED_PARTIAL_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8077,
	 .desc = "SVE predicated operations speculatively executed with partially active predicates"
	},
	{.name = "SVE_PRED_NOT_FULL_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8079,
	 .desc = "SVE predicated operations speculatively executed with a Governing predicate in which at least one element is FALSE number"
	},
	{.name = "SVE_LDFF_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x80bc,
	 .desc = "SVE First-fault load operations speculatively executed"
	},
	{.name = "SVE_LDFF_FAULT_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x80bd,
	 .desc = "SVE First-fault load operations speculatively executed which set FFR bit to 0"
	},
	{.name = "FP_SCALE_OPS_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x80c0,
	 .desc = "Scalable floating-point element operations speculatively executed"
	},
	{.name = "FP_FIXED_OPS_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x80c1,
	 .desc = "Non-scalable floating-point element operations speculatively executed"
	},
	{.name = "ASE_SVE_INT8_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x80e3,
	 .desc = "Operation counted by ASE_SVE_INT_SPEC where the largest type is 8-bit integer"
	},
	{.name = "ASE_SVE_INT16_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x80e7,
	 .desc = "Operation counted by ASE_SVE_INT_SPEC where the largest type is 16-bit integer"
	},
	{.name = "ASE_SVE_INT32_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x80eb,
	 .desc = "Operation counted by ASE_SVE_INT_SPEC where the largest type is 32-bit integer"
	},
	{.name = "ASE_SVE_INT64_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x80ef,
	 .desc = "Operation counted by ASE_SVE_INT_SPEC where the largest type is 64-bit integer"
	},
	/* END Cortex-X3 specific events */
};
