/*
 * Cortex A510 r0p3
 * based on Table C17-1 from the "Cortex A510 Technical Reference Manual"
 */

static const arm_entry_t arm_cortex_a510_pe[] = {
        {.name = "L1I_CACHE_REFILL",
         .modmsk = ARMV9_ATTRS,
         .code = 0x1,
         .desc = "L1 instruction cache refill. This event counts any "
                 "instruction fetch that misses in the cache. The following "
                 "instructions are not counted: - Cache maintenance "
                 "instructions - Non-cacheable accesses"},
        {.name = "L1I_TLB_REFILL",
         .modmsk = ARMV9_ATTRS,
         .code = 0x2,
         .desc = "L1 instruction TLB refill. This event counts any refill of "
                 "the instruction L1 TLB from the L2 TLB, including refills "
                 "that result in a translation fault. TLB maintenance "
                 "instructions are not counted. This event counts regardless "
                 "of whether the Memory Management Unit (MMU) is enabled"},
        {.name = "L1D_CACHE_REFILL",
         .modmsk = ARMV9_ATTRS,
         .code = 0x3,
         .desc = "L1 data cache refill. This event counts any load or store "
                 "operation or translation table walk that causes data to be "
                 "read from outside the L1 cache. The event includes accesses "
                 "that do not allocate into the L1 cache. The following "
                 "instructions are not counted: - Cache maintenance "
                 "instructions and prefetches - Stores of an entire cache "
                 "line, even if they make a coherency request outside the L1 "
                 "cache - Partial cache line writes that do not allocate into "
                 "the L1 cache - Non-cacheable accesses This event counts the "
                 "sum of L1D_CACHE_REFILL_RD and L1D_CACHE_REFILL_WR"},
        {.name = "L1D_CACHE",
         .modmsk = ARMV9_ATTRS,
         .code = 0x4,
         .desc = "L1 data cache access. This event counts any load or store "
                 "operation or translation table walk that looks up in the L1 "
                 "data cache. In particular, any access that could count the "
                 "L1D_CACHE_REFILL event causes this event to count. The "
                 "following instructions are not counted: - Cache maintenance "
                 "instructions and prefetches - Non-cacheable accesses This "
                 "event counts the sum of L1D_CACHE_RD and L1D_CACHE_WR"},
        {.name = "L1D_TLB_REFILL",
         .modmsk = ARMV9_ATTRS,
         .code = 0x5,
         .desc = "L1 data TLB refill. This event counts any refill of the L1 "
                 "data TLB from the L2 TLB, including refills that result in a "
                 "translation fault. TLB maintenance instructions are not "
                 "counted. This event counts regardless of whether the MMU is "
                 "enabled"},
        {.name = "LD_RETIRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0x6,
         .desc = "Instruction architecturally executed, condition code check "
                 "pass, load. This event counts all load and prefetch "
                 "instructions, including the Armv8.1-A atomic instructions, "
                 "other than the ST* variants"},
        {.name = "ST_RETIRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0x7,
         .desc = "Instruction architecturally executed, condition code check "
                 "pass, store. This event counts all store instructions and "
                 "the Data Cache Zero by Virtual Address (DC ZVA) instruction. "
                 "The event includes all the Armv8.1-A atomic instructions. "
                 "Store-Exclusive instructions that fail are not counted"},
        {.name = "INST_RETIRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0x8,
         .desc = "Instruction architecturally executed. This event counts all "
                 "retired instructions, including ones that fail their "
                 "condition check"},
        {.name = "EXC_TAKEN",
         .modmsk = ARMV9_ATTRS,
         .code = 0x9,
         .desc = "Exception taken"},
        {.name = "EXC_RETURN",
         .modmsk = ARMV9_ATTRS,
         .code = 0xa,
         .desc = "Instruction architecturally executed, condition code check "
                 "pass, exception return"},
        {.name = "CID_WRITE_RETIRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0xb,
         .desc = "Instruction architecturally executed, condition code check "
                 "pass, write to CONTEXTIDR. This event only counts writes to "
                 "CONTEXTIDR in AArch32, and counts writes using the "
                 "CONTEXTIDR_EL1 mnemonic in AArch64. Writes to "
                 "CONTEXTIDR_EL12 are not counted"},
        {.name = "PC_WRITE_RETIRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0xc,
         .desc = "Instruction architecturally executed, condition code check "
                 "pass, software change of the Program Counter. This event "
                 "counts all taken branches, excluding exception entries or "
                 "breakpoint instructions"},
        {.name = "BR_IMMED_RETIRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0xd,
         .desc = "Instruction architecturally executed, immediate branch. This "
                 "event counts all branches decoded as immediate branches, "
                 "taken or not, excluding exception entries and debug entries"},
        {.name = "BR_RETURN_RETIRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0xe,
         .desc = "Instruction architecturally executed, condition code check "
                 "pass, procedure return"},
        {.name = "BR_MIS_PRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0x10,
         .desc = "Mispredicted or not predicted branch speculatively executed. "
                 "This event counts any predictable branch instruction that is "
                 "mispredicted for either of the following reasons: - Dynamic "
                 "misprediction - The MMU is off and the branches are "
                 "statically predicted not taken"},
        {.name = "CPU_CYCLES",
         .modmsk = ARMV9_ATTRS,
         .code = 0x11,
         .desc = "Cycle. This event is not exported to the ETM"},
        {.name = "BR_PRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0x12,
         .desc = "Predictable branch speculatively executed. This event counts "
                 "all predictable branches"},
        {.name = "MEM_ACCESS",
         .modmsk = ARMV9_ATTRS,
         .code = 0x13,
         .desc = "Data memory access. This event counts memory accesses due to "
                 "load or store instructions. Memory accesses are not counted "
                 "if they are caused by any of the following actions: - "
                 "Instruction fetches - Cache maintenance instructions - "
                 "Translation table walks or prefetches This event counts the "
                 "sum of MEM_ACCESS_RD and MEM_ACCESS_WR"},
        {.name = "L1I_CACHE",
         .modmsk = ARMV9_ATTRS,
         .code = 0x14,
         .desc = "L1 instruction cache access. This event counts any "
                 "instruction fetch that accesses the L1 instruction cache. "
                 "The following instructions are not counted: - Cache "
                 "maintenance instructions - Non-cacheable accesses"},
        {.name = "L1D_CACHE_WB",
         .modmsk = ARMV9_ATTRS,
         .code = 0x15,
         .desc = "L1 data cache Write-Back. This event counts any write-back "
                 "of data from the L1 data cache to the L2 cache or the L3 "
                 "cache. The event counts both victim line evictions and "
                 "snoops, including cache maintenance operations. The "
                 "following actions are not counted: - Invalidations that do "
                 "not result in data being transferred out of the L1 cache - "
                 "Full-line writes that write to L2 cache without writing L1 "
                 "cache, such as write-streaming mode"},
        {.name = "L2D_CACHE",
         .modmsk = ARMV9_ATTRS,
         .code = 0x16,
         .desc = "Level 2 data cache access. If the complex is configured with "
                 "a per-complex L2 cache, this event counts: - Any transaction "
                 "from the L1 cache that looks up in the L2 cache - Any "
                 "write-back from the L1 cache to the L2 cache Snoops from "
                 "outside the complex and cache maintenance operations are not "
                 "counted. If the complex is not configured with a per-complex "
                 "L2 cache, this event counts the cluster cache event, as "
                 "defined by L3D_CACHE. If neither a per-complex cache or a "
                 "cluster cache are configured, this event is not implemented"},
        {.name = "L2D_CACHE_REFILL",
         .modmsk = ARMV9_ATTRS,
         .code = 0x17,
         .desc = "Level 2 data cache refill. If the complex is configured with "
                 "a per-complex L2 cache, this event counts any Cacheable "
                 "transaction from L1 that causes data to be read from outside "
                 "the complex. L2 cache refills that are caused by stashes "
                 "into the L2 cache are not counted. If the complex is not "
                 "configured with a per-complex L2 cache, this event is not "
                 "implemented"},
        {.name = "L2D_CACHE_WB",
         .modmsk = ARMV9_ATTRS,
         .code = 0x18,
         .desc = "Level 2 data cache Write-Back. If the complex is configured "
                 "with a per-complex L2 cache, this event counts any "
                 "write-back of data from the L2 cache to a location outside "
                 "the complex. The event includes snoops to the L2 cache that "
                 "return data, regardless of whether they cause an "
                 "invalidation. Invalidations from the L2 cache that do not "
                 "write data outside of the complex and snoops that return "
                 "data from the L1 cache are not counted. If the complex is "
                 "not configured with a per-complex L2 cache, this event is "
                 "not implemented"},
        {.name = "BUS_ACCESS",
         .modmsk = ARMV9_ATTRS,
         .code = 0x19,
         .desc = "Bus access. This event counts for every beat of data that is "
                 "transferred over the data channels between the complex and "
                 "the Theodul DynamIQ Shared Unit (Theodul DSU). If both read "
                 "and write data beats are transferred on a given cycle, this "
                 "event is counted twice on that cycle. This event counts the "
                 "sum of BUS_ACCESS_RD and BUS_ACCESS_WR"},
        {.name = "MEMORY_ERROR",
         .modmsk = ARMV9_ATTRS,
         .code = 0x1a,
         .desc = "Local memory error. This event counts any correctable or "
                 "uncorrectable memory error (ECC or parity) in the protected "
                 "core RAMs"},
        {.name = "INST_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x1b,
         .desc = "Operation Speculatively executed. This event counts issued "
                 "instructions, including instructions that are later flushed "
                 "due to misspeculation"},
        {.name = "TTBR_WRITE_RETIRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0x1c,
         .desc = "Instruction architecturally executed, Condition code check "
                 "pass, write to TTBR. This event counts writes to TTBR0 and "
                 "TTBR1 in AArch32, and counts writes to TTBR0_EL1 and "
                 "TTBR1_EL1 in AArch64"},
        {.name = "BUS_CYCLES",
         .modmsk = ARMV9_ATTRS,
         .code = 0x1d,
         .desc = "Bus cycles. This event duplicates CPU_CYCLES. This event is "
                 "not exported to the ETM"},
        {.name = "CHAIN",
         .modmsk = ARMV9_ATTRS,
         .code = 0x1e,
         .desc = "Odd performance counter chain mode. This event is not "
                 "exported to the ETM"},
        {.name = "L2D_CACHE_ALLOCATE",
         .modmsk = ARMV9_ATTRS,
         .code = 0x20,
         .desc = "Level 2 data cache allocation without refill. If the complex "
                 "is configured with a per-complex L2 cache, this event counts "
                 "any full cache line write into the L2 cache that does not "
                 "cause a linefill. The event includes write-backs from L1 to "
                 "L2 and full-line writes that do not allocate into the L1 "
                 "cache. If the complex is not configured with a per-complex "
                 "L2 cache, this event is not implemented"},
        {.name = "BR_RETIRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0x21,
         .desc = "Instruction architecturally executed, branch"},
        {.name = "BR_MIS_PRED_RETIRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0x22,
         .desc = "Instruction architecturally executed, mispredicted branch. "
                 "The counter counts all instructions counted by BR_RETIRED "
                 "that were not correctly predicted"},
        {.name = "STALL_FRONTEND",
         .modmsk = ARMV9_ATTRS,
         .code = 0x23,
         .desc = "No operation issued due to the frontend. The counter counts "
                 "on any cycle when no operations are issued due to the "
                 "instruction queue being empty"},
        {.name = "STALL_BACKEND",
         .modmsk = ARMV9_ATTRS,
         .code = 0x24,
         .desc = "No operation issued due to the backend. The counter counts "
                 "on any cycle when no operations are issued due to a pipeline "
                 "stall"},
        {.name = "L1D_TLB",
         .modmsk = ARMV9_ATTRS,
         .code = 0x25,
         .desc = "Level 1 data TLB access. This event counts any load or store "
                 "operation that accesses the L1 data TLB. If both a load and "
                 "a store are executed on a cycle, this event counts twice. "
                 "This event counts regardless of whether the MMU is enabled"},
        {.name = "L1I_TLB",
         .modmsk = ARMV9_ATTRS,
         .code = 0x26,
         .desc = "Level 1 instruction TLB access. This event counts any "
                 "instruction fetch that accesses the L1 instruction TLB. This "
                 "event counts regardless of whether the MMU is enabled"},
        {.name = "L3D_CACHE",
         .modmsk = ARMV9_ATTRS,
         .code = 0x2b,
         .desc = "Attributable level 3 unified cache access. If the complex is "
                 "configured with a per-complex L2 cache and the cluster is "
                 "configured with an L3 cache, this event counts for any "
                 "cacheable read transaction returning data from the Theodul "
                 "DSU, or for any cacheable write to the Theodul DSU. If "
                 "either the complex is configured without a per-complex L2 or "
                 "the cluster is configured without an L3 cache, this event is "
                 "not implemented"},
        {.name = "L2D_TLB_REFILL",
         .modmsk = ARMV9_ATTRS,
         .code = 0x2d,
         .desc = "Attributable Level 2 data TLB refill. This event counts on "
                 "any refill of the L2 TLB, caused by either an instruction or "
                 "data access. This event does not count if the MMU is "
                 "disabled"},
        {.name = "L2D_TLB",
         .modmsk = ARMV9_ATTRS,
         .code = 0x2f,
         .desc = "Attributable Level 2 data or unified TLB access. This event "
                 "counts on any access to the L2 TLB that is caused by a "
                 "refill of any of the L1 TLBs. This event does not count if "
                 "the MMU is disabled"},
        {.name = "DTLB_WALK",
         .modmsk = ARMV9_ATTRS,
         .code = 0x34,
         .desc = "Access to data TLB that caused a translation table walk. "
                 "This event counts on any data access that causes "
                 "L2D_TLB_REFILL to count"},
        {.name = "ITLB_WALK",
         .modmsk = ARMV9_ATTRS,
         .code = 0x35,
         .desc = "Access to instruction TLB that caused a translation table "
                 "walk. This event counts on any instruction access that "
                 "causes L2D_TLB_REFILL to count"},
        {.name = "LL_CACHE_RD",
         .modmsk = ARMV9_ATTRS,
         .code = 0x36,
         .desc = "Last level cache access, read. If IMP_CPUECTLR_EL1.EXTLLC is "
                 "set, this event counts any cacheable read transaction that "
                 "returns a data source of ' interconnect cache "
                 "'. If IMP_CPUECTLR_EL1.EXTLLC is not set, this event is a "
                 "duplicate of the L*D_CACHE_RD event corresponding to the "
                 "last level of cache implemented in the cluster. That is: - "
                 "L3D_CACHE_RD, if both per-complex L2 cache and cluster L3 "
                 "cache are implemented - L2D_CACHE_RD, if only one of these "
                 "caches are implemented - L1D_CACHE_RD, if neither of these "
                 "caches are implemented"},
        {.name = "LL_CACHE_MISS_RD",
         .modmsk = ARMV9_ATTRS,
         .code = 0x37,
         .desc = "Last level cache miss, read. If IMP_CPUECTLR_EL1.EXTLLC is "
                 "set, this event counts any cacheable read transaction that "
                 "returns a data source of ' DRAM ', ' remote ', or ' inter - "
                 "cluster peer "
                 "'. If IMP_CPUECTLR_EL1.EXTLLC is not set, this event is a "
                 "duplicate of the event that corresponds to the last level of "
                 "cache implemented in the cluster. Therefore, this event is a "
                 "duplicate of: - L3D_CACHE_REFILL_RD, if both per-complex L2 "
                 "cache and cluster L3 cache are implemented - "
                 "L2D_CACHE_REFILL_RD, if only one is implemented - "
                 "L1D_CACHE_REFILL_RD, if neither is implemented"},
        {.name = "REMOTE_ACCESS_RD",
         .modmsk = ARMV9_ATTRS,
         .code = 0x38,
         .desc = "Access to another socket in a multi-socket system, read. "
                 "This event counts any read transaction that returns a data "
                 "source of ' remote '"},
        {.name = "L1D_CACHE_LMISS_RD",
         .modmsk = ARMV9_ATTRS,
         .code = 0x39,
         .desc = "Level 1 data cache long-latency read miss. This event counts "
                 "each memory read access counted by L1D_CACHE that incurs "
                 "additional latency because it returns data from outside the "
                 "L1 data or unified cache of this Processing Element (PE)"},
        {.name = "OP_RETIRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0x3a,
         .desc = "Micro-operation architecturally executed This event counts "
                 "each operation counted by OP_SPEC that would be executed in "
                 "a Simple sequential execution of the program"},
        {.name = "OP_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x3b,
         .desc = "Micro-operation Speculatively executed This event counts the "
                 "number of operations executed by the core, including those "
                 "that are executed speculatively and would not be executed in "
                 "a Simple sequential execution of the program"},
        {.name = "STALL",
         .modmsk = ARMV9_ATTRS,
         .code = 0x3c,
         .desc = "No operation sent for execution The counter counts every "
                 "Attributable cycle on which no Attributable instruction or "
                 "operation was sent for execution on this core"},
        {.name = "STALL_SLOT_BACKEND",
         .modmsk = ARMV9_ATTRS,
         .code = 0x3d,
         .desc = "No operation sent for execution on a Slot due to the backend "
                 "The counter counts each Slot counted by STALL_SLOT where no "
                 "Attributable instruction or operation was sent for execution "
                 "because the backend is unable to accept one of: - The "
                 "instruction operation available for the PE on the Slot - Any "
                 "operations on the Slot"},
        {.name = "STALL_SLOT_FRONTEND",
         .modmsk = ARMV9_ATTRS,
         .code = 0x3e,
         .desc = "No operation sent for execution on a Slot due to the "
                 "frontend The counter counts each Slot counted by STALL_SLOT "
                 "where no Attributable instruction or operation was sent for "
                 "execution because there was no Attributable instruction or "
                 "operation available to issue from the PE from the frontend "
                 "for the Slot"},
        {.name = "STALL_SLOT",
         .modmsk = ARMV9_ATTRS,
         .code = 0x3f,
         .desc = "No operation sent for execution on a Slot The counter counts "
                 "on each Attributable cycle the number of instruction or "
                 "operation Slots that were not occupied by an instruction or "
                 "operation Attributable to the PE"},
        {.name = "L1D_CACHE_RD",
         .modmsk = ARMV9_ATTRS,
         .code = 0x40,
         .desc = "Level 1 data cache access, read. This event counts any load "
                 "operation or translation table walk access which looks up in "
                 "the L1 data cache. In particular, any access which could "
                 "count the L1D_CACHE_REFILL_RD event causes this event to "
                 "count The following instructions are not counted: - Cache "
                 "maintenance instructions and prefetches - Non-cacheable "
                 "accesses"},
        {.name = "L1D_CACHE_WR",
         .modmsk = ARMV9_ATTRS,
         .code = 0x41,
         .desc = "L1 data cache access, write. Counts any store operation that "
                 "looks up in the L1 data cache. In particular, any access "
                 "that could count the L1D_CACHE_REFILL event causes this "
                 "event to count. Cache maintenance instructions, "
                 "Non-cacheable accesses, and prefetches are not counted"},
        {.name = "L1D_CACHE_REFILL_RD",
         .modmsk = ARMV9_ATTRS,
         .code = 0x42,
         .desc = "L1 data cache refill, read. This event counts any load "
                 "operation or translation table walk access that causes data "
                 "to be read from outside the L1 data cache. The event "
                 "includes accesses that do not allocate into the L1 cache. "
                 "Cache maintenance instructions, Non-cacheable accesses, and "
                 "prefetches are not counted"},
        {.name = "L1D_CACHE_REFILL_WR",
         .modmsk = ARMV9_ATTRS,
         .code = 0x43,
         .desc = "L1 data cache refill, write. This event counts any store "
                 "operation that causes data to be read from outside the L1 "
                 "data cache, including accesses that do not allocate into the "
                 "L1 cache. The following instructions are not counted: - "
                 "Cache maintenance instructions and prefetches - Stores of an "
                 "entire cache line, even if they make a coherency request "
                 "outside the L1 cache - Partial cache line writes that do not "
                 "allocate into the L1 cache - Non-cacheable accesses"},
        {.name = "L1D_CACHE_REFILL_INNER",
         .modmsk = ARMV9_ATTRS,
         .code = 0x44,
         .desc = "L1 data cache refill, inner. This event counts any L1 data "
                 "cache linefill, as counted by L1D_CACHE_REFILL, that hits in "
                 "the L2 cache, L3 cache, or another core in the cluster"},
        {.name = "L1D_CACHE_REFILL_OUTER",
         .modmsk = ARMV9_ATTRS,
         .code = 0x45,
         .desc = "L1 data cache refill, outer. This event counts any L1 data "
                 "cache linefill, as counted by L1D_CACHE_REFILL, that does "
                 "not hit in the L2 cache, L3 cache, or another core in the "
                 "cluster, and instead obtains data from outside the cluster"},
        {.name = "L2D_CACHE_RD",
         .modmsk = ARMV9_ATTRS,
         .code = 0x50,
         .desc = "L2 cache access, read. If the complex is configured with a "
                 "per-complex L2 cache, this event counts any read transaction "
                 "from the L1 cache that looks up in the L2 cache. Snoops from "
                 "outside the complex are not counted. If the complex is "
                 "configured without a per-complex L2 cache, this event counts "
                 "the cluster cache event, as defined by L3D_CACHE_RD. If "
                 "neither a per-complex cache or a cluster cache is "
                 "configured, this event is not implemented"},
        {.name = "L2D_CACHE_WR",
         .modmsk = ARMV9_ATTRS,
         .code = 0x51,
         .desc = "L2 cache access, write. If the complex is configured with a "
                 "per-complex L2 cache, this event counts any write "
                 "transaction from the L1 cache that looks up in the L2 cache "
                 "or any write-back from L1 cache that allocates into the L2 "
                 "cache. Snoops from outside the complex are not counted. If "
                 "the complex is configured without a per-complex L2 cache, "
                 "this event counts the cluster cache event, as defined by "
                 "L3D_CACHE_WR. If neither a per-complex cache or a cluster "
                 "cache is configured, this event is not implemented"},
        {.name = "L2D_CACHE_REFILL_RD",
         .modmsk = ARMV9_ATTRS,
         .code = 0x52,
         .desc = "L2 cache refill, read. If the complex is configured with a "
                 "per-complex L2 cache, this event counts any cacheable read "
                 "transaction from L1 cache that causes data to be read from "
                 "outside the complex. L2 cache refills caused by stashes into "
                 "L2 are not counted. Transactions such as ReadUnique are "
                 "counted here as read transactions, even though they can be "
                 "generated by store instructions. If the complex is "
                 "configured without a per-complex L2 cache, this event counts "
                 "the cluster cache event, as defined by L3D_CACHE_REFILL_RD. "
                 "If neither a per-complex cache or a cluster cache is "
                 "configured, this event is not implemented"},
        {.name = "L2D_CACHE_REFILL_WR",
         .modmsk = ARMV9_ATTRS,
         .code = 0x53,
         .desc = "L2 cache refill, write. If the complex is configured with a "
                 "per-complex L2 cache, this event counts any write "
                 "transaction from L1 cache that causes data to be read from "
                 "outside the complex. L2 cache refills caused by stashes into "
                 "L2 are not counted. Transactions such as ReadUnique are not "
                 "counted as write transactions. If the complex is configured "
                 "without a per-core L2 cache, this event is not implemented"},
        {.name = "BUS_ACCESS_RD",
         .modmsk = ARMV9_ATTRS,
         .code = 0x60,
         .desc = "Bus access, read. This event counts for every beat of data "
                 "that is transferred over the read data channel between the "
                 "complex and the Theodul DynamIQ Shared Unit (Theodul DSU)"},
        {.name = "BUS_ACCESS_WR",
         .modmsk = ARMV9_ATTRS,
         .code = 0x61,
         .desc = "Bus access, write. This event counts for every beat of data "
                 "that is transferred over the write data channel between the "
                 "complex and the Theodul DSU"},
        {.name = "MEM_ACCESS_RD",
         .modmsk = ARMV9_ATTRS,
         .code = 0x66,
         .desc = "Data memory access, read. This event counts memory accesses "
                 "due to load instructions. The following actions are not "
                 "counted: - Instruction fetches - Cache maintenance "
                 "instructions - Translation table walks - Prefetches"},
        {.name = "MEM_ACCESS_WR",
         .modmsk = ARMV9_ATTRS,
         .code = 0x67,
         .desc = "Data memory access, write. This event counts memory accesses "
                 "due to store instructions. The following actions are not "
                 "counted: - Instruction fetches - Cache maintenance "
                 "instructions - Translation table walks - Prefetches"},
        {.name = "LD_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x70,
         .desc = "Operation speculatively executed, load"},
        {.name = "ST_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x71,
         .desc = "Operation speculatively executed, store"},
        {.name = "LDST_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x72,
         .desc = "Operation speculatively executed, load or store. This event "
                 "counts the sum of LD_SPEC and ST_SPEC"},
        {.name = "DP_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x73,
         .desc = "Operation speculatively executed, integer data processing"},
        {.name = "ASE_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x74,
         .desc = "Operation speculatively executed, Advanced SIMD instruction"},
        {.name = "VFP_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x75,
         .desc = "Operation speculatively executed, floating-point "
                 "instruction"},
        {.name = "PC_WRITE_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x76,
         .desc = "Operation speculatively executed, software change of the "
                 "Program Counter"},
        {.name = "CRYPTO_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x77,
         .desc = "Operation speculatively executed, Cryptographic instruction"},
        {.name = "BR_IMMED_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x78,
         .desc = "Branch speculatively executed, immediate branch. This event "
                 "duplicates BR_IMMED_RETIRED"},
        {.name = "BR_RETURN_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x79,
         .desc = "Branch speculatively executed, procedure return"},
        {.name = "BR_INDIRECT_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x7a,
         .desc = "Branch speculatively executed, indirect branch"},
        {.name = "EXC_IRQ",
         .modmsk = ARMV9_ATTRS,
         .code = 0x86,
         .desc = "Exception taken, IRQ"},
        {.name = "EXC_FIQ",
         .modmsk = ARMV9_ATTRS,
         .code = 0x87,
         .desc = "Exception taken, FIQ"},
        {.name = "L3D_CACHE_RD",
         .modmsk = ARMV9_ATTRS,
         .code = 0xa0,
         .desc = "Attributable L3 unified cache access, read. This event "
                 "counts for any cacheable read transaction returning data "
                 "from the Theodul DSU. If either the complex is configured "
                 "without a per-complex L2 cache or the cluster is configured "
                 "without an L3 cache, this event is not implemented"},
        {.name = "L3D_CACHE_REFILL_RD",
         .modmsk = ARMV9_ATTRS,
         .code = 0xa2,
         .desc = "Attributable L3 unified cache refill, read. If either the "
                 "complex is configured without a per-complex L2 cache or the "
                 "cluster is configured without an L3 cache, this event is not "
                 "implemented"},
        {.name = "L2D_CACHE_REFILL_PREFETCH",
         .modmsk = ARMV9_ATTRS,
         .code = 0xc1,
         .desc = "L2 cache refill due to prefetch. If the complex is "
                 "configured with a per-complex L2 cache, this event does not "
                 "count. If the complex is configured without a per-complex L2 "
                 "cache, this event counts the cluster cache event, as defined "
                 "by L3D_CACHE_REFILL_PREFETCH. If neither a per-complex cache "
                 "or a cluster cache is configured, this event is not "
                 "implemented"},
        {.name = "L1D_CACHE_REFILL_PREFETCH",
         .modmsk = ARMV9_ATTRS,
         .code = 0xc2,
         .desc = "L1 data cache refill due to prefetch. This event counts any "
                 "linefills from the prefetcher that cause an allocation into "
                 "the L1 data cache"},
        {.name = "L2D_WS_MODE",
         .modmsk = ARMV9_ATTRS,
         .code = 0xc3,
         .desc = "L2 cache write streaming mode. This event counts for each "
                 "cycle where the core is in write streaming mode and is not "
                 "allocating writes into the L2 cache"},
        {.name = "L1D_WS_MODE_ENTRY",
         .modmsk = ARMV9_ATTRS,
         .code = 0xc4,
         .desc = "L1 data cache entering write streaming mode. This event "
                 "counts for each entry into write streaming mode"},
        {.name = "L1D_WS_MODE",
         .modmsk = ARMV9_ATTRS,
         .code = 0xc5,
         .desc = "L1 data cache write streaming mode. This event counts for "
                 "each cycle where the core is in write streaming mode and is "
                 "not allocating writes into the L1 data cache"},
        {.name = "L3D_WS_MODE",
         .modmsk = ARMV9_ATTRS,
         .code = 0xc7,
         .desc = "L3 cache write streaming mode. This event counts for each "
                 "cycle where the core is in write streaming mode and is not "
                 "allocating writes into the L3 cache"},
        {.name = "LL_WS_MODE",
         .modmsk = ARMV9_ATTRS,
         .code = 0xc8,
         .desc = "Last level cache write streaming mode. This event counts for "
                 "each cycle where the core is in write streaming mode and is "
                 "not allocating writes into the system cache"},
        {.name = "BR_COND_PRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0xc9,
         .desc = "Predicted conditional branch executed. This event counts "
                 "when any branch that the conditional predictor can predict "
                 "is retired. This event still counts when branch prediction "
                 "is disabled due to the Memory Management Unit (MMU) being "
                 "off"},
        {.name = "BR_INDIRECT_MIS_PRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0xca,
         .desc = "Indirect branch mispredicted. This event counts when any "
                 "indirect branch that the Branch Target Address Cache (BTAC) "
                 "can predict is retired and has mispredicted either the "
                 "condition or the address. This event still counts when "
                 "branch prediction is disabled due to the MMU being off"},
        {.name = "BR_INDIRECT_ADDR_MIS_PRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0xcb,
         .desc = "Indirect branch mispredicted due to address miscompare. This "
                 "event counts when any indirect branch that the BTAC can "
                 "predict is retired, was taken, correctly predicted the "
                 "condition, and has mispredicted the address. This event "
                 "still counts when branch prediction is disabled due to the "
                 "MMU being off"},
        {.name = "BR_COND_MIS_PRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0xcc,
         .desc = "Conditional branch mispredicted. This event counts when any "
                 "branch that the conditional predictor can predict is retired "
                 "and has mispredicted the condition. This event still counts "
                 "when branch prediction is disabled due to the MMU being off. "
                 "Conditional indirect branches that correctly predict the "
                 "condition but mispredict the address do not count"},
        {.name = "BR_INDIRECT_ADDR_PRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0xcd,
         .desc = "Indirect branch with predicted address executed. This event "
                 "counts when any indirect branch that the BTAC can predict is "
                 "retired, was taken, and correctly predicted the condition. "
                 "This event still counts when branch prediction is disabled "
                 "due to the MMU being off"},
        {.name = "BR_RETURN_ADDR_PRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0xce,
         .desc = "Procedure return with predicted address executed. This event "
                 "counts when any procedure return that the call-return stack "
                 "can predict is retired, was taken, and correctly predicted "
                 "the condition. This event still counts when branch "
                 "prediction is disabled due to the MMU being off"},
        {.name = "BR_RETURN_ADDR_MIS_PRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0xcf,
         .desc = "Procedure return mispredicted due to address miscompare. "
                 "This event counts when any procedure return that the "
                 "call-return stack can predict is retired, was taken, "
                 "correctly predicted the condition, and has mispredicted the "
                 "address. This event still counts when branch prediction is "
                 "disabled due to the MMU being off"},
        {.name = "L2D_WALK_TLB",
         .modmsk = ARMV9_ATTRS,
         .code = 0xd0,
         .desc = "L2 TLB walk cache access. This event does not count if the "
                 "MMU is disabled"},
        {.name = "L2D_WALK_TLB_REFILL",
         .modmsk = ARMV9_ATTRS,
         .code = 0xd1,
         .desc = "L2 TLB walk cache refill. This event does not count if the "
                 "MMU is disabled"},
        {.name = "L2D_S2_TLB",
         .modmsk = ARMV9_ATTRS,
         .code = 0xd4,
         .desc = "L2 TLB IPA cache access. This event counts on each access to "
                 "the IPA cache. If a single translation table walk needs to "
                 "make multiple accesses to the IPA cache, each access is "
                 "counted. If stage 2 translation is disabled, this event does "
                 "not count"},
        {.name = "L2D_S2_TLB_REFILL",
         .modmsk = ARMV9_ATTRS,
         .code = 0xd5,
         .desc = "L2 TLB IPA cache refill. This event counts on each refill of "
                 "the IPA cache. If a single translation table walk needs to "
                 "make multiple accesses to the IPA cache, each access that "
                 "causes a refill is counted. If stage 2 translation is "
                 "disabled, this event does not count"},
        {.name = "L2D_CACHE_STASH_DROPPED",
         .modmsk = ARMV9_ATTRS,
         .code = 0xd6,
         .desc = "L2 cache stash dropped. This event counts on each stash "
                 "request that is received from the interconnect or the "
                 "Accelerator Coherency Port (ACP), that targets L2 cache and "
                 "is dropped due to lack of buffer space to hold the request"},
        {.name = "STALL_FRONTEND_CACHE",
         .modmsk = ARMV9_ATTRS,
         .code = 0xe1,
         .desc = "No operation issued due to the frontend, cache miss. This "
                 "event counts every cycle that the Data Processing Unit (DPU) "
                 "instruction queue is empty and there is an instruction cache "
                 "miss being processed"},
        {.name = "STALL_FRONTEND_TLB",
         .modmsk = ARMV9_ATTRS,
         .code = 0xe2,
         .desc = "No operation issued due to the frontend, TLB miss. This "
                 "event counts every cycle that the DPU instruction queue is "
                 "empty and there is an instruction L1 TLB miss being "
                 "processed"},
        {.name = "STALL_FRONTEND_PDERR",
         .modmsk = ARMV9_ATTRS,
         .code = 0xe3,
         .desc = "No operation issued due to the frontend, pre-decode error"},
        {.name = "STALL_BACKEND_ILOCK",
         .modmsk = ARMV9_ATTRS,
         .code = 0xe4,
         .desc = "No operation issued due to the backend interlock. This event "
                 "counts every cycle where the issue of an operation is "
                 "stalled and there is an interlock. Stall cycles due to a "
                 "stall in the Wr stage are excluded"},
        {.name = "STALL_BACKEND_ILOCK_ADDR",
         .modmsk = ARMV9_ATTRS,
         .code = 0xe5,
         .desc = "No operation issued due to the backend, address interlock. "
                 "This event counts every cycle where the issue of an "
                 "operation is stalled and there is an interlock on an address "
                 "operand. This type of interlock is caused by a load/store "
                 "instruction waiting for data to calculate the address. Stall "
                 "cycles due to a stall in the Wr stage are excluded"},
        {.name = "STALL_BACKEND_ILOCK_VPU",
         .modmsk = ARMV9_ATTRS,
         .code = 0xe6,
         .desc = "No operation issued due to the backend, interlock, or the "
                 "Vector Processing Unit (VPU). This event counts every cycle "
                 "where there is a stall or an interlock that is caused by a "
                 "VPU instruction. Stall cycles due to a stall in the Wr stage "
                 "are excluded"},
        {.name = "STALL_BACKEND_LD",
         .modmsk = ARMV9_ATTRS,
         .code = 0xe7,
         .desc = "No operation issued due to the backend, load. This event "
                 "counts every cycle where there is a stall in the Wr stage "
                 "due to a load"},
        {.name = "STALL_BACKEND_ST",
         .modmsk = ARMV9_ATTRS,
         .code = 0xe8,
         .desc = "No operation issued due to the backend, store. This event "
                 "counts every cycle where there is a stall in the Wr stage "
                 "due to a store"},
        {.name = "STALL_BACKEND_LD_CACHE",
         .modmsk = ARMV9_ATTRS,
         .code = 0xe9,
         .desc = "No operation issued due to the backend, load, cache miss. "
                 "This event counts every cycle where there is a stall in the "
                 "Wr stage due to a load that is waiting on data. The event "
                 "counts for stalls that are caused by missing the cache or "
                 "where the data is Non-cacheable"},
        {.name = "STALL_BACKEND_LD_TLB",
         .modmsk = ARMV9_ATTRS,
         .code = 0xea,
         .desc = "No operation issued due to the backend, load, TLB miss. This "
                 "event counts every cycle where there is a stall in the Wr "
                 "stage due to a load that misses in the L1 TLB"},
        {.name = "STALL_BACKEND_ST_STB",
         .modmsk = ARMV9_ATTRS,
         .code = 0xeb,
         .desc = "No operation issued due to the backend, store, Store Buffer "
                 "(STB) full. This event counts every cycle where there is a "
                 "stall in the Wr stage because of a store operation that is "
                 "waiting due to the STB being full"},
        {.name = "STALL_BACKEND_ST_TLB",
         .modmsk = ARMV9_ATTRS,
         .code = 0xec,
         .desc = "No operation issued due to the backend, store, TLB miss. "
                 "This event counts every cycle where there is a stall in the "
                 "Wr stage because of a store operation that has missed in the "
                 "L1 TLB"},
        {.name = "STALL_BACKEND_VPU_HAZARD",
         .modmsk = ARMV9_ATTRS,
         .code = 0xed,
         .desc = "No operation issued due to the backend, VPU hazard. This "
                 "event counts every cycle where the core stalls due to "
                 "contention for the VPU with the other core"},
        {.name = "STALL_SLOT_BACKEND_ILOCK",
         .modmsk = ARMV9_ATTRS,
         .code = 0xee,
         .desc = "Issue slot not issued due to interlock. For each cycle, this "
                 "event counts each dispatch slot that does not issue due to "
                 "an interlock"},
        {.name = "STALL_BACKEND_MEM",
         .modmsk = ARMV9_ATTRS,
         .code = 0x4005,
         .desc = "Memory stall cycles The counter is identical to "
                 "STALL_BACKEND_MEM in the AMUv1 architecture"},
        {.name = "L1I_CACHE_LMISS",
         .modmsk = ARMV9_ATTRS,
         .code = 0x4006,
         .desc = "Level 1 instruction cache long-latency read miss The counter "
                 "counts each access counted by L1I_CACHE that incurs more "
                 "latency because it returns instructions from outside the L1 "
                 "instruction cache"},
        {.name = "L2D_CACHE_LMISS_RD",
         .modmsk = ARMV9_ATTRS,
         .code = 0x4009,
         .desc = "Level 2 data cache long-latency read miss The counter counts "
                 "each memory read access counted by L2D_CACHE that incurs "
                 "more latency because it returns data from outside the L2 "
                 "data cache or the unified cache of the core"},
        {.name = "L3D_CACHE_LMISS_RD",
         .modmsk = ARMV9_ATTRS,
         .code = 0x400b,
         .desc = "Level 3 data cache long-latency read miss The counter counts "
                 "each memory read access counted by L3D_CACHE that incurs "
                 "more latency because it returns data from outside the L3 "
                 "data or unified cache of the core"},
        {.name = "TRB_WRAP",
         .modmsk = ARMV9_ATTRS,
         .code = 0x400c,
         .desc = "Trace buffer current write pointer wrapped The event is "
                 "generated each time the current write pointer is wrapped to "
                 "the base pointer"},
        {.name = "PMU_OVFS",
         .modmsk = ARMV9_ATTRS,
         .code = 0x400d,
         .desc = "PMU overflow, counters accessible to EL1 and EL0 The event "
                 "is generated each time an event causes a PMEVCTNR<n>_EL1 "
                 "counter overflow when PMINTENSET_EL1[n] is set to 1, for "
                 "each implemented PMU counter n in the range 0 <= n < "
                 "UInt(MDCR_EL2.HPMN), and the Cycle Counter (n = 31). Note: "
                 "This event is only exported to the ETM and is not visible to "
                 "the PMU"},
        {.name = "TRB_TRIG",
         .modmsk = ARMV9_ATTRS,
         .code = 0x400e,
         .desc = "Trace buffer Trigger Event The event is generated when a "
                 "Trace Buffer Extension Trigger Event occurs"},
        {.name = "PMU_HOVFS",
         .modmsk = ARMV9_ATTRS,
         .code = 0x400f,
         .desc = "PMU overflow, counters reserved for use by EL2 Note: This "
                 "event is only exported to the ETM and is not visible to the "
                 "PMU"},
        {.name = "TRCEXTOUT0",
         .modmsk = ARMV9_ATTRS,
         .code = 0x4010,
         .desc = "Trace unit external output 0"},
        {.name = "TRCEXTOUT1",
         .modmsk = ARMV9_ATTRS,
         .code = 0x4011,
         .desc = "Trace unit external output 1"},
        {.name = "TRCEXTOUT2",
         .modmsk = ARMV9_ATTRS,
         .code = 0x4012,
         .desc = "Trace unit external output 2"},
        {.name = "TRCEXTOUT3",
         .modmsk = ARMV9_ATTRS,
         .code = 0x4013,
         .desc = "Trace unit external output 3"},
        {.name = "CTI_TRIGOUT4",
         .modmsk = ARMV9_ATTRS,
         .code = 0x4018,
         .desc = "Cross Trigger Interface output 4"},
        {.name = "CTI_TRIGOUT5",
         .modmsk = ARMV9_ATTRS,
         .code = 0x4019,
         .desc = "Cross Trigger Interface output 5"},
        {.name = "CTI_TRIGOUT6",
         .modmsk = ARMV9_ATTRS,
         .code = 0x401a,
         .desc = "Cross Trigger Interface output 6"},
        {.name = "CTI_TRIGOUT7",
         .modmsk = ARMV9_ATTRS,
         .code = 0x401b,
         .desc = "Cross Trigger Interface output 7"},
        {.name = "LDST_ALIGN_LAT",
         .modmsk = ARMV9_ATTRS,
         .code = 0x4020,
         .desc = "Access with additional latency from alignment The counter "
                 "counts each access counted by MEM_ACCESS that incurred more "
                 "latency because of the alignment of the address and the size "
                 "of data being accessed"},
        {.name = "LD_ALIGN_LAT",
         .modmsk = ARMV9_ATTRS,
         .code = 0x4021,
         .desc = "Load with additional latency from alignment The counter "
                 "counts each memory-read access counted by LDST_ALIGN_LAT"},
        {.name = "ST_ALIGN_LAT",
         .modmsk = ARMV9_ATTRS,
         .code = 0x4022,
         .desc = "Store with additional latency from alignment The counter "
                 "counts each memory-write access counted by LDST_ALIGN_LAT"},
        {.name = "MEM_ACCESS_CHECKED",
         .modmsk = ARMV9_ATTRS,
         .code = 0x4024,
         .desc = "Checked data memory access The counter counts each memory "
                 "access counted by MEM_ACCESS that is Tag Checked by the "
                 "Memory Tagging Extension (MTE)"},
        {.name = "MEM_ACCESS_CHECKED_RD",
         .modmsk = ARMV9_ATTRS,
         .code = 0x4025,
         .desc = "Checked data memory access, read The counter counts each "
                 "memory-read access counted by MEM_ACCESS_CHECKED"},
        {.name = "MEM_ACCESS_CHECKED_WR",
         .modmsk = ARMV9_ATTRS,
         .code = 0x4026,
         .desc = "Checked data memory access, write The counter counts each "
                 "memory-write access counted by MEM_ACCESS_CHECKED"},
        {.name = "SVE_INST_RETIRED",
         .modmsk = ARMV9_ATTRS,
         .code = 0x8002,
         .desc = "Instruction architecturally executed Scalable Vector "
                 "Extension (SVE) The counter counts architecturally executed "
                 "SVE instructions"},
        {.name = "SVE_INST_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x8006,
         .desc = "SVE Operations speculatively executed The counter counts "
                 "speculatively executed operations due to SVE instructions"},
        {.name = "FP_HP_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x8014,
         .desc = "Half-precision floating-point operation speculatively "
                 "executed"},
        {.name = "FP_SP_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x8018,
         .desc = "Single-precision floating-point operation speculatively "
                 "executed"},
        {.name = "FP_DP_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x801c,
         .desc = "Double-precision floating-point operation speculatively "
                 "executed"},
        {.name = "ASE_SVE_INT8_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x80e3,
         .desc = "Advanced SIMD and SVE 8-bit integer operation speculatively "
                 "executed"},
        {.name = "ASE_SVE_INT16_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x80e7,
         .desc = "Advanced SIMD and SVE 16-bit integer operation speculatively "
                 "executed"},
        {.name = "ASE_SVE_INT32_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x80eb,
         .desc = "Advanced SIMD and SVE 32-bit integer operation speculatively "
                 "executed"},
        {.name = "ASE_SVE_INT64_SPEC",
         .modmsk = ARMV9_ATTRS,
         .code = 0x80ef,
         .desc = "Advanced SIMD and SVE 64-bit integer operation speculatively "
                 "executed"},

};
