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
 * ARM1136JF-S Event Table
 */
static const arm_entry_t arm_1136_pe[]={
	{.name = "EVENT_0000",
	 .code = 0x00,
	 .desc = "Instruction cache miss to a cacheable location, which requires a fetch from external memory"
	},
	{.name = "EVENT_0001",
	 .code = 0x01,
	 .desc = "Stall because instruction buffer cannot deliver an instruction"
	},
	{.name = "EVENT_0002",
	 .code = 0x02,
	 .desc = "Stall because of a data dependency"
	},
	{.name = "EVENT_0003",
	 .code = 0x03,
	 .desc = "Instruction MicroTLB miss (unused on ARM1156)"
	},
	{.name = "EVENT_0004",
	 .code = 0x04,
	 .desc = "Data MicroTLB miss (unused on ARM1156)"
	},
	{.name = "EVENT_0005",
	 .code = 0x05,
	 .desc = "Branch instruction executed, branch might or might not have changed program flow"
	},
	{.name = "EVENT_0006",
	 .code = 0x06,
	 .desc = "Branch mis-predicted"
	},
	{.name = "EVENT_0007",
	 .code = 0x07,
	 .desc = "Instructions executed"
	},
	{.name = "EVENT_0009",
	 .code = 0x09,
	 .desc = "Data cache access, not including Cache operations"
	},
	{.name = "EVENT_000A",
	 .code = 0x0a,
	 .desc = "Data cache access, not including Cache Operations regardless of whether or not the location is cacheable"
	},
	{.name = "EVENT_000B",
	 .code = 0x0b,
	 .desc = "Data cache miss, not including Cache Operations"
	},
	{.name = "EVENT_000C",
	 .code = 0x0c,
	 .desc = "Data cache write-back"
	},
	{.name = "EVENT_000D",
	 .code = 0x0d,
	 .desc = "Software changed the PC"
	},
	{.name = "EVENT_000F",
	 .code = 0x0f,
	 .desc = "Main TLB miss (unused on ARM1156)"
	},
	{.name = "EVENT_0010",
	 .code = 0x10,
	 .desc = "Explicit external data or peripheral access"
	},
	{.name = "EVENT_0011",
	 .code = 0x11,
	 .desc = "Stall because of Load Store Unit request queue being full"
	},
	{.name = "EVENT_0012",
	 .code = 0x12,
	 .desc = "The number of times the Write Buffer was drained because of a Data Synchronization Barrier command or Strongly Ordered operation"
	},
	{.name = "EVENT_0013",
	 .code = 0x13,
	 .desc = "The number of cycles which FIQ interrupts are disabled (ARM1156 only)"
	},
	{.name = "EVENT_0014",
	 .code = 0x14,
	 .desc = "The number of cycles which IRQ interrupts are disabled (ARM1156 only)"
	},
	{.name = "EVENT_0020",
	 .code = 0x20,
	 .desc = "ETMEXTOUT[0] signal was asserted for a cycle"
	},
	{.name = "EVENT_0021",
	 .code = 0x21,
	 .desc = "ETMEXTOUT[1] signal was asserted for a cycle"
	},
	{.name = "EVENT_0022",
	 .code = 0x22,
	 .desc = "ETMEXTOUT[0] or ETMEXTOUT[1] was asserted"
	},
	{.name = "EVENT_0023",
	 .code = 0x23,
	 .desc = "Procedure call instruction executed"
	},
	{.name = "EVENT_0024",
	 .code = 0x24,
	 .desc = "Procedure return instruction executed"
	},
	{.name = "EVENT_0025",
	 .code = 0x25,
	 .desc = "Procedure return instruction executed and return address predicted"
	},
	{.name = "EVENT_0026",
	 .code = 0x26,
	 .desc = "Procedure return instruction executed and return address predicted incorrectly"
	},
	{.name = "EVENT_0030",
	 .code = 0x30,
	 .desc = "Instruction cache Tag or Valid RAM parity error (ARM1156 only)"
	},
	{.name = "EVENT_0031",
	 .code = 0x31,
	 .desc = "Instruction cache RAM parity error (ARM1156 only)"
	},
	{.name = "EVENT_0032",
	 .code = 0x32,
	 .desc = "Data cache Tag or Valid RAM parity error (ARM1156 only)"
	},
	{.name = "EVENT_0033",
	 .code = 0x33,
	 .desc = "Data cache RAM parity error (ARM1156 only)"
	},
	{.name = "EVENT_0034",
	 .code = 0x34,
	 .desc = "ITCM error (ARM1156 only)"
	},
	{.name = "EVENT_0035",
	 .code = 0x35,
	 .desc = "DTCM error (ARM1156 only)"
	},
	{.name = "EVENT_0036",
	 .code = 0x36,
	 .desc = "Procedure return address popped off the return stack (ARM1156 only)"
	},
	{.name = "EVENT_0037",
	 .code = 0x37,
	 .desc = "Procedure return address popped off the return stack has been incorrectly predicted by the PFU (ARM1156 only)"
	},
	{.name = "EVENT_0038",
	 .code = 0x38,
	 .desc = "Data cache Dirty RAM parity error (ARM1156 only)"
	},
	/* END ARM1136JF-S specific events */
};
