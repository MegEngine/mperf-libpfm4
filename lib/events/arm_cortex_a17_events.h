/*
 * Cortex-A17 Event Table
 */
static const arm_entry_t arm_cortex_a17_pe[]={
	{.name = "L1I_CACHE_REFILL",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x01,
	 .desc = "Instruction fetch that causes a refill at (at least) the lowest level of instruction or unified cache"
	},
	{.name = "L1I_TLB_REFILL",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x02,
	 .desc = "Instruction fetch that causes a TLB refill at (at least) the lowest level of TLB"
	},
	{.name = "L1D_CACHE_REFILL",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x03,
	 .desc = "Data read or write operation that causes a refill at (at least) the lowest level of data or unified cache"
	},
	{.name = "L1D_CACHE",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x04,
	 .desc = "Data read or write operation that causes a cache access at (at least) the lowest level of data or unified cache"
	},
	{.name = "L1D_TLB_REFILL",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x05,
	 .desc = "Data read or write operation that causes a TLB refill at (at least) the lowest level of TLB"
	},
	{.name = "INST_RETIRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x08,
	 .desc = "Instruction architecturally executed"
	},
	{.name = "EXC_TAKEN",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x09,
	 .desc = "Exception taken"
	},
	{.name = "EXC_RETURN",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x0a,
	 .desc = "Exception return architecturally executed"
	},
	{.name = "CID_WRITE_RETIRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x0b,
	 .desc = "Change to ContextID retired"
	},
	{.name = "BR_MIS_PRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x10,
	 .desc = "Branch mispredicted or not predicted"
	},
	{.name = "CPU_CYCLES",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x11,
	 .desc = "Cycle counter"
	},
	{.name = "BR_PRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x12,
	 .desc = "Branches or other change in program flow that could have been predicted by the branch prediction resources of the processor"
	},
	{.name = "MEM_ACCESS",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x13,
	 .desc = "Level 1 data memory access"
	},
	{.name = "L1I_CACHE",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x14,
	 .desc = "Level 1 instruction cache access"
	},
	{.name = "L1D_CACHE_WB",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x15,
	 .desc = "Level 1 data cache eviction"
	},
	{.name = "L2D_CACHE",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x16,
	 .desc = "Level 2 data cache access"
	},
	{.name = "L2D_CACHE_REFILL",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x17,
	 .desc = "Level 2 data cache refill"
	},
	{.name = "L2D_CACHE_WB",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x18,
	 .desc = "Level 2 data cache write-back"
	},
	{.name = "BUS_ACCESS",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x19,
	 .desc = "Bus accesses"
	},
	{.name = "INST_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x1b,
	 .desc = "Instructions speculatively executed"
	},
	{.name = "TTBR_WRITE_RETIRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x1c,
	 .desc = "Write to translation table register (TTBR0 or TTBR1)"
	},
	{.name = "BUS_CYCLES",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x1d,
	 .desc = "Bus cycle"
	},
	{.name = "L1D_CACHE_RD",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x40,
	 .desc = "Level 1 data cache access - Read"
	},
	{.name = "L1D_CACHE_WR",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x41,
	 .desc = "Level 1 data cache access - Write"
	},
	{.name = "L2D_CACHE_RD",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x50,
	 .desc = "Level 2 data cache access - Read"
	},
	{.name = "L2D_CACHE_WR",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x51,
	 .desc = "Level 2 data cache access - Write"
	},
	{.name = "L2D_CACHE_WB_VICTIM",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x56,
	 .desc = "Level 2 data cache write-back - Victim"
	},
	{.name = "L2D_CACHE_WB_CLEAN",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x57,
	 .desc = "Level 2 data cache write-back - Cleaning and coherency"
	},
	{.name = "L2D_CACHE_INVAL",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x58,
	 .desc = "Level 2 data cache invalidate"
	},
	{.name = "BUS_ACCESS_RD",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x60,
	 .desc = "Reserved"
	},
	{.name = "BUS_ACCESS_SHARED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x62,
	 .desc = "Bus access - Normal Cacheable"
	},
	{.name = "BUS_ACCESS_NOT_SHARED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x63,
	 .desc = "Bus access - Not Cacheable"
	},
	{.name = "BUS_ACCESS_NORMAL",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x64,
	 .desc = "Bus access - Normal"
	},
	{.name = "BUS_ACCESS_PERIPH",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x65,
	 .desc = "Bus access - Peripheral"
	},
	{.name = "MEM_ACCESS_RD",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x66,
	 .desc = "Data memory access - Read"
	},
	{.name = "MEM_ACCESS_WR",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x67,
	 .desc = "Data memory access - Write"
	},
	{.name = "UNALIGNED_LD_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x68,
	 .desc = "Unaligned access - Read"
	},
	{.name = "UNALIGNED_ST_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x69,
	 .desc = "Unaligned access - Write"
	},
	{.name = "UNALIGNED_LDST_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x6a,
	 .desc = "Unaligned access"
	},
	{.name = "LDREX_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x6c,
	 .desc = "Exclusive instruction speculatively executed - LDREX"
	},
	{.name = "STREX_FAIL_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x6e,
	 .desc = "Exclusive instruction speculatively executed - STREX fail"
	},
	{.name = "STREX_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x6f,
	 .desc = "Exclusive instruction speculatively executed - STREX"
	},
	{.name = "LD_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x70,
	 .desc = "Load instruction speculatively executed"
	},
	{.name = "ST_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x71,
	 .desc = "Store instruction speculatively executed"
	},
	{.name = "LDST_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x72,
	 .desc = "Instruction speculatively executed - Load or store"
	},
	{.name = "DP_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x73,
	 .desc = "Instruction speculatively executed - Data processing"
	},
	{.name = "ASE_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x74,
	 .desc = "Instruction speculatively executed - Advanced SIMD"
	},
	{.name = "VFP_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x75,
	 .desc = "Instruction speculatively executed - VFP"
	},
	{.name = "PC_WRITE_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x76,
	 .desc = "Instruction speculatively executed - Software change of the PC"
	},
	{.name = "BR_IMMED_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x78,
	 .desc = "Branch speculatively executed - Immediate branch"
	},
	{.name = "BR_RETURN_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x79,
	 .desc = "Branch speculatively executed - Procedure return"
	},
	{.name = "BR_INDIRECT_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x7a,
	 .desc = "Branch speculatively executed - Indirect branch"
	},
	{.name = "ISB_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x7c,
	 .desc = "Barrier speculatively executed - ISB"
	},
	{.name = "DSB_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x7d,
	 .desc = "Barrier speculatively executed - DSB"
	},
	{.name = "DMB_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x7e,
	 .desc = "Barrier speculatively executed - DMB"
	},
	{.name = "EXC_UNDEF",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x81,
	 .desc = "Exception taken - Undefined Instruction"
	},
	{.name = "EXC_HVC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x8a,
	 .desc = "Exception taken - Hypervisor Call"
	},
	{.name = "EVENT_00C0",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xc0,
	 .desc = "Instruction side stalled due to a linefill"
	},
	{.name = "EVENT_00C1",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xc1,
	 .desc = "Instruction side stalled due to a translation table walk"
	},
	{.name = "EVENT_00C2",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xc2,
	 .desc = "Number of set of 4 ways read in the instruction cache - Tag RAM"
	},
	{.name = "EVENT_00C3",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xc3,
	 .desc = "Number of ways read in the instruction cache - Data RAM"
	},
	{.name = "EVENT_00C4",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xc4,
	 .desc = "Number of ways read in the instruction BTAC RAM"
	},
	{.name = "EVENT_00CA",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xca,
	 .desc = "Data snooped from other processor"
	},
	{.name = "EVENT_00D3",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xd3,
	 .desc = "Duration during which all slots in the Load-Store Unit are busy"
	},
	{.name = "EVENT_00D8",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xd8,
	 .desc = "Duration during which all slots in the Load-Store Issue queue are busy"
	},
	{.name = "EVENT_00D9",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xd9,
	 .desc = "Duration during which all slots in the Data Processing issue queue are busy"
	},
	{.name = "EVENT_00DA",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xda,
	 .desc = "Duration during which all slots in the Data Engine issue queue are busy"
	},
	{.name = "EVENT_00DB",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xdb,
	 .desc = "Number of NEON instruction which fail their condition code and lead to a flush of the DE pipe"
	},
	{.name = "EVENT_00DC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xdc,
	 .desc = "Number of Trap to hypervisor"
	},
	{.name = "EVENT_00DE",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xde,
	 .desc = "PTM EXTOUT 0"
	},
	{.name = "EVENT_00DF",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xdf,
	 .desc = "PTM EXTOUT 1"
	},
	{.name = "EVENT_00E0",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xe0,
	 .desc = "Duration during which the MMU handle a translation table walk"
	},
	{.name = "EVENT_00E1",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xe1,
	 .desc = "Duration during which the MMU handle a Stage1 translation table walk"
	},
	{.name = "EVENT_00E2",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xe2,
	 .desc = "Duration during which the MMU handle a Stage2 translation table walk"
	},
	{.name = "EVENT_00E3",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xe3,
	 .desc = "Duration during which the MMU handle a translation table walk requested by the Load Store Unit"
	},
	{.name = "EVENT_00E4",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xe4,
	 .desc = "Duration during which the MMU handle a translation table walk requested by the Instruction side"
	},
	{.name = "EVENT_00E5",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xe5,
	 .desc = "Duration during which the MMU handle a translation table walk requested by a Preload instruction or Prefetch request"
	},
	{.name = "EVENT_00E6",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xe6,
	 .desc = "Duration during which the MMU handle a translation table walk requested by a CP15 operation (maintenance by MVA and VA-to-PA operation)"
	},
	{.name = "EVENT_00E7",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xe7,
	 .desc = "Level 1 PLD TLB refill"
	},
	{.name = "EVENT_00E8",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xe8,
	 .desc = "Level 1 CP15 TLB refill"
	},
	{.name = "EVENT_00E9",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xe9,
	 .desc = "Level 1 TLB flush"
	},
	{.name = "EVENT_00EA",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xea,
	 .desc = "Level 2 TLB access"
	},
	{.name = "EVENT_00EB",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xeb,
	 .desc = "Level 2 TLB miss"
	},
	/* END Cortex-A17 specific events */
};
