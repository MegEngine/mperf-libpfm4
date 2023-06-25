/*
 * Cortex-R8 Event Table
 */
static const arm_entry_t arm_cortex_r8_pe[]={
	{.name = "SW_INCR",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x00,
	 .desc = "Incremented only on writes to the Software Increment Register"
	},
	{.name = "L1I_CACHE_REFILL",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x01,
	 .desc = "Each instruction fetch from normal cacheable memory that causes a refill from the L2 memory system generates this event"
	},
	{.name = "L1D_CACHE_REFILL",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x03,
	 .desc = "Each data read from or write to normal cacheable memory that causes a refill from the L2 memory system generates this event"
	},
	{.name = "L1D_CACHE",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x04,
	 .desc = "Each access to a cache line is counted including the multiple transactions of an LDM, STM, or other operations"
	},
	{.name = "LD_RETIRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x06,
	 .desc = "Data Read architecturally executed"
	},
	{.name = "ST_RETIRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x07,
	 .desc = "Data Write architecturally executed"
	},
	{.name = "INST_RETIRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x08,
	 .desc = "Instruction architecturally executed"
	},
	{.name = "EXC_TAKEN",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x09,
	 .desc = "This event occurs on each exception taken"
	},
	{.name = "EXC_RETURN",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x0a,
	 .desc = "Exception return architecturally executed"
	},
	{.name = "CID_WRITE_RETIRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x0b,
	 .desc = "Change to Context ID executed"
	},
	{.name = "PC_WRITE_RETIRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x0c,
	 .desc = "Software changed the PC, except by an exception, architecturally executed"
	},
	{.name = "BR_IMMED_RETIRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x0d,
	 .desc = "B immediate, BL immediate or BLX immediate instruction architecturally executed (taken or not taken)"
	},
	{.name = "BR_RETURN_RETIRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x0e,
	 .desc = "Procedure return architecturally executed, other than exception returns, for example, BZ Rm, LDM Rn, {"
	},
	{.name = "UNALIGNED_LDST_RETIRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x0f,
	 .desc = "This event occurs for each instruction that was to an unaligned address that either triggered an alignment fault, or would have done so if the SCTLR A-bit had been set"
	},
	{.name = "BR_MIS_PRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x10,
	 .desc = "Branch mispredicted or not predicted"
	},
	{.name = "BR_PRED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x12,
	 .desc = "Branches or other change in program flow that could have been predicted by the branch prediction resources of the processor"
	},
	{.name = "L1I_CACHE",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x14,
	 .desc = "Instruction access"
	},
	{.name = "L1D_CACHE_RD",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x40,
	 .desc = "Triggered by ETMEXTOUT[1] signal"
	},
	{.name = "L1D_CACHE_WR",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x41,
	 .desc = "Triggered by ETMEXTOUT[2] signal"
	},
	{.name = "L2D_CACHE_RD",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x50,
	 .desc = "Number of cycles IRQs are interrupted"
	},
	{.name = "L2D_CACHE_WR",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x51,
	 .desc = "Number of cycles FIQs are interrupted"
	},
	{.name = "BUS_ACCESS_RD",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x60,
	 .desc = "Detected ECC errors on any RAM"
	},
	{.name = "BUS_ACCESS_WR",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x61,
	 .desc = "Parity error on PRED"
	},
	{.name = "BUS_ACCESS_SHARED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x62,
	 .desc = "Parity error on BTAC"
	},
	{.name = "BUS_ACCESS_NOT_SHARED",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x63,
	 .desc = "Detected ECC errors on ITCM"
	},
	{.name = "BUS_ACCESS_NORMAL",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x64,
	 .desc = "Detected ECC errors on DTCM"
	},
	{.name = "BUS_ACCESS_PERIPH",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x65,
	 .desc = "Detected ECC errors on instruction cache"
	},
	{.name = "MEM_ACCESS_RD",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x66,
	 .desc = "Detected ECC errors on data cache"
	},
	{.name = "MEM_ACCESS_WR",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x67,
	 .desc = "Correctable ECC errors on any bus"
	},
	{.name = "UNALIGNED_LD_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x68,
	 .desc = "Correctable ECC errors on slave bus, data write channel"
	},
	{.name = "UNALIGNED_ST_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x69,
	 .desc = "Correctable ECC errors on peripheral master bus, data read channel"
	},
	{.name = "UNALIGNED_LDST_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x6a,
	 .desc = "Correctable ECC errors on master 0 bus, data read channel"
	},
	{.name = "EVENT_006B",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x6b,
	 .desc = "Correctable ECC errors on master 1 bus, data read channel"
	},
	{.name = "LDREX_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x6c,
	 .desc = "Detected ECC errors on SCU RAM"
	},
	{.name = "STREX_PASS_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x6d,
	 .desc = "Correctable ECC errors on AXI TCM port"
	},
	{.name = "STREX_FAIL_SPEC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x6e,
	 .desc = "Correctable ECC errors on local AXI fast peripheral port"
	},
	{.name = "EVENT_0080",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x80,
	 .desc = "STREX passed"
	},
	{.name = "EXC_UNDEF",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x81,
	 .desc = "STREX failed"
	},
	{.name = "EXC_SVC",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x82,
	 .desc = "Literal pool in TCM region"
	},
	{.name = "EVENT_0090",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x90,
	 .desc = "DMB stall"
	},
	{.name = "EVENT_0091",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x91,
	 .desc = "ITCM access"
	},
	{.name = "EVENT_0092",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x92,
	 .desc = "DTCM access"
	},
	{.name = "EVENT_0093",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x93,
	 .desc = "SCU coherency operation (CCB request)"
	},
	{.name = "EVENT_0094",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x94,
	 .desc = "SCU coherency"
	},
	{.name = "EVENT_0095",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x95,
	 .desc = "Instruction cache dependent stall"
	},
	{.name = "EVENT_0096",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x96,
	 .desc = "Data cache dependent stall"
	},
	{.name = "EVENT_0097",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x97,
	 .desc = "Non-cacheable no peripheral dependent stall"
	},
	{.name = "EVENT_0098",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x98,
	 .desc = "Non-cacheable peripheral dependent stall"
	},
	{.name = "EVENT_0099",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x99,
	 .desc = "Data cache high priority dependent stall"
	},
	{.name = "EVENT_009A",
	 .modmsk = ARMV7_ATTRS,
	 .code = 0x9a,
	 .desc = "Accesses to AXI fast peripheral port (reads and writes)"
	},
	/* END Cortex-R8 specific events */
};
