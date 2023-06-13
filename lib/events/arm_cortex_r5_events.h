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
 * Cortex-R5 Event Table
 */
static const arm_entry_t arm_cortex_r5_pe[]={
	{.name = "SW_INCR",
	 .code = 0x00,
	 .desc = "Incremented only on writes to the Software Increment Register"
	},
	{.name = "L1I_CACHE_REFILL",
	 .code = 0x01,
	 .desc = "Each instruction fetch from normal cacheable memory that causes a refill from the L2 memory system generates this event"
	},
	{.name = "L1D_CACHE_REFILL",
	 .code = 0x03,
	 .desc = "Each data read from or write to normal cacheable memory that causes a refill from the L2 memory system generates this event"
	},
	{.name = "L1D_CACHE",
	 .code = 0x04,
	 .desc = "Each access to a cache line is counted including the multiple transactions of an LDM, STM, or other operations"
	},
	{.name = "LD_RETIRED",
	 .code = 0x06,
	 .desc = "Data Read architecturally executed"
	},
	{.name = "ST_RETIRED",
	 .code = 0x07,
	 .desc = "Data Write architecturally executed"
	},
	{.name = "INST_RETIRED",
	 .code = 0x08,
	 .desc = "Instruction architecturally executed"
	},
	{.name = "EXC_TAKEN",
	 .code = 0x09,
	 .desc = "This event occurs on each exception taken"
	},
	{.name = "EXC_RETURN",
	 .code = 0x0a,
	 .desc = "Exception return architecturally executed"
	},
	{.name = "CID_WRITE_RETIRED",
	 .code = 0x0b,
	 .desc = "Change to Context ID executed"
	},
	{.name = "PC_WRITE_RETIRED",
	 .code = 0x0c,
	 .desc = "Software changed the PC, except by an exception, architecturally executed"
	},
	{.name = "BR_IMMED_RETIRED",
	 .code = 0x0d,
	 .desc = "B immediate, BL immediate or BLX immediate instruction architecturally executed (taken or not taken)"
	},
	{.name = "BR_RETURN_RETIRED",
	 .code = 0x0e,
	 .desc = "Procedure return architecturally executed, other than exception returns, for example, BZ Rm, LDM Rn, {"
	},
	{.name = "UNALIGNED_LDST_RETIRED",
	 .code = 0x0f,
	 .desc = "This event occurs for each instruction that was to an unaligned address that either triggered an alignment fault, or would have done so if the SCTLR A-bit had been set"
	},
	{.name = "BR_MIS_PRED",
	 .code = 0x10,
	 .desc = "Branch mispredicted or not predicted"
	},
	{.name = "BR_PRED",
	 .code = 0x12,
	 .desc = "Branches or other change in program flow that could have been predicted by the branch prediction resources of the processor"
	},
	{.name = "EVENT_0040",
	 .code = 0x40,
	 .desc = "Stall because instruction buffer cannot deliver an instruction"
	},
	{.name = "EVENT_0041",
	 .code = 0x41,
	 .desc = "Stall because of a data dependency between instructions"
	},
	{.name = "EVENT_0042",
	 .code = 0x42,
	 .desc = "Data cache write-back"
	},
	{.name = "EVENT_0043",
	 .code = 0x43,
	 .desc = "External memory request"
	},
	{.name = "EVENT_0044",
	 .code = 0x44,
	 .desc = "Stall because of LSU being busy"
	},
	{.name = "EVENT_0045",
	 .code = 0x45,
	 .desc = "Store buffer was forced to drain completely"
	},
	{.name = "EVENT_0046",
	 .code = 0x46,
	 .desc = "The number of cycles FIQ interrupts are disabled"
	},
	{.name = "EVENT_0047",
	 .code = 0x47,
	 .desc = "The number of cycles IRQ interrupts are disabled"
	},
	{.name = "EVENT_0048",
	 .code = 0x48,
	 .desc = "ETMEXTOUT[0]"
	},
	{.name = "EVENT_0049",
	 .code = 0x49,
	 .desc = "ETMEXTOUT[1]"
	},
	{.name = "EVENT_004A",
	 .code = 0x4a,
	 .desc = "Instruction cache tag RAM parity or correctable ECC error"
	},
	{.name = "EVENT_004B",
	 .code = 0x4b,
	 .desc = "Instruction cache data RAM parity or correctable ECC error"
	},
	{.name = "EVENT_004C",
	 .code = 0x4c,
	 .desc = "Data cache tag or dirty RAM parity error or correctable ECC error"
	},
	{.name = "EVENT_004D",
	 .code = 0x4d,
	 .desc = "Data cache data RAM parity error or correctable ECC error"
	},
	{.name = "EVENT_004E",
	 .code = 0x4e,
	 .desc = "TCM fatal ECC error reported from the prefetch unit"
	},
	{.name = "EVENT_004F",
	 .code = 0x4f,
	 .desc = "TCM fatal ECC error reported from the load/store unit"
	},
	{.name = "EVENT_0050",
	 .code = 0x50,
	 .desc = "Store buffer merge"
	},
	{.name = "EVENT_0051",
	 .code = 0x51,
	 .desc = "LSU stall caused by full store buffer"
	},
	{.name = "EVENT_0052",
	 .code = 0x52,
	 .desc = "LSU stall caused by store queue full"
	},
	{.name = "EVENT_0053",
	 .code = 0x53,
	 .desc = "Integer divide instruction, SDIV or UDIV, executed"
	},
	{.name = "EVENT_0054",
	 .code = 0x54,
	 .desc = "Stall cycle caused by integer divide"
	},
	{.name = "EVENT_0055",
	 .code = 0x55,
	 .desc = "PLD instruction that initiates a linefill"
	},
	{.name = "EVENT_0056",
	 .code = 0x56,
	 .desc = "PLD instruction that did not initiate a linefill because of a resource shortage"
	},
	{.name = "EVENT_0057",
	 .code = 0x57,
	 .desc = "Non-cacheable access on AXI master bus"
	},
	{.name = "EVENT_0058",
	 .code = 0x58,
	 .desc = "Instruction cache access"
	},
	{.name = "EVENT_0059",
	 .code = 0x59,
	 .desc = "Store buffer operation has detected that two slots have data in same cache line but with different attributes"
	},
	{.name = "EVENT_005A",
	 .code = 0x5a,
	 .desc = "Dual issue case A (branch)"
	},
	{.name = "EVENT_005B",
	 .code = 0x5b,
	 .desc = "Dual issue case B1, B2, F2 (load/store), F2D"
	},
	{.name = "EVENT_005C",
	 .code = 0x5c,
	 .desc = "Dual issue other case"
	},
	{.name = "EVENT_005D",
	 .code = 0x5d,
	 .desc = "Double precision floating point arithmetic or conversion instruction executed"
	},
	{.name = "EVENT_005E",
	 .code = 0x5e,
	 .desc = "Dual-issued pair of instructions architecturally executed"
	},
	{.name = "EVENT_0060",
	 .code = 0x60,
	 .desc = "Data cache data RAM fatal ECC error"
	},
	{.name = "EVENT_0061",
	 .code = 0x61,
	 .desc = "Data cache tag/dirty RAM fatal ECC error"
	},
	{.name = "EVENT_0062",
	 .code = 0x62,
	 .desc = "Processor livelock because of hard errors or exception at exception vector"
	},
	{.name = "EVENT_0064",
	 .code = 0x64,
	 .desc = "ATCM multi-bit ECC error"
	},
	{.name = "EVENT_0065",
	 .code = 0x65,
	 .desc = "B0TCM multi-bit ECC error"
	},
	{.name = "EVENT_0066",
	 .code = 0x66,
	 .desc = "B1TCM multi-bit ECC error"
	},
	{.name = "EVENT_0067",
	 .code = 0x67,
	 .desc = "ATCM single-bit ECC error"
	},
	{.name = "EVENT_0068",
	 .code = 0x68,
	 .desc = "B0TCM single-bit ECC error"
	},
	{.name = "EVENT_0069",
	 .code = 0x69,
	 .desc = "B1TCM single-bit ECC error"
	},
	{.name = "EVENT_006A",
	 .code = 0x6a,
	 .desc = "TCM correctable ECC error reported by load/store unit"
	},
	{.name = "EVENT_006B",
	 .code = 0x6b,
	 .desc = "TCM correctable ECC error reported by prefetch unit"
	},
	{.name = "EVENT_006C",
	 .code = 0x6c,
	 .desc = "TCM fatal ECC error reported by AXI slave interface"
	},
	{.name = "EVENT_006D",
	 .code = 0x6d,
	 .desc = "TCM correctable ECC error reported by AXI slave interface"
	},
	{.name = "EVENT_006E",
	 .code = 0x6e,
	 .desc = "All correctable events"
	},
	{.name = "EVENT_006F",
	 .code = 0x6f,
	 .desc = "All fatal events"
	},
	{.name = "EVENT_0070",
	 .code = 0x70,
	 .desc = "All correctable bus faults"
	},
	{.name = "EVENT_0071",
	 .code = 0x71,
	 .desc = "All fatal bus faults"
	},
	{.name = "EVENT_0072",
	 .code = 0x72,
	 .desc = "ACP D-Cache access, lookup or invalidate"
	},
	{.name = "EVENT_0073",
	 .code = 0x73,
	 .desc = "ACP D-Cache invalidate"
	},
	/* END Cortex-R5 specific events */
};
