/*
 * Cortex-A715 Event Table
 */
static const arm_entry_t arm_cortex_a715_pe[]={
	{.name = "SW_INCR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x00,
	 .desc = "Instruction architecturally executed, Condition code check pass, software increment This event counts any instruction architecturally executed (condition code check pass)"
	},
	{.name = "L1I_CACHE_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x01,
	 .desc = "Level 1 instruction cache refill This event counts any instruction fetch which misses in the cache"
	},
	{.name = "L1I_TLB_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x02,
	 .desc = "Level 1 instruction TLB refill This event counts any refill of the L1 instruction TLB from the MMU Translation Cache (MMUTC)"
	},
	{.name = "L1D_CACHE_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x03,
	 .desc = "Level 1 data cache refill This event counts any load or store operation or translation table walk that causes data to be read from outside the L1 cache, including accesses which do not allocate into L1"
	},
	{.name = "L1D_CACHE",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x04,
	 .desc = "Level 1 data cache access This event counts any load or store operation or translation table walk that looks up in the L1 data cache"
	},
	{.name = "L1D_TLB_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x05,
	 .desc = "Level 1 data TLB refill This event counts any refill of the data L1 TLB from the L2 TLB"
	},
	{.name = "INST_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x08,
	 .desc = "Instruction architecturally executed This event counts all retired instructions, including ones that fail their condition check"
	},
	{.name = "EXC_TAKEN",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x09,
	 .desc = "Exception taken The counter counts each exception taken"
	},
	{.name = "EXC_RETURN",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x0a,
	 .desc = "Instruction architecturally executed, Condition code check pass, exception return"
	},
	{.name = "CID_WRITE_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x0b,
	 .desc = "Instruction architecturally executed, Condition code check pass, write to CONTEXTIDR This event only counts writes using the CONTEXTIDR_EL1 mnemonic"
	},
	{.name = "PC_WRITE_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x0c,
	 .desc = "Instruction architecturally executed, Condition code check pass, software change of the PC This event counts all branches taken and popped from the branch monitor"
	},
	{.name = "BR_IMMED_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x0d,
	 .desc = "Instruction architecturally executed, immediate branch This event counts all branches decoded as immediate branches, taken or not, and popped from the branch monitor"
	},
	{.name = "BR_RETURN_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x0e,
	 .desc = "Instruction architecturally executed, Condition code check pass, procedure return"
	},
	{.name = "BR_MIS_PRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x10,
	 .desc = "Mispredicted or not predicted branch speculatively executed This event counts any predictable branch instruction which is mispredicted either due to dynamic misprediction or because the MMU is off and the branches are statically predicted not taken"
	},
	{.name = "CPU_CYCLES",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x11,
	 .desc = "Cycle"
	},
	{.name = "BR_PRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x12,
	 .desc = "Predictable branch speculatively executed This event counts all predictable branches"
	},
	{.name = "MEM_ACCESS",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x13,
	 .desc = "Data memory access This event counts memory accesses due to load or store instructions"
	},
	{.name = "L1I_CACHE",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x14,
	 .desc = "Level 1 instruction cache access This event counts any instruction fetch which accesses the L1 instruction cache"
	},
	{.name = "L1D_CACHE_WB",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x15,
	 .desc = "Level 1 data cache write-back This event counts any write-back of data from the L1 data cache to L2 or L3"
	},
	{.name = "L2D_CACHE",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x16,
	 .desc = "Level 2 data cache access - If the core is configured with a per-core L2 cache, this event counts any transaction from L1 which looks up in the L2 cache, and any writeback from the L1 to the L2"
	},
	{.name = "L2D_CACHE_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x17,
	 .desc = "Level 2 data cache refill - If the core is configured with a per-core L2 cache, this event counts any Cacheable transaction from L1 which causes data to be read from outside the core"
	},
	{.name = "L2D_CACHE_WB",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x18,
	 .desc = "Level 2 data cache write-back If the core is configured with a per-core L2 cache, this event counts any write-back of data from the L2 cache to a location outside the core"
	},
	{.name = "BUS_ACCESS",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x19,
	 .desc = "This event counts for every beat of data that is transferred over the data channels between the core and the SCU"
	},
	{.name = "INST_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x1b,
	 .desc = "Operation speculatively executed This event duplicates INST_RETIRED"
	},
	{.name = "TTBR_WRITE_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x1c,
	 .desc = "Instruction architecturally executed, condition code check pass, write to TTBR This event only counts writes to TTBR0/TTBR1 in AArch32 and TTBR0_EL1/TTBR1_EL1 in AArch64"
	},
	{.name = "BUS_CYCLES",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x1d,
	 .desc = "Bus cycle This event duplicates CPU_CYCLES"
	},
	{.name = "L2D_CACHE_ALLOCATE",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x20,
	 .desc = "Level 2 data cache allocation without refill This event counts any full cache line write into the L2 cache which does not cause a linefill, including write-backs from L1 to L2 and full-line writes which do not allocate into L1"
	},
	{.name = "BR_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x21,
	 .desc = "Instruction architecturally executed, branch This event counts all branches, taken or not, popped from the branch monitor"
	},
	{.name = "BR_MIS_PRED_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x22,
	 .desc = "Instruction architecturally executed, mispredicted branch This event counts any branch that is counted by BR_RETIRED which is not correctly predicted and causes a pipeline clean"
	},
	{.name = "STALL_FRONTEND",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x23,
	 .desc = "No operation has been issued, because of the frontend The counter counts on any cycle when no operations are issued due to the instruction queue being empty"
	},
	{.name = "STALL_BACKEND",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x24,
	 .desc = "No operation has been issued, because of the backend The counter counts on any cycle when no operations are issued due to a pipeline stall"
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
	 .desc = "Attributable level 3 data or unified cache allocation without refill This event counts any full cache line write into the L3 cache which does not cause a linefill, including write-backs from L2 to L3 and full-line writes which do not allocate into L2"
	},
	{.name = "L3D_CACHE_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x2a,
	 .desc = "Attributable level 3 data or unified cache refill This event counts for any cacheable read transaction returning data from the SCU for which the data source was outside the cluster"
	},
	{.name = "L3D_CACHE",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x2b,
	 .desc = "Attributable level 3 data or unified cache access This event counts for any cacheable read, write or write-back transaction sent to the SCU"
	},
	{.name = "L2D_TLB_REFILL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x2d,
	 .desc = "Level 2 data TLB refill This event counts on any refill of the L2 TLB, caused by either an instruction or data access"
	},
	{.name = "L2D_TLB",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x2f,
	 .desc = "Level 2 data TLB access Attributable level 2 unified TLB access"
	},
	{.name = "REMOTE_ACCESS",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x31,
	 .desc = "Access to another socket in a multi-socket system This event counts any transactions returning data from another socket in a multi-socket system"
	},
	{.name = "DTLB_WALK",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x34,
	 .desc = "Data TLB access with at least one translation table walk Access to data TLB that caused a translation table walk"
	},
	{.name = "ITLB_WALK",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x35,
	 .desc = "Instruction TLB access with at least one translation table walk Access to instruction TLB that caused a translation table walk"
	},
	{.name = "LL_CACHE_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x36,
	 .desc = "Last level cache access, read This event counts any cacheable read transaction which returns a data source of 'interconnect cache', 'DRAM', 'remote' or 'inter-cluster peer'"
	},
	{.name = "LL_CACHE_MISS_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x37,
	 .desc = "Last Level cache miss read This event counts any cacheable read transaction which returns a data source of 'DRAM', 'remote' or 'inter-cluster peer'"
	},
	{.name = "L1D_CACHE_LMISS_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x39,
	 .desc = "Level 1 data cache long-latency read miss Level 1 data cache access, read"
	},
	{.name = "OP_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x3a,
	 .desc = "Micro-operation architecturally executed This event counts each operation counted by OP_SPEC that would be executed in a simple sequential execution of the program"
	},
	{.name = "OP_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x3b,
	 .desc = "Micro-operation speculatively executed This event counts the number of operations executed by the core, including those that are executed speculatively and would not be executed in a simple sequential execution of the program"
	},
	{.name = "STALL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x3c,
	 .desc = "No operation sent for execution This event counts every Attributable cycle on which no Attributable instruction or operation was sent for execution on this core"
	},
	{.name = "STALL_SLOT_BACKEND",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x3d,
	 .desc = "No operation sent for execution on a slot due to the backend Counts each slot counted by STALL_SLOT where no Attributable instruction or operation was sent for execution because the backend is unable to accept one of: - The instruction operation available for the PE on the slot"
	},
	{.name = "STALL_SLOT_FRONTEND",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x3e,
	 .desc = "No operation sent for execution on a slot due to the frontend Counts each slot counted by STALL_SLOT where no Attributable instruction or operation was sent for execution because there was no Attributable instruction or operation available to issue from the PE from the frontend for the slot"
	},
	{.name = "STALL_SLOT",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x3f,
	 .desc = "No operation sent for execution on a slot The counter counts on each Attributable cycle the number of instruction or operation slots that are not occupied by an instruction or operation Attributable to the PE"
	},
	{.name = "L1D_CACHE_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x40,
	 .desc = "Level 1 data cache access, read Counts any load operation or translation table walk access which looks up in the L1 data cache"
	},
	{.name = "L1D_CACHE_WR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x41,
	 .desc = "Level 1 data cache access, write Counts any store operation which looks up in the L1 data cache"
	},
	{.name = "L1D_CACHE_REFILL_INNER",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x44,
	 .desc = "Level 1 data cache refill, inner This event counts any L1 data cache linefill (as counted by L1D_CACHE_REFILL) which hits in the L2 cache, L3 cache, or another core in the cluster"
	},
	{.name = "L1D_CACHE_REFILL_OUTER",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x45,
	 .desc = "Level 1 data cache refill, outer This event counts any L1 data cache linefill (as counted by L1D_CACHE_REFILL) which does not hit in the L2 cache, L3 cache, or another core in the cluster, and instead obtains data from outside the cluster"
	},
	{.name = "L1D_CACHE_INVAL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x48,
	 .desc = "Level 1 data cache invalidate"
	},
	{.name = "L2D_CACHE_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x50,
	 .desc = "Level 2 data cache access, read This event counts any transaction issued from L1 caches which looks up in the L2 cache, including requests for instructions fetches and MMU table walks"
	},
	{.name = "L2D_CACHE_WR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x51,
	 .desc = "Level 2 data cache access, write This event counts any full cache line write into the L2 cache which does not cause a linefill, including write-backs from L1 to L2, full-line writes which do not allocate into L1 and MMU descriptor hardware updates performed in L2"
	},
	{.name = "L2D_CACHE_REFILL_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x52,
	 .desc = "Level 2 data cache refill, read This event counts any cacheable transaction generated by a read operation which causes data to be read from outside the L2"
	},
	{.name = "L2D_CACHE_REFILL_WR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x53,
	 .desc = "Level 2 data cache refill, write This event counts any cacheable transaction generated by a store operation which causes data to be read from outside the L2"
	},
	{.name = "L2D_CACHE_WB_VICTIM",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x56,
	 .desc = "Level 2 data cache write-back, victim This event counts any datafull write-back operation caused by allocations"
	},
	{.name = "L2D_CACHE_WB_CLEAN",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x57,
	 .desc = "Level 2 data cache write-back, cleaning, and coherency This event counts any datafull write-back operation caused by cache maintenance operations or external coherency requests"
	},
	{.name = "L2D_CACHE_INVAL",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x58,
	 .desc = "Level 2 data cache invalidate This event counts any cache maintenance operation which causes the invalidation of a line present in the L2 cache"
	},
	{.name = "BUS_ACCESS_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x60,
	 .desc = "Bus access, read This event counts for every beat of data that is transferred over the read data channel between the core and the SCU"
	},
	{.name = "BUS_ACCESS_WR",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x61,
	 .desc = "Bus access, write This event counts for every beat of data that is transferred over the write data channel between the core and the SCU"
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
	{.name = "STREX_FAIL_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x6e,
	 .desc = "Exclusive operation speculatively executed, Store-Exclusive fail"
	},
	{.name = "STREX_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x6f,
	 .desc = "Exclusive operation speculatively executed, Store-Exclusive"
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
	 .desc = "Operation speculatively executed, integer data processing"
	},
	{.name = "ASE_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x74,
	 .desc = "Operation speculatively executed, Advanced SIMD"
	},
	{.name = "VFP_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x75,
	 .desc = "Operation speculatively executed, floating-point"
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
	 .desc = "Exception taken, other synchronous Counts the number of undefined exceptions taken locally"
	},
	{.name = "EXC_SVC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x82,
	 .desc = "Exception taken, Supervisor Call Exception taken locally, Supervisor Call"
	},
	{.name = "EXC_PABORT",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x83,
	 .desc = "Exception taken, Instruction Abort Exception taken locally, Instruction Abort"
	},
	{.name = "EXC_DABORT",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x84,
	 .desc = "Exception taken, Data Abort or SError Exception taken locally, Data Abort and SError"
	},
	{.name = "EXC_IRQ",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x86,
	 .desc = "Exception taken, IRQ Exception taken locally, IRQ"
	},
	{.name = "EXC_FIQ",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x87,
	 .desc = "Exception taken, FIQ Exception taken locally, FIQ"
	},
	{.name = "EXC_SMC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x88,
	 .desc = "Exception taken, Secure Monitor Call Exception taken locally, Secure Monitor Call"
	},
	{.name = "EXC_HVC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8a,
	 .desc = "Exception taken, Hypervisor Call Exception taken locally, Hypervisor Call"
	},
	{.name = "EXC_TRAP_PABORT",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8b,
	 .desc = "Exception taken, Instruction Abort not Taken locally"
	},
	{.name = "EXC_TRAP_DABORT",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8c,
	 .desc = "Exception taken, Data Abort or SError not Taken locally"
	},
	{.name = "EXC_TRAP_OTHER",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8d,
	 .desc = "Exception taken, other traps not Taken locally"
	},
	{.name = "EXC_TRAP_IRQ",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8e,
	 .desc = "Exception taken, IRQ not Taken locally"
	},
	{.name = "EXC_TRAP_FIQ",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8f,
	 .desc = "Exception taken, FIQ not Taken locally"
	},
	{.name = "RC_LD_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x90,
	 .desc = "Release consistency operation speculatively executed, Load-Acquire"
	},
	{.name = "RC_ST_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x91,
	 .desc = "Release consistency operation speculatively executed, Store-Release"
	},
	{.name = "L3D_CACHE_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0xa0,
	 .desc = "Level 3 cache read This event counts for any cacheable read transaction sent to the SCU"
	},
	{.name = "SAMPLE_POP",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4000,
	 .desc = "Statistical Profiling sample population The counter increments for each operation that might be sampled, whether or not the operation was sampled"
	},
	{.name = "SAMPLE_FEED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4001,
	 .desc = "Statistical Profiling sample taken The counter increments each time the sample interval counter reaches zero and is reloaded, and the sample does not collide with the previous sample"
	},
	{.name = "SAMPLE_FILTRATE",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4002,
	 .desc = "Statistical Profiling sample taken and not removed by filtering The counter increments each time that a completed sample record is checked against the filters and not removed"
	},
	{.name = "SAMPLE_COLLISION",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4003,
	 .desc = "Statistical Profiling sample collided with previous sample The counter increments for each sample record that is taken when the previous sampled operation has not completed generating its sample record"
	},
	{.name = "CNT_CYCLES",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4004,
	 .desc = "Constant frequency cycles"
	},
	{.name = "STALL_BACKEND_MEM",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4005,
	 .desc = "Memory stall cycles The counter is defined identically to STALL_BACKEND_MEM in the AMUv1 architecture"
	},
	{.name = "L1I_CACHE_LMISS",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4006,
	 .desc = "Level 1 instruction cache long-latency miss The counter counts each access counted by L1I_CACHE that incurs additional latency because it returns instructions from outside the Level 1 instruction cache"
	},
	{.name = "L2D_CACHE_LMISS_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4009,
	 .desc = "Level 2 data cache long-latency read miss The counter counts each memory read access counted by L2D_CACHE that incurs additional latency because it returns data from outside the Level 2 data or unified cache of this PE"
	},
	{.name = "L3D_CACHE_LMISS_RD",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x400b,
	 .desc = "Level 3 data cache long-latency read miss The counter counts each memory read access counted by L3D_CACHE that incurs additional latency because it returns data from outside the Level 3 data or unified cache of this PE"
	},
	{.name = "TRB_WRAP",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x400c,
	 .desc = "Trace buffer current write pointer wrapped"
	},
	{.name = "PMU_OVFS",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x400d,
	 .desc = "PMU overflow, counters accessible to EL1 and EL0 Note: This event is exported to the trace unit, but cannot be counted in the PMU"
	},
	{.name = "TRB_TRIG",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x400e,
	 .desc = "Trace buffer Trigger Event Note: This event is exported to the trace unit, but cannot be counted in the PMU"
	},
	{.name = "PMU_HOVFS",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x400f,
	 .desc = "PMU overflow, counters reserved for use by EL2 Note: This event is exported to the trace unit, but cannot be counted in the PMU"
	},
	{.name = "TRCEXTOUT0",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4010,
	 .desc = "PE Trace Unit external output 0 Note: This event is not exported to the trace unit"
	},
	{.name = "TRCEXTOUT1",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4011,
	 .desc = "PE Trace Unit external output 1 Note: This event is not exported to the trace unit"
	},
	{.name = "TRCEXTOUT2",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4012,
	 .desc = "PE Trace Unit external output 2 Note: This event is not exported to the trace unit"
	},
	{.name = "TRCEXTOUT3",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4013,
	 .desc = "PE Trace Unit external output 3 Note: This event is not exported to the trace unit"
	},
	{.name = "CTI_TRIGOUT4",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4018,
	 .desc = "Cross Trigger Interface output trigger 4"
	},
	{.name = "CTI_TRIGOUT5",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4019,
	 .desc = "Cross Trigger Interface output trigger 5"
	},
	{.name = "CTI_TRIGOUT6",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x401a,
	 .desc = "Cross Trigger Interface output trigger 6"
	},
	{.name = "CTI_TRIGOUT7",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x401b,
	 .desc = "Cross Trigger Interface output trigger 7"
	},
	{.name = "LDST_ALIGN_LAT",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x4020,
	 .desc = "Access with additional latency from alignment The counter counts each access counted by MEM_ACCESS that, due to the alignment of the address and size of data being accessed, incurred additional latency"
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
	 .desc = "SVE operation, including load/store"
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
	 .desc = "SVE predicated operations with all active predicates speculatively executed"
	},
	{.name = "SVE_PRED_PARTIAL_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8077,
	 .desc = "SVE predicated operations with partially active predicates speculatively executed"
	},
	{.name = "SVE_PRED_NOT_FULL_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8079,
	 .desc = "SVE predicated operations with no or partially active predicates speculatively executed"
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
	 .desc = "Advanced SIMD and SVE 8-bit integer operation speculatively executed"
	},
	{.name = "ASE_SVE_INT16_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x80e7,
	 .desc = "Advanced SIMD and SVE 16-bit integer operation speculatively executed"
	},
	{.name = "ASE_SVE_INT32_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x80eb,
	 .desc = "Advanced SIMD and SVE 32-bit integer operation speculatively executed"
	},
	{.name = "ASE_SVE_INT64_SPEC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x80ef,
	 .desc = "Advanced SIMD and SVE 64-bit integer operation speculatively executed"
	},
	{.name = "BR_IMMED_TAKEN_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8108,
	 .desc = "Instruction architecturally executed, immediate branch taken"
	},
	{.name = "BR_INDNR_TAKEN_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x810c,
	 .desc = "Instruction architecturally executed, indirect branch excluding procedure return retired"
	},
	{.name = "BR_IND_RETIRED",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x811d,
	 .desc = "Instruction architecturally executed, indirect branch"
	},
	{.name = "DTLB_WALK_PERCYC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8128,
	 .desc = "Total cycles, DTLB_WALK The counter counts by the number of data TLB walk events in progress on each processor cycle"
	},
	{.name = "ITLB_WALK_PERCYC",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8129,
	 .desc = "Total cycles, ITLB_WALK The counter counts by the number of instruction TLB walk events in progress on each processor cycle"
	},
	{.name = "DTLB_STEP",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8136,
	 .desc = "Data TLB translation table walk, step The counter counts each translation table walk access made by a refill of the data or unified TLB"
	},
	{.name = "ITLB_STEP",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8137,
	 .desc = "Instruction TLB translation table walk, step The counter counts each translation table walk access made by a refill of the instruction TLB"
	},
	{.name = "STALL_FRONTEND_FLUSH",
	 .modmsk = ARMV9_ATTRS,
	 .code = 0x8162,
	 .desc = "No operation sent for execution due to the frontend flush recovery"
	},
	/* END Cortex-A715 specific events */
};
