/*
 * Cortex AX1 r1p1
 * based on Table C2-3 from the "Cortex AX1 Technical Reference Manual"
 */

static const arm_entry_t arm_cortex_aX1_pe[]={
	{.name = "SW_INCR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x00,
	 .desc = "Instruction architecturally executed (condition check pass) software increment"
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
	 .desc = "Instruction architecturally executed (condition check pass) - Load"
	},
	{.name = "ST_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x07,
	 .desc = "Instruction architecturally executed (condition check pass) - Store"
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
	 .code = 0x0A,
	 .desc = "Instruction architecturally executed (condition check pass) - Exception return"
	},
	{.name = "CID_WRITE_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0B,
	 .desc = "Instruction architecturally executed (condition check pass) - Write to CONTEXTIDR"
	},
	{.name = "PC_WRITE_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0C,
	 .desc = "Instruction architecturally executed, condition code check pass, software change of the PC"
	},
	{.name = "BR_IMMED_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0D,
	 .desc = "Instruction architecturally executed, immediate branch"
	},
	{.name = "BR_RETURN_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0E,
	 .desc = "Instruction architecturally executed (condition check pass) - procedure return"
	},
	{.name = "UNALIGNED_LDST_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0F,
	 .desc = "Instruction architecturally executed (condition check pass), unaligned load/store"
	},
	{.name = "BR_MIS_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x10,
	 .desc = "Mispredicted or not predicted branch speculatively executed"
	},
	{.name = "CPU_CYCLES",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x11,
	 .desc = "Cycles"
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
	 .desc = "Level 1 data cache write-back"
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
	 .desc = "Level 2 data cache write-back"
	},
	{.name = "BUS_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x19,
	 .desc = "Bus access"
	},
	{.name = "MEMORY_ERROR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1A,
	 .desc = "Local memory error."
	},
	{.name = "INST_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1B,
	 .desc = "Instruction speculatively executed"
	},
	{.name = "TTBR_WRITE_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1C,
	 .desc = "Instruction architecturally executed (condition check pass)  Write to translation table base"
	},
	{.name = "BUS_CYCLES",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1D,
	 .desc = "Bus cycles.This event duplicates CPU_CYCLES."
	},
	{.name = "CHAIN",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1E,
	 .desc = "For odd-numbered counters, increments the count by one for each overflow of the proceeding even counter"
	},
	{.name = "L2D_CACHE_ALLOCATE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x20,
	 .desc = "Level 2 data/unified cache allocation without refill"
	},
	{.name = "BR_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x21,
	 .desc = "Instruction architecturally executed, branch."
	},
	{.name = "BR_MIS_PRED_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x22,
	 .desc = "Instruction architecturally executed, mispredicted branch."
	},
	{.name = "STALL_FRONTEND",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x23,
	 .desc = "Cycle on which no operation issued because there were no operations to issue"
	},
	{.name = "STALL_BACKEND",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x24,
	 .desc = "Cycle on which no operation issued due to back-end resources being unavailable"
	},
	{.name = "L1D_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x25,
	 .desc = "Level 1 data TLB access"
	},
	{.name = "L1I_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x26,
	 .desc = "Instruction TLB access"
	},
	{.name = "L3D_CACHE_ALLOCATE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x29,
	 .desc = "Attributable Level 3 unified cache allocation without refill."
	},
	{.name = "L3D_CACHE_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x2A,
	 .desc = "Attributable Level 3 unified cache refill."
	},
	{.name = "L3D_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x2B,
	 .desc = "Attributable Level 3 unified cache access."
	},
	{.name = "L2D_TLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x2D,
	 .desc = "Attributable memory-read or attributable memory-write operation that causes a TLB refill"
	},
	{.name = "L2D_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x2F,
	 .desc = "Attributable memory read operation or attributable memory write operation that causes a TLB access"
	},
	{.name = "DTLB_WALK",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x34,
	 .desc = "Access to data TLB that caused a page table walk."
	},
	{.name = "ITLB_WALK",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x35,
	 .desc = "Access to instruction TLB that caused a page table walk."
	},
	{.name = "LL_CACHE_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x36,
	 .desc = "Last level cache access, read."
	},
	{.name = "LL_CACHE_MISS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x37,
	 .desc = "Last level cache miss, read."
	},
	{.name = "REMOTE_ACCESS_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x38,
	 .desc = "Access to another socket in a multi-socket system, read."
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
	 .desc = "Level 2 data cache access, read"
	},
	{.name = "L2D_CACHE_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x51,
	 .desc = "Level 2 data cache access, write"
	},
	{.name = "L2D_CACHE_REFILL_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x52,
	 .desc = "Level 2 data cache refill, read"
	},
	{.name = "L2D_CACHE_REFILL_WR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x53,
	 .desc = "Level 2 data cache refill, write"
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
	 .desc = "Operation speculatively executed, data-processing"
	},
	{.name = "ASE_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x74,
	 .desc = "Operation speculatively executed, Advanced SIMD instruction"
	},
	{.name = "VFP_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x75,
	 .desc = "Operation speculatively executed, floating point instruction"
	},
	{.name = "PC_WRITE_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x76,
	 .desc = "Operation speculatively executed, software change of the PC."
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
	 .desc = "Branch speculatively executed, return"
	},
	{.name = "BR_INDIRECT_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x7A,
	 .desc = "Branch speculatively executed, indirect branch"
	},
	{.name = "EXC_IRQ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x86,
	 .desc = "Exception taken, irq"
	},
	{.name = "EXC_FIQ",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x87,
	 .desc = "Exception taken, fiq"
	},
	{.name = "L3D_CACHE_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xA0,
	 .desc = "Attributable Level 3 unified cache access, read"
	},
	{.name = "L3D_CACHE_REFILL_RD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xA2,
	 .desc = "Attributable Level 3 unified cache refill, read.This event duplicates L3D_CACHE_REFILL."
	},
	{.name = "L3D_CACHE_REFILL_PREFETCH",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xC0,
	 .desc = "Level 3 cache refill due to prefetch"
	},
	{.name = "L2D_CACHE_REFILL_PREFETCH",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xC1,
	 .desc = "Level 2 cache refill due to prefetch"
	},
	{.name = "L1D_CACHE_REFILL_PREFETCH",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xC2,
	 .desc = "Level 1 data cache refill due to prefetch."
	},
	{.name = "L2D_WS_MODE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xC3,
	 .desc = "Level 2 cache write streaming mode"
	},
	{.name = "L1D_WS_MODE_ENTRY",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xC4,
	 .desc = "Level 1 data cache entering write streaming mode"
	},
	{.name = "L1D_WS_MODE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xC5,
	 .desc = "Level 1 data cache write streaming mode"
	},
	{.name = "PREDECODE_ERROR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xC6,
	 .desc = "Predecode error"
	},
	{.name = "L3D_WS_MODE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xC7,
	 .desc = "Level 3 cache write streaming mode"
	},
	{.name = "BR_COND_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xC9,
	 .desc = "Predicted conditional branch executed"
	},
	{.name = "BR_INDIRECT_MIS_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xCA,
	 .desc = "Indirect branch mis-predicted"
	},
	{.name = "BR_INDIRECT_ADDR_MIS_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xCB,
	 .desc = "Indirect branch mis-predicted due to address mis-compare"
	},
	{.name = "BR_COND_MIS_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xCC,
	 .desc = "Conditional branch mis-predicted"
	},
	{.name = "BR_INDIRECT_ADDR_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xCD,
	 .desc = "Indirect branch with predicted address executed."
	},
	{.name = "BR_RETURN_ADDR_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xCE,
	 .desc = "Procedure return with predicted address executed."
	},
	{.name = "BR_RETURN_ADDR_MIS_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xCF,
	 .desc = "Procedure return mis-predicted due to address mis-compare."
	},
	{.name = "L2D_LLWALK_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xD0,
	 .desc = "Level 2 TLB last-level walk cache access."
	},
	{.name = "L2D_LLWALK_TLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xD1,
	 .desc = "Level 2 TLB last-level walk cache refill."
	},
	{.name = "L2D_L2WALK_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xD2,
	 .desc = "Level 2 TLB level-2 walk cache access."
	},
	{.name = "L2D_L2WALK_TLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xD3,
	 .desc = "Level 2 TLB level-2 walk cache refill."
	},
	{.name = "L2D_S2_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xD4,
	 .desc = "Level 2 TLB IPA cache access."
	},
	{.name = "L2D_S2_TLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xD5,
	 .desc = "Level 2 TLB IPA cache refill."
	},
	{.name = "L2D_CACHE_STASH_DROPPED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xD6,
	 .desc = "Level 2 cache stash dropped."
	},
	{.name = "STALL_FRONTEND_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xE1,
	 .desc = "No operation issued due to the frontend, cache miss."
	},
	{.name = "STALL_FRONTEND_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xE2,
	 .desc = "No operation issued due to the frontend, TLB miss."
	},
	{.name = "STALL_FRONTEND_PDERR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xE3,
	 .desc = "No operation issued due to the backend interlock."
	},
	{.name = "STALL_BACKEND_ILOCK",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xE4,
	 .desc = "No operation issued due to the backend interlock."
	},
	{.name = "STALL_BACKEND_ILOCK_AGU",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xE5,
	 .desc = "No operation issued due to the backend, interlock, AGU."
	},
	{.name = "STALL_BACKEND_ILOCK_FPU",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xE6,
	 .desc = "No operation issued due to the backend, interlock, FPU."
	},
	{.name = "STALL_BACKEND_LD",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xE7,
	 .desc = "No operation issued due to the backend, load."
	},
	{.name = "STALL_BACKEND_ST",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xE8,
	 .desc = "No operation issued due to the backend, store."
	},
	{.name = "STALL_BACKEND_LD_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xE9,
	 .desc = "No operation issued due to the backend, load, cache miss."
	},
	{.name = "STALL_BACKEND_LD_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xEA,
	 .desc = "No operation issued due to the backend, load, TLB miss."
	},
	{.name = "STALL_BACKEND_ST_STB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xEB,
	 .desc = "No operation issued due to the backend, store, STB full."
	},
	{.name = "STALL_BACKEND_ST_TLB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xEC,
	 .desc = "No operation issued due to the backend, store, TLB miss."
	},
};
