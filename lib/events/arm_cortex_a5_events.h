/*
 * Cortex-A5 Event Table
 */
static const arm_entry_t arm_cortex_a5_pe[]={
	{.name = "SW_INCR",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x00,
	 .desc = "Software increment"
	},
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
	{.name = "LD_RETIRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x06,
	 .desc = "Data read architecturally executed"
	},
	{.name = "ST_RETIRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x07,
	 .desc = "Data write architecturally executed"
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
	{.name = "PC_WRITE_RETIRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x0c,
	 .desc = "Software change of PC"
	},
	{.name = "BR_IMMED_RETIRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x0d,
	 .desc = "Immediate branch architecturally executed (taken or not taken)"
	},
	{.name = "BR_RETURN_RETIRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x0e,
	 .desc = "Procedure return (other than exception returns) architecturally executed"
	},
	{.name = "UNALIGNED_LDST_RETIRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x0f,
	 .desc = "Unaligned load-store"
	},
	{.name = "BR_MIS_PRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x10,
	 .desc = "Branch mispredicted/not predicted"
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
	 .desc = "Data memory access"
	},
	{.name = "L1I_CACHE",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x14,
	 .desc = "Instruction Cache access"
	},
	{.name = "L1D_CACHE_WB",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x15,
	 .desc = "Data cache eviction"
	},
	{.name = "EXC_IRQ",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x86,
	 .desc = "IRQ exception taken"
	},
	{.name = "EXC_FIQ",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x87,
	 .desc = "FIQ exception taken"
	},
	{.name = "EVENT_00C0",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xc0,
	 .desc = "External memory request"
	},
	{.name = "EVENT_00C1",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xc1,
	 .desc = "Non-cacheable external memory request"
	},
	{.name = "EVENT_00C2",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xc2,
	 .desc = "Linefill because of prefetch"
	},
	{.name = "EVENT_00C3",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xc3,
	 .desc = "Prefetch linefill dropped"
	},
	{.name = "EVENT_00C4",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xc4,
	 .desc = "Entering read allocate mode"
	},
	{.name = "EVENT_00C5",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xc5,
	 .desc = "Read allocate mode"
	},
	{.name = "EVENT_00C6",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xc6,
	 .desc = "Reserved"
	},
	{.name = "EVENT_00C7",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xc7,
	 .desc = "ETM Ext Out[0]"
	},
	{.name = "EVENT_00C8",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xc8,
	 .desc = "ETM Ext Out[1]"
	},
	{.name = "EVENT_00C9",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0xc9,
	 .desc = "Data Write operation that stalls the pipeline because the store buffer is full"
	},
	/* END Cortex-A5 specific events */
};
