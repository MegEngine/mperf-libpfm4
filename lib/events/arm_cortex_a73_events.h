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
 * Cortex-A73 Event Table
 */
static const arm_entry_t arm_cortex_a73_pe[]={
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
	 .desc = "L2 data cache Write-Back"
	},
	{.name = "BUS_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x19,
	 .desc = "Bus access"
	},
	{.name = "INST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1b,
	 .desc = "Operation speculatively executed"
	},
	{.name = "INT_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "INST_SPEC",
	 .code = 0x1b,
	 .desc = "Operation speculatively executed"
	},
	{.name = "TTBR_WRITE_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1c,
	 .desc = "Instruction architecturally executed (condition check pass) - Write to TTBR"
	},
	{.name = "BUS_CYCLES",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1d,
	 .desc = "Bus cycle"
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
	{.name = "BUS_ACCESS_SHARED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x62,
	 .desc = "Bus access, Normal, Cacheable, Shareable"
	},
	{.name = "BUS_ACCESS_NOT_SHARED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x63,
	 .desc = "Bus access, not Normal, Cacheable, or Shareable"
	},
	{.name = "BUS_ACCESS_NORMAL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x64,
	 .desc = "Bus access, Normal"
	},
	{.name = "BUS_ACCESS_PERIPH",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x65,
	 .desc = "Bus access, Device"
	},
	{.name = "BUS_ACCESS_SO_DIV",
	 .modmsk = ARMV8_ATTRS,
	 .equiv = "BUS_ACCESS_PERIPH",
	 .code = 0x65,
	 .desc = "Bus access, Device"
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
	{.name = "UNALIGNED_LDST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x6a,
	 .desc = "Unaligned access"
	},
	{.name = "LDREX_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x6c,
	 .desc = "Exclusive operation speculatively executed, LDREX, or LDX"
	},
	{.name = "STREX_FAIL_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x6e,
	 .desc = "Exclusive operation speculatively executed, STREX, or STX pass"
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
	 .desc = "Operation speculatively executed, floatingpoint instruction"
	},
	{.name = "CRYPTO_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x77,
	 .desc = "Operation speculatively executed, Cryptographic instruction"
	},
	{.name = "BR_INDIRECT_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x7a,
	 .desc = "Branch speculatively executed - Indirect branch"
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
	{.name = "EXC_HVC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x8a,
	 .desc = "Exception taken, Hypervisor Call"
	},
	{.name = "LF_STALL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc0,
	 .desc = "A linefill caused an instruction side stall"
	},
	{.name = "PTW_STALL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc1,
	 .desc = "A translation table walk caused an instruction side stall"
	},
	{.name = "I_TAG_RAM_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc2,
	 .desc = "Number of ways read in the instruction cache - Tag RAM"
	},
	{.name = "I_DATA_RAM_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc3,
	 .desc = "Number of ways read in the instruction cache - Data RAM"
	},
	{.name = "I_BTAC_RAM_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc4,
	 .desc = "Number of ways read in the instruction BTAC RAM"
	},
	{.name = "D_LSU_SLOT_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd3,
	 .desc = "Duration for which all slots in the Load-Store Unit are busy"
	},
	{.name = "LS_IQ_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd8,
	 .desc = "Duration for which all slots in the load-store issue queue are busy"
	},
	{.name = "DP_IQ_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd9,
	 .desc = "Duration for which all slots in the data processing issue queue are busy"
	},
	{.name = "DE_IQ_FULL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xda,
	 .desc = "Duration for which all slots in the Data Engine issue queue are busy"
	},
	{.name = "EXC_TRAP_HYP",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xdc,
	 .desc = "Number of Traps to hypervisor"
	},
	{.name = "ETM_EXT_OUT0",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xde,
	 .desc = "ETM trace unit output 0"
	},
	{.name = "ETM_EXT_OUT1",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xdf,
	 .desc = "ETM trace unit output 1"
	},
	{.name = "MMU_PTW",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe0,
	 .desc = "Duration of a translation table walk handled by the MMU"
	},
	{.name = "MMU_PTW_ST1",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe1,
	 .desc = "Duration of a Stage 1 translation table walk handled by the MMU"
	},
	{.name = "MMU_PTW_ST2",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe2,
	 .desc = "Duration of a Stage 2 translation table walk handled by the MMU"
	},
	{.name = "MMU_PTW_LSU",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe3,
	 .desc = "Duration of a translation table walk requested by the LSU"
	},
	{.name = "MMU_PTW_ISIDE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe4,
	 .desc = "Duration of a translation table walk requested by the Instruction Side"
	},
	{.name = "MMU_PTW_PLD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe5,
	 .desc = "Duration of a translation table walk requested by a Preload instruction or Prefetch request"
	},
	{.name = "MMU_PTW_CP15",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe6,
	 .desc = "Duration of a translation table walk requested by a CP15 operation (maintenance by MVA and VA to PA operations)"
	},
	{.name = "PLD_UTLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe7,
	 .desc = "Level 1 PLD TLB refill"
	},
	{.name = "CP15_UTLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe8,
	 .desc = "Level 1 CP15 TLB refill"
	},
	{.name = "UTLB_FLUSH",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe9,
	 .desc = "Level 1 TLB flush"
	},
	{.name = "TLB_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xea,
	 .desc = "Level 2 TLB access"
	},
	{.name = "TLB_MISS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xeb,
	 .desc = "Level 2 TLB miss"
	},
	{.name = "DCACHE_SELF_HIT_VIPT",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xec,
	 .desc = "Data cache hit in itself due to VIPT aliasing"
	},
	/* END Cortex-A73 specific events */
};
