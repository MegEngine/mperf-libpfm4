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
 * Cortex-R82 Event Table
 */
static const arm_entry_t arm_cortex_r82_pe[]={
	{.name = "SW_INCR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x00,
	 .desc = "Instruction architecturally executed, condition code check pass, software increment"
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
	 .desc = "Instruction architecturally executed, condition code check pass, write to CONTEXTIDR_EL1"
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
	 .desc = "Clock cycle"
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
	{.name = "L1D_CACHE_WB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x15,
	 .desc = "L1 data cache write-back"
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
	 .desc = "Instruction architecturally executed, condition code check pass, write to TTBRx_EL1"
	},
	{.name = "BUS_CYCLES",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1d,
	 .desc = "Bus cycles"
	},
	{.name = "L1D_CACHE_ALLOCATE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1f,
	 .desc = "L1 data cache allocation without refill"
	},
	{.name = "L2D_CACHE_ALLOCATE",
	 .modmsk = ARMV8_ATTRS,
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
	 .desc = "No operation issued due to the frontend"
	},
	{.name = "STALL_BACKEND",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x24,
	 .desc = "No operation issued due to backend"
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
	{.name = "L2D_TLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x2d,
	 .desc = "Attributable L2 unified TLB refill"
	},
	{.name = "L2D_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x2f,
	 .desc = "Attributable L2 unified TLB access"
	},
	{.name = "LL_CACHE_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x36,
	 .desc = "Last Level cache access, read, main master address"
	},
	{.name = "LL_CACHE_MISS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x37,
	 .desc = "Last Level cache miss, read, main master address"
	},
	{.name = "REMOTE_ACCESS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x38,
	 .desc = "Access to another socket in a multi-socket system, read"
	},
	{.name = "L1D_CACHE_LMISS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x39,
	 .desc = "The counter counts each access counted by L1D_CACHE that incurs additional latency because it returns data from outside the L1 data cache"
	},
	{.name = "OP_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x3a,
	 .desc = "The counter counts each operation counted by OP_SPEC that would be executed in a simple sequential execution of the program"
	},
	{.name = "OP_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x3b,
	 .desc = "The counter counts the number of operations executed by the PE, including those that are executed speculatively and would not be executed in a simple sequential execution of the program"
	},
	{.name = "STALL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x3c,
	 .desc = "The counter counts every Attributable cycle on which no Attributable instruction or operation was sent for execution on this PE"
	},
	{.name = "STALL_SLOT_BACKEND",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x3d,
	 .desc = "Counts each slot counted by STALL_SLOT where no attributable instruction or operation was sent for execution because the backend is unable to accept one of: the instruction operation available for the PE on the slot or any operations on the slot"
	},
	{.name = "STALL_SLOT_FRONTEND",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x3e,
	 .desc = "Counts each slot counted by STALL_SLOT where no attributable instruction or operation was sent for execution because there was no attributable instruction or operation available to issue from the PE from the frontend for the slot"
	},
	{.name = "STALL_SLOT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x3f,
	 .desc = "The counter counts on each attributable cycle the number of instruction or operation slots that were not occupied by an instruction or operation attributable to the PE"
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
	 .desc = "L1 data cache refill, inner main master address"
	},
	{.name = "L1D_CACHE_REFILL_OUTER",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x45,
	 .desc = "L1 data cache refill, outer main master address"
	},
	{.name = "L2D_CACHE_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x50,
	 .desc = "L2 cache access, read, main master address"
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
	 .desc = "Operation speculatively executed, floatingpoint instruction"
	},
	{.name = "PC_WRITE_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x76,
	 .desc = "Operation speculatively executed, software change of the PC"
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
	{.name = "L2D_CACHE_REFILL_PREFETCH",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc1,
	 .desc = "A stash request to prefetch a line into the L2 cache initiated from the core"
	},
	{.name = "L1D_CACHE_REFILL_PREFETCH",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc2,
	 .desc = "L1 data cache refill due to prefetch"
	},
	{.name = "L2D_WS_MODE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc3,
	 .desc = "L2 cache write streaming mode"
	},
	{.name = "L1D_WS_MODE_ENTRY",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc4,
	 .desc = "L1 data cache entering write streaming mode"
	},
	{.name = "L1D_WS_MODE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc5,
	 .desc = "L1 data cache write streaming mode"
	},
	{.name = "BR_COND_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc9,
	 .desc = "Predicted conditional branch executed"
	},
	{.name = "BR_INDIRECT_MIS_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xca,
	 .desc = "Indirect branch mis-predicted"
	},
	{.name = "BR_INDIRECT_ADDR_MIS_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xcb,
	 .desc = "Indirect branch mis-predicted due to address mis-compare"
	},
	{.name = "BR_COND_MIS_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xcc,
	 .desc = "Conditional branch mis-predicted"
	},
	{.name = "BR_INDIRECT_ADDR_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xcd,
	 .desc = "Indirect branch with predicted address executed"
	},
	{.name = "BR_RETURN_ADDR_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xce,
	 .desc = "Procedure return with predicted address executed"
	},
	{.name = "BR_RETURN_ADDR_MIS_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xcf,
	 .desc = "Procedure return mis-predicted due to address mis-compare"
	},
	{.name = "L2D_LLWALK_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd0,
	 .desc = "L2 TLB last-level walk cache access"
	},
	{.name = "L2D_LLWALK_TLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd1,
	 .desc = "L2 TLB last-level walk cache refill"
	},
	{.name = "L2D_L2WALK_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd2,
	 .desc = "L2 TLB level-2 walk cache access"
	},
	{.name = "L2D_L2WALK_TLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd3,
	 .desc = "L2 TLB level-2 walk cache refill"
	},
	{.name = "STALL_FRONTEND_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe1,
	 .desc = "No operation issued due to the frontend, cache miss"
	},
	{.name = "STALL_FRONTEND_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe2,
	 .desc = "No operation issued due to the frontend, TLB miss"
	},
	{.name = "STALL_BACKEND_ILOCK",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe4,
	 .desc = "No operation issued due to the backend, interlock"
	},
	{.name = "STALL_BACKEND_ILOCK_AGU",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe5,
	 .desc = "No operation issued due to the backend, interlock, AGU"
	},
	{.name = "STALL_BACKEND_ILOCK_FPU",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe6,
	 .desc = "No operation issued due to the backend, interlock, FPU"
	},
	{.name = "STALL_BACKEND_LD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe7,
	 .desc = "No operation issued due to the backend, load"
	},
	{.name = "STALL_BACKEND_ST",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe8,
	 .desc = "No operation issued due to the backend, store"
	},
	{.name = "STALL_BACKEND_LD_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe9,
	 .desc = "No operation issued due to the backend, load, cache miss"
	},
	{.name = "STALL_BACKEND_LD_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xea,
	 .desc = "No operation issued due to the backend, load, TLB miss"
	},
	{.name = "STALL_BACKEND_ST_STB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xeb,
	 .desc = "No operation issued due to the backend, store, STB full"
	},
	{.name = "STALL_BACKEND_ST_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xec,
	 .desc = "No operation issued due to the backend, store, TLB miss"
	},
	{.name = "STALL_BACKEND_LD_RAW",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xed,
	 .desc = "No operation issued due to the backend, load, stalled due to a read-after-write hazard"
	},
	{.name = "BR_NANO_IMM_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x300,
	 .desc = "Fetch pipeline accessed nano predictors for an immediate branch"
	},
	{.name = "BR_NANO_IMM_HIT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x301,
	 .desc = "An immediate branch hit in the nano predictors in the fetch pipeline"
	},
	{.name = "BR_NANO_IMM_MIS_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x302,
	 .desc = "An immediate branch mis-predicted in the nano predictors in the fetch pipeline"
	},
	{.name = "BR_NANO_COND_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x304,
	 .desc = "Fetch pipeline accessed nano predictors for a conditional branch"
	},
	{.name = "BR_NANO_COND_HIT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x305,
	 .desc = "A conditional branch hit in the nano predictors in the fetch pipeline"
	},
	{.name = "BR_NANO_COND_MIS_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x306,
	 .desc = "A conditional branch mis-predicted in the nano predictors in the fetch pipeline"
	},
	{.name = "BR_NANO_INDIRECT_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x307,
	 .desc = "Fetch pipeline accessed nano predictors for an indirect branch"
	},
	{.name = "BR_NANO_INDIRECT_HIT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x308,
	 .desc = "An indirect branch hit in the nano predictors in the fetch pipeline"
	},
	{.name = "BR_NANO_INDIRECT_MIS_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x309,
	 .desc = "An indirect branch mis-predicted in the nano predictors in the fetch pipeline"
	},
	{.name = "BR_NANO_RETURN_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x30a,
	 .desc = "Fetch pipeline accessed nano predictors for a return instruction"
	},
	{.name = "BR_NANO_RETURN_HIT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x30b,
	 .desc = "A return instruction hit in the nano predictors in the fetch pipeline"
	},
	{.name = "BR_NANO_RETURN_MIS_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x30c,
	 .desc = "A return instruction mis-predicted in the nano predictors in the fetch pipeline"
	},
	{.name = "MM_L1I_PREFETCH_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x30d,
	 .desc = "This event counts accesses to L1 Icache initiated by the prefetcher to an address mapped to the main master port"
	},
	{.name = "MM_L1I_PREFETCH_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x30e,
	 .desc = "This event counts Icache refills initiated by the prefetcher to an address mapped to the main master port"
	},
	{.name = "LLRAM_L1I_PREFETCH_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x30f,
	 .desc = "This event counts accesses to L1 Icache initiated by the prefetcher to an address mapped to the LLRAM port"
	},
	{.name = "LLRAM_L1I_PREFETCH_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x310,
	 .desc = "This event counts Icache refills initiated by the prefetcher to an address mapped to the LLRAM port"
	},
	{.name = "SYS_CACHE_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x320,
	 .desc = "This event counts any cacheable read transaction which returns a data source of interconnect cache or inter-cluster peer"
	},
	{.name = "SYS_CACHE_MISS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x321,
	 .desc = "This event counts any cacheable read transaction which returns a data source of DRAM"
	},
	{.name = "LLPP_ACCESS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x322,
	 .desc = "LLPP access, read, counts for every unique read request sent to the LLPP read address channel"
	},
	{.name = "LLPP_ACCESS_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x323,
	 .desc = "LLPP access, write, counts for every unique write request sent to the LLPP write address channel"
	},
	{.name = "LLPP_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x324,
	 .desc = "Counts accesses made on the LLPP"
	},
	{.name = "MM_ACCESS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x325,
	 .desc = "Main master access, read, counts for every unique read request sent to the main master channel between the core and the L2"
	},
	{.name = "MM_ACCESS_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x326,
	 .desc = "Main master access, write, counts for every unique write request sent to the main master channel between the core and the L2"
	},
	{.name = "MM_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x327,
	 .desc = "Counts accesses made on the main master channel between the core and the L2"
	},
	{.name = "LLRAM_ACCESS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x328,
	 .desc = "LLRAM master access, read, counts for every unique read request sent to the main master channel between the core and the LLRAM coherency unit targeting the LLRAM port"
	},
	{.name = "LLRAM_ACCESS_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x329,
	 .desc = "LLRAM master access, write, counts for every unique write request sent to the main master channel between the core and the LLRAM coherency unit targeting the LLRAM port"
	},
	{.name = "LLRAM_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x32a,
	 .desc = "Counts accesses made between the core and the LLRAM coherency unit targeting the LLRAM port"
	},
	{.name = "SPP_ACCESS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x32b,
	 .desc = "SPP master access, read, counts for every unique read request sent to the master channel between the core and the LLRAM coherency unit targeting the SPP port"
	},
	{.name = "SPP_ACCESS_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x32c,
	 .desc = "SPP master access, write, counts for every unique write request sent to the master channel between the core and the LLRAM coherency unit targeting the SPP port"
	},
	{.name = "SPP_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x32d,
	 .desc = "Counts accesses made between the core and the LLRAM coherency unit targeting the SPP port"
	},
	{.name = "LLPP_CYCLES",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x32e,
	 .desc = "Low latency peripheral port bus has outstanding transactions (counted on SCLK instead of bus clock)"
	},
	{.name = "LLPP_ACTIVE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x32f,
	 .desc = "Low latency peripheral port cycles"
	},
	{.name = "TCMS_ACCESS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x330,
	 .desc = "ACELS access to TCMs, read, counts for every unique read request sent to the TCMs from the ACELS port to this core"
	},
	{.name = "TCMS_ACCESS_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x331,
	 .desc = "ACELS access to TCMs, write, counts for every unique write request sent to the TCMs from the ACELS port to this core"
	},
	{.name = "TCMS_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x332,
	 .desc = "Counts accesses made between the ACELS port and the core"
	},
	{.name = "TCMS_CONTENTION",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x333,
	 .desc = "Counts every stall cycle due to contention of accessing ITCM and DTCM via the ACELS port at the same time"
	},
	{.name = "MM_SNP_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x334,
	 .desc = "Counts every unique snoop request received by the core from the L2"
	},
	{.name = "LLRAM_SNP_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x335,
	 .desc = "Counts every unique snoop request received by the core from the LLRAM coherency unit"
	},
	{.name = "SNP_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x336,
	 .desc = "Counts every unique snoop request received by the core"
	},
	{.name = "MM_SNP_ACCESS_EVICT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x337,
	 .desc = "Counts every unique snoop request received by the core from the L2 that evicts data"
	},
	{.name = "LLRAM_SILENT_EVICT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x338,
	 .desc = "Counts every instance of overriding a valid LLRAM line in the L1D cache with another LLRAM or main master address"
	},
	{.name = "TCMS_SERIALISATION_CONTENTION",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x339,
	 .desc = "Counts every stall cycle due to contention of read and write channel requesting serialization at the same time"
	},
	{.name = "MM_L1I_CACHE_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x350,
	 .desc = "L1 instruction cache refill for an address to the main master region"
	},
	{.name = "MM_L1I_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x351,
	 .desc = "L1 instruction cache access targeting the main master port"
	},
	{.name = "MM_L1D_CACHE_REFILL_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x352,
	 .desc = "L1 data cache refill, read from the main master port"
	},
	{.name = "MM_L1D_CACHE_REFILL_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x353,
	 .desc = "L1 data cache refill, write from the main master port"
	},
	{.name = "MM_L1D_CACHE_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x354,
	 .desc = "L1 data cache refill for the main master port"
	},
	{.name = "MM_L1D_CACHE_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x355,
	 .desc = "L1 data cache access, read targeting the main master address region"
	},
	{.name = "MM_L1D_CACHE_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x356,
	 .desc = "L1 data cache access, write targeting the main master address region"
	},
	{.name = "MM_L1D_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x357,
	 .desc = "L1 data cache access targeting the main master port"
	},
	{.name = "LLRAM_L1I_CACHE_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x358,
	 .desc = "L1 instruction cache refill for an address to the LLRAM region"
	},
	{.name = "LLRAM_L1I_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x359,
	 .desc = "L1 instruction cache access targeting the main master port"
	},
	{.name = "LLRAM_L1D_CACHE_REFILL_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x360,
	 .desc = "L1 data cache refill, read from the LLRAM port"
	},
	{.name = "LLRAM_L1D_CACHE_REFILL_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x361,
	 .desc = "L1 data cache refill, write from the LLRAM port"
	},
	{.name = "LLRAM_L1D_CACHE_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x362,
	 .desc = "L1 data cache refill from the LLRAM port"
	},
	{.name = "LLRAM_L1D_CACHE_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x363,
	 .desc = "L1 data cache access, read targeting the LLRAM address region"
	},
	{.name = "LLRAM_L1D_CACHE_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x364,
	 .desc = "L1 data cache access, write targeting the LLRAM address region"
	},
	{.name = "LLRAM_L1D_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x365,
	 .desc = "L1 data cache access targeting the LLRAM address region"
	},
	{.name = "LLRAM_L1D_CACHE_REFILL_MERGED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x366,
	 .desc = "L1 data cache refill from the LLRAM port merged with a previous ongoing refill to the same cacheline address"
	},
	{.name = "LLRAM_L1D_CACHE_REFILL_FAIL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x367,
	 .desc = "L1 data cache refill from the LLRAM port failed to allocate into the cache"
	},
	{.name = "LLRAM_L1D_CACHE_REFILL_MM_EVICT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x368,
	 .desc = "L1 data cache refill from the LLRAM port first requires a main master line to be evicted from the cache"
	},
	{.name = "MM_L1D_CACHE_REFILL_MERGED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x369,
	 .desc = "L1 data cache refill from the main master port merged with a previous ongoing refill to the same cacheline address"
	},
	{.name = "TCM_ACCESS_D_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x370,
	 .desc = "I or D TCM accessed from the data side for a read operation"
	},
	{.name = "TCM_ACCESS_D_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x371,
	 .desc = "I or D TCM accessed from the data side for a write operation"
	},
	{.name = "TCM_ACCESS_I",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x372,
	 .desc = "ITCM accessed from the instruction pipe"
	},
	{.name = "ROUTER_STALL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x373,
	 .desc = "More than one router packet needs arbitrating introducing contention"
	},
	{.name = "MM_STB_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x374,
	 .desc = "Counts every time the main master STB slots are full"
	},
	{.name = "LLRAM_STB_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x375,
	 .desc = "Counts every time the LLRAM STB slots are full"
	},
	{.name = "LLPP_STB_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x376,
	 .desc = "Counts every time the LLPP STB slots are full"
	},
	{.name = "TCMS_STB_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x377,
	 .desc = "Counts every time the TC STB slots are full"
	},
	{.name = "BARRIER_STB_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x378,
	 .desc = "Counts every time the barrier STB slots are full"
	},
	{.name = "L1I_WT_HIT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x379,
	 .desc = "L1 Instruction cache way tracker hit"
	},
	{.name = "L1D_WT_HIT_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x37a,
	 .desc = "L1 Data cache way tracker hit for a read operation from the data cache"
	},
	{.name = "L1D_WT_HIT_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x37b,
	 .desc = "A lookup into the TLAC hit"
	},
	{.name = "VSCTLR_WR_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x390,
	 .desc = "Instruction architecturally executed, condition code check pass, write to VSCTLR_EL2"
	},
	{.name = "DFB_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x391,
	 .desc = "Instruction architecturally executed, condition code check pass for data full barrier instruction"
	},
	{.name = "EL2_ENTERED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x392,
	 .desc = "Exception taken to EL2 (hyp mode entry), excluding reset"
	},
	{.name = "LLRAM_TIMEOUT_I",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x393,
	 .desc = "An event to indicate that the instruction pipeline has timed out on an access to the LLRAM region"
	},
	{.name = "MM_TIMEOUT_I",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x394,
	 .desc = "An event to indicate that the instruction pipeline has timed out on an access to the main master region"
	},
	{.name = "LLRAM_TIMEOUT_D",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x395,
	 .desc = "An event to indicate that the load/store pipeline has timed out on an access to the LLRAM region"
	},
	{.name = "MM_TIMEOUT_D",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x396,
	 .desc = "An event to indicate that the load/store pipeline has timed out on an access to the main master region"
	},
	{.name = "LLPP_TIMEOUT_D",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x397,
	 .desc = "An event to indicate that the load/store pipeline has timed out on an access to the LLPP region"
	},
	{.name = "SPP_TIMEOUT_D",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x398,
	 .desc = "An event to indicate that the load/store pipeline has timed out on an access to the SPP region"
	},
	{.name = "L1D_TLB_REFILL_PREFETCHER",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x399,
	 .desc = "L1 TLB refill used by the data side prefetcher"
	},
	{.name = "L1D_TLB_PREFETCHER",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x39a,
	 .desc = "L1 TLB access by the data side prefetcher"
	},
	{.name = "L1I_LFD_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x520,
	 .desc = "This event is reserved for testing purposes"
	},
	{.name = "GR_EVICT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x521,
	 .desc = "This event is reserved for testing purposes"
	},
	{.name = "L1I_TLB_REFILL_EVICT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x522,
	 .desc = "This event is reserved for testing purposes"
	},
	{.name = "BR_COND_QUEUE_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x523,
	 .desc = "This event is reserved for testing purposes"
	},
	{.name = "BR_INDIRECT_QUEUE_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x524,
	 .desc = "This event is reserved for testing purposes"
	},
	{.name = "BR_RETURN_OVERFLOW",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x525,
	 .desc = "This event is reserved for testing purposes"
	},
	{.name = "L1D_TLB_REFILL_EVICT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x526,
	 .desc = "This event is reserved for testing purposes"
	},
	{.name = "L1D_TLB_REFILL_EVICT_PREFETCHER",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x527,
	 .desc = "This event is reserved for testing purposes"
	},
	{.name = "L1D_LFD_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x528,
	 .desc = "This event is reserved for testing purposes"
	},
	{.name = "L1D_RBUF_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x529,
	 .desc = "This event is reserved for testing purposes"
	},
	{.name = "L1D_PREFETCH_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x52a,
	 .desc = "This event is reserved for testing purposes"
	},
	{.name = "L1D_LF_SET_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x52b,
	 .desc = "This event is reserved for testing purposes"
	},
	{.name = "L1D_CACHE_RD_SKID",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x52c,
	 .desc = "This event is reserved for testing purposes"
	},
	{.name = "L1I_CACHE_LMISS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x4006,
	 .desc = "The counter counts each access counted by L1I_CACHE that incurs additional latency because it returns instructions from outside the L1 instruction cache"
	},
	{.name = "LDST_ALIGN_LAT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x4020,
	 .desc = "The counter counts each access counted by MEM_ACCESS that, due to the alignment of the address and size of data being accessed, incurred additional latency"
	},
	{.name = "LD_ALIGN_LAT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x4021,
	 .desc = "The counter counts each memory-read access counted by LDST_ALIGN_LAT"
	},
	{.name = "ST_ALIGN_LAT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x4022,
	 .desc = "The counter counts each memory-write access counted by LDST_ALIGN_LAT"
	},
	/* END Cortex-R82 specific events */
};
