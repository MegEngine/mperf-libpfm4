/*
 * Cortex-A32 Event Table
 */
static const arm_entry_t arm_cortex_a32_pe[]={
	{.name = "SW_INCR",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x00,
	 .desc = "Software increment"
	},
	{.name = "L1I_CACHE_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x01,
	 .desc = "L1 Instruction cache refill"
	},
	{.name = "L1I_TLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x02,
	 .desc = "L1 Instruction TLB refill"
	},
	{.name = "L1D_CACHE_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x03,
	 .desc = "L1 Data cache refill"
	},
	{.name = "L1D_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x04,
	 .desc = "L1 Data cache access"
	},
	{.name = "L1D_TLB_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x05,
	 .desc = "L1 Data TLB refill"
	},
	{.name = "LD_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x06,
	 .desc = "Instruction that is architecturally executed, condition check pass - load"
	},
	{.name = "ST_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x07,
	 .desc = "Instruction that is architecturally executed, condition check pass - store"
	},
	{.name = "INST_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x08,
	 .desc = "Instruction that is architecturally executed"
	},
	{.name = "EXC_TAKEN",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x09,
	 .desc = "Exception taken"
	},
	{.name = "EXC_RETURN",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0a,
	 .desc = "Exception return"
	},
	{.name = "CID_WRITE_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0b,
	 .desc = "Change to Context ID retired"
	},
	{.name = "PC_WRITE_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0c,
	 .desc = "Instruction that is architecturally executed, condition check pass, software change of the PC"
	},
	{.name = "BR_IMMED_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0d,
	 .desc = "Instruction that is architecturally executed, immediate branch"
	},
	{.name = "BR_RETURN_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0e,
	 .desc = "Instruction that is architecturally executed, condition code check pass, procedure return"
	},
	{.name = "UNALIGNED_LDST_RETIRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x0f,
	 .desc = "Instruction that is architecturally executed, condition check pass, unaligned load or store"
	},
	{.name = "BR_MIS_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x10,
	 .desc = "Mispredicted or not predicted branch that is speculatively executed"
	},
	{.name = "CPU_CYCLES",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x11,
	 .desc = "Cycle"
	},
	{.name = "BR_PRED",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x12,
	 .desc = "Predictable branch that is speculatively executed"
	},
	{.name = "MEM_ACCESS",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x13,
	 .desc = "Data memory access"
	},
	{.name = "L1I_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x14,
	 .desc = "L1 Instruction cache access"
	},
	{.name = "L1D_CACHE_WB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x15,
	 .desc = "L1 Data cache writeback"
	},
	{.name = "L2D_CACHE",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x16,
	 .desc = "L2 Data cache access"
	},
	{.name = "L2D_CACHE_REFILL",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x17,
	 .desc = "L2 Data cache refill"
	},
	{.name = "L2D_CACHE_WB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x18,
	 .desc = "L2 Data cache write-back"
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
	{.name = "BUS_CYCLES",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x1d,
	 .desc = "Bus cycle"
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
	{.name = "BR_INDIRECT_SPEC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0x7a,
	 .desc = "Branch that is speculatively executed - Indirect branch"
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
	{.name = "EVENT_00C0",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc0,
	 .desc = "External memory request"
	},
	{.name = "EVENT_00C1",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc1,
	 .desc = "Non-cacheable external memory request"
	},
	{.name = "EVENT_00C2",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc2,
	 .desc = "Linefill because of prefetch"
	},
	{.name = "EVENT_00C4",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc4,
	 .desc = "Entering read allocate mode"
	},
	{.name = "EVENT_00C5",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc5,
	 .desc = "Read allocate mode"
	},
	{.name = "EVENT_00C6",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc6,
	 .desc = "Pre-decode error"
	},
	{.name = "EVENT_00C7",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc7,
	 .desc = "Data Write operation that stalls the pipeline because the store buffer is full"
	},
	{.name = "EVENT_00C8",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc8,
	 .desc = "SCU Snooped data from another core for this core"
	},
	{.name = "EVENT_00C9",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xc9,
	 .desc = "Conditional branch that is executed"
	},
	{.name = "EVENT_00CA",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xca,
	 .desc = "Indirect branch that is mispredicted"
	},
	{.name = "EVENT_00CB",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xcb,
	 .desc = "Indirect branch that is mispredicted because of address miscompare"
	},
	{.name = "EVENT_00CC",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xcc,
	 .desc = "Conditional branch that is mispredicted"
	},
	{.name = "EVENT_00D0",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd0,
	 .desc = "L1 Instruction Cache (data or tag) memory error"
	},
	{.name = "EVENT_00D1",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd1,
	 .desc = "L1 Data Cache (data, tag, or dirty) memory error, correctable or non-correctable"
	},
	{.name = "EVENT_00D2",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xd2,
	 .desc = "TLB memory error"
	},
	{.name = "EVENT_00E0",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe0,
	 .desc = "Attributable Performance Impact Event"
	},
	{.name = "EVENT_00E1",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe1,
	 .desc = "Attributable Performance Impact Event"
	},
	{.name = "EVENT_00E2",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe2,
	 .desc = "Attributable Performance Impact Event"
	},
	{.name = "EVENT_00E3",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe3,
	 .desc = "Attributable Performance Impact Event"
	},
	{.name = "EVENT_00E4",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe4,
	 .desc = "Attributable Performance Impact Event"
	},
	{.name = "EVENT_00E5",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe5,
	 .desc = "Attributable Performance Impact Event"
	},
	{.name = "EVENT_00E6",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe6,
	 .desc = "Attributable Performance Impact Event"
	},
	{.name = "EVENT_00E7",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe7,
	 .desc = "Attributable Performance Impact Event Counts every cycle there is a stall in the Wr stage because of a load miss"
	},
	{.name = "EVENT_00E8",
	 .modmsk = ARMV8_ATTRS,
	 .code = 0xe8,
	 .desc = "Attributable Performance Impact Event"
	},
	/* END Cortex-A32 specific events */
};
