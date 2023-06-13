message(STATUS "compile pfm")

file(GLOB_RECURSE SOURCES lib/events/perf_events.h
                          lib/pfmlib_common.c
                          lib/pfmlib_perf_event.c
                          lib/pfmlib_perf_event_pmu.c
                          lib/pfmlib_perf_event_priv.h
                          lib/pfmlib_perf_event_raw.c
                          lib/pfmlib_priv.h
)

# Note: libpfm is C project, don't use CMAKE_CXX_FLAGS
set(CMAKE_C_FLAGS "-D_REENTRANT ${CMAKE_C_FLAGS}")
set(CMAKE_C_FLAGS "-DCONFIG_PFMLIB_DEBUG ${CMAKE_C_FLAGS}")
set(CMAKE_C_FLAGS "-DCONFIG_PFMLIB_OS_LINUX ${CMAKE_C_FLAGS}")
set(CMAKE_C_FLAGS "-DCONFIG_PFMLIB_PERFMON ${CMAKE_C_FLAGS}")
set(CMAKE_C_FLAGS "-Wno-ignored-qualifiers ${CMAKE_C_FLAGS}")
set(CMAKE_C_FLAGS "-Wno-implicit-function-declaration ${CMAKE_C_FLAGS}")

if(${MPERF_ARCH} STREQUAL aarch64)
    set(CMAKE_C_FLAGS  "-DCONFIG_PFMLIB_ARCH_ARM64=1 ${CMAKE_C_FLAGS}")
elseif(${MPERF_ARCH} STREQUAL armv7)
    set(CMAKE_C_FLAGS  "-DCONFIG_PFMLIB_ARCH_ARM=1 ${CMAKE_C_FLAGS}")
elseif(${MPERF_ARCH} STREQUAL x86)
    set(CMAKE_C_FLAGS  "-DCONFIG_PFMLIB_ARCH_X86=1 ${CMAKE_C_FLAGS}")
else()
    message(FATAL_ERROR "Unknown MPERF_ARCH ${MPERF_ARCH}.")
endif()

add_library(pfm ${SOURCES})
target_include_directories(pfm
                           PUBLIC
                           $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/third_party/libpfm4/include/>
                           $<INSTALL_INTERFACE:include>)

if(${MPERF_ARCH} STREQUAL x86)
    file(GLOB_RECURSE X86_SOURCE lib/events/amd64_events_fam10h.h
                    lib/events/amd64_events_fam11h.h
                    lib/events/amd64_events_fam12h.h
                    lib/events/amd64_events_fam14h.h
                    lib/events/amd64_events_fam15h.h
                    lib/events/amd64_events_fam15h_nb.h
                    lib/events/amd64_events_fam17h_zen1.h
                    lib/events/amd64_events_fam17h_zen2.h
                    lib/events/amd64_events_fam19h_zen3.h
                    lib/events/amd64_events_fam19h_zen3_l3.h
                    lib/events/amd64_events_fam19h_zen4.h
                    lib/events/amd64_events_fam16h.h
                    lib/events/amd64_events_k7.h
                    lib/events/amd64_events_k8.h
                    lib/events/intel_atom_events.h
                    lib/events/intel_bdw_events.h
                    lib/events/intel_core_events.h
                    lib/events/intel_coreduo_events.h
                    lib/events/intel_glm_events.h
                    lib/events/intel_hsw_events.h
                    lib/events/intel_hswep_unc_cbo_events.h
                    lib/events/intel_hswep_unc_ha_events.h
                    lib/events/intel_hswep_unc_imc_events.h
                    lib/events/intel_hswep_unc_irp_events.h
                    lib/events/intel_hswep_unc_pcu_events.h
                    lib/events/intel_hswep_unc_qpi_events.h
                    lib/events/intel_hswep_unc_r2pcie_events.h
                    lib/events/intel_hswep_unc_r3qpi_events.h
                    lib/events/intel_hswep_unc_sbo_events.h
                    lib/events/intel_hswep_unc_ubo_events.h
                    lib/events/intel_ivb_events.h
                    lib/events/intel_ivbep_unc_cbo_events.h
                    lib/events/intel_ivbep_unc_ha_events.h
                    lib/events/intel_ivbep_unc_imc_events.h
                    lib/events/intel_ivbep_unc_irp_events.h
                    lib/events/intel_ivbep_unc_pcu_events.h
                    lib/events/intel_ivbep_unc_qpi_events.h
                    lib/events/intel_ivbep_unc_r2pcie_events.h
                    lib/events/intel_ivbep_unc_r3qpi_events.h
                    lib/events/intel_ivbep_unc_ubo_events.h
                    lib/events/intel_bdx_unc_cbo_events.h
                    lib/events/intel_bdx_unc_ubo_events.h
                    lib/events/intel_bdx_unc_sbo_events.h
                    lib/events/intel_bdx_unc_ha_events.h
                    lib/events/intel_bdx_unc_imc_events.h
                    lib/events/intel_bdx_unc_irp_events.h
                    lib/events/intel_bdx_unc_pcu_events.h
                    lib/events/intel_bdx_unc_qpi_events.h
                    lib/events/intel_bdx_unc_r2pcie_events.h
                    lib/events/intel_bdx_unc_r3qpi_events.h
                    lib/events/intel_skx_unc_cha_events.h
                    lib/events/intel_skx_unc_iio_events.h
                    lib/events/intel_skx_unc_imc_events.h
                    lib/events/intel_skx_unc_irp_events.h
                    lib/events/intel_skx_unc_m2m_events.h
                    lib/events/intel_skx_unc_m3upi_events.h
                    lib/events/intel_skx_unc_pcu_events.h
                    lib/events/intel_skx_unc_ubo_events.h
                    lib/events/intel_skx_unc_upi_events.h
                    lib/events/intel_knc_events.h
                    lib/events/intel_knl_events.h
                    lib/events/intel_tmt_events.h
                    lib/events/intel_icl_events.h
                    lib/events/intel_knl_unc_cha_events.h
                    lib/events/intel_knl_unc_edc_events.h
                    lib/events/intel_knl_unc_imc_events.h
                    lib/events/intel_knl_unc_m2pcie_events.h
                    lib/events/intel_netburst_events.h
                    lib/events/intel_nhm_events.h
                    lib/events/intel_nhm_unc_events.h
                    lib/events/intel_p6_events.h
                    lib/events/intel_pii_events.h
                    lib/events/intel_pm_events.h
                    lib/events/intel_ppro_events.h
                    lib/events/intel_skl_events.h
                    lib/events/intel_slm_events.h
                    lib/events/intel_snb_events.h
                    lib/events/intel_snb_unc_events.h
                    lib/events/intel_snbep_unc_cbo_events.h
                    lib/events/intel_snbep_unc_ha_events.h
                    lib/events/intel_snbep_unc_imc_events.h
                    lib/events/intel_snbep_unc_pcu_events.h
                    lib/events/intel_snbep_unc_qpi_events.h
                    lib/events/intel_snbep_unc_r2pcie_events.h
                    lib/events/intel_snbep_unc_r3qpi_events.h
                    lib/events/intel_snbep_unc_ubo_events.h
                    lib/events/intel_spr_events.h
                    lib/events/intel_wsm_events.h
                    lib/events/intel_wsm_unc_events.h
                    lib/events/intel_x86_arch_events.h
                    lib/pfmlib_amd64.c
                    lib/pfmlib_amd64_fam10h.c
                    lib/pfmlib_amd64_fam11h.c
                    lib/pfmlib_amd64_fam12h.c
                    lib/pfmlib_amd64_fam14h.c
                    lib/pfmlib_amd64_fam15h.c
                    lib/pfmlib_amd64_fam16h.c
                    lib/pfmlib_amd64_fam17h.c
                    lib/pfmlib_amd64_fam19h.c
                    lib/pfmlib_amd64_fam19h_l3.c
                    lib/pfmlib_amd64_k7.c
                    lib/pfmlib_amd64_k8.c
                    lib/pfmlib_amd64_rapl.c
                    lib/pfmlib_amd64_perf_event.c
                    lib/pfmlib_amd64_priv.h
                    lib/pfmlib_intel_atom.c
                    lib/pfmlib_intel_bdw.c
                    lib/pfmlib_intel_core.c
                    lib/pfmlib_intel_coreduo.c
                    lib/pfmlib_intel_glm.c
                    lib/pfmlib_intel_hsw.c
                    lib/pfmlib_intel_hswep_unc_cbo.c
                    lib/pfmlib_intel_hswep_unc_ha.c
                    lib/pfmlib_intel_hswep_unc_imc.c
                    lib/pfmlib_intel_hswep_unc_irp.c
                    lib/pfmlib_intel_hswep_unc_pcu.c
                    lib/pfmlib_intel_hswep_unc_qpi.c
                    lib/pfmlib_intel_hswep_unc_r2pcie.c
                    lib/pfmlib_intel_hswep_unc_r3qpi.c
                    lib/pfmlib_intel_hswep_unc_sbo.c
                    lib/pfmlib_intel_hswep_unc_ubo.c
                    lib/pfmlib_intel_skx_unc_cha.c
                    lib/pfmlib_intel_skx_unc_iio.c
                    lib/pfmlib_intel_skx_unc_imc.c
                    lib/pfmlib_intel_skx_unc_irp.c
                    lib/pfmlib_intel_skx_unc_m2m.c
                    lib/pfmlib_intel_skx_unc_m3upi.c
                    lib/pfmlib_intel_skx_unc_pcu.c
                    lib/pfmlib_intel_skx_unc_ubo.c
                    lib/pfmlib_intel_skx_unc_upi.c
                    lib/pfmlib_intel_bdx_unc_cbo.c
                    lib/pfmlib_intel_bdx_unc_ubo.c
                    lib/pfmlib_intel_bdx_unc_sbo.c
                    lib/pfmlib_intel_bdx_unc_ha.c
                    lib/pfmlib_intel_bdx_unc_imc.c
                    lib/pfmlib_intel_bdx_unc_irp.c
                    lib/pfmlib_intel_bdx_unc_pcu.c
                    lib/pfmlib_intel_bdx_unc_qpi.c
                    lib/pfmlib_intel_bdx_unc_r2pcie.c
                    lib/pfmlib_intel_bdx_unc_r3qpi.c
                    lib/pfmlib_intel_ivb.c
                    lib/pfmlib_intel_ivb_unc.c
                    lib/pfmlib_intel_ivbep_unc_cbo.c
                    lib/pfmlib_intel_ivbep_unc_ha.c
                    lib/pfmlib_intel_ivbep_unc_imc.c
                    lib/pfmlib_intel_ivbep_unc_irp.c
                    lib/pfmlib_intel_ivbep_unc_pcu.c
                    lib/pfmlib_intel_ivbep_unc_qpi.c
                    lib/pfmlib_intel_ivbep_unc_r2pcie.c
                    lib/pfmlib_intel_ivbep_unc_r3qpi.c
                    lib/pfmlib_intel_ivbep_unc_ubo.c
                    lib/pfmlib_intel_knc.c
                    lib/pfmlib_intel_knl.c
                    lib/pfmlib_intel_tmt.c
                    lib/pfmlib_intel_icl.c
                    lib/pfmlib_intel_knl_unc_cha.c
                    lib/pfmlib_intel_knl_unc_edc.c
                    lib/pfmlib_intel_knl_unc_imc.c
                    lib/pfmlib_intel_knl_unc_m2pcie.c
                    lib/pfmlib_intel_netburst.c
                    lib/pfmlib_intel_netburst_perf_event.c
                    lib/pfmlib_intel_netburst_priv.h
                    lib/pfmlib_intel_nhm.c
                    lib/pfmlib_intel_nhm_unc.c
                    lib/pfmlib_intel_p6.c
                    lib/pfmlib_intel_rapl.c
                    lib/pfmlib_intel_skl.c
                    lib/pfmlib_intel_slm.c
                    lib/pfmlib_intel_snb.c
                    lib/pfmlib_intel_snb_unc.c
                    lib/pfmlib_intel_snbep_unc.c
                    lib/pfmlib_intel_snbep_unc_cbo.c
                    lib/pfmlib_intel_snbep_unc_ha.c
                    lib/pfmlib_intel_snbep_unc_imc.c
                    lib/pfmlib_intel_snbep_unc_pcu.c
                    lib/pfmlib_intel_snbep_unc_perf_event.c
                    lib/pfmlib_intel_snbep_unc_priv.h
                    lib/pfmlib_intel_snbep_unc_qpi.c
                    lib/pfmlib_intel_snbep_unc_r2pcie.c
                    lib/pfmlib_intel_snbep_unc_r3qpi.c
                    lib/pfmlib_intel_snbep_unc_ubo.c
                    lib/pfmlib_intel_spr.c
                    lib/pfmlib_intel_wsm.c
                    lib/pfmlib_intel_x86.c
                    lib/pfmlib_intel_x86_arch.c
                    lib/pfmlib_intel_x86_perf_event.c
                    lib/pfmlib_intel_x86_priv.h
                    lib/pfmlib_perf_event_priv.h
                    lib/pfmlib_priv.h
    )
    add_library(pfm_x86 ${X86_SOURCE})
    target_include_directories(pfm_x86 PRIVATE ${PROJECT_SOURCE_DIR}/third_party/libpfm4/include/)
    target_link_libraries(pfm PRIVATE pfm_x86)
endif()

if(${MPERF_ARCH} STREQUAL aarch64)
    file(GLOB_RECURSE AARCH64_SOURCE lib/events/arm_cortex_a53_events.h
                        lib/events/arm_cortex_a57_events.h
                        lib/events/arm_cortex_a55_events.h
                        lib/events/arm_cortex_a76_events.h
                        lib/events/arm_cortex_a78_events.h
                        lib/events/arm_cortex_a510_events.h
                        lib/events/arm_cortex_aX1_events.h
                        lib/events/arm_xgene_events.h
                        lib/events/arm_cavium_tx2_events.h
                        lib/events/arm_marvell_tx2_unc_events.h
                        lib/events/arm_fujitsu_a64fx_events.h
                        lib/events/arm_neoverse_n1_events.h
                        lib/events/arm_neoverse_n2_events.h
                        lib/events/arm_hisilicon_kunpeng_events.h
                        lib/events/arm_hisilicon_kunpeng_unc_events.h
                        lib/pfmlib_arm.c
                        lib/pfmlib_arm_armv8.c
                        lib/pfmlib_arm_perf_event.c
                        lib/pfmlib_arm_priv.h
                        lib/pfmlib_perf_event_priv.h
                        lib/pfmlib_priv.h
                        lib/pfmlib_kunpeng_unc_perf_event.c
                        lib/pfmlib_tx2_unc_perf_event.c
                        lib/events/arm_cortex_a17_events.h
                        lib/events/arm_cortex_a32_events.h
                        lib/events/arm_cortex_a34_events.h
                        lib/events/arm_cortex_a35_events.h
                        lib/events/arm_cortex_a5_events.h
                        lib/events/arm_cortex_a65_events.h
                        lib/events/arm_cortex_a710_events.h
                        lib/events/arm_cortex_a715_events.h
                        lib/events/arm_cortex_a72_events.h
                        lib/events/arm_cortex_a73_events.h
                        lib/events/arm_cortex_a75_events.h
                        lib/events/arm_cortex_a76ae_events.h
                        lib/events/arm_cortex_a77_events.h
                        lib/events/arm_cortex_a78c_events.h
                        lib/events/arm_cortex_r4_events.h
                        lib/events/arm_cortex_r52_events.h
                        lib/events/arm_cortex_r5_events.h
                        lib/events/arm_cortex_r7_events.h
                        lib/events/arm_cortex_r82_events.h
                        lib/events/arm_cortex_r8_events.h
                        lib/events/arm_cortex_x1_events.h
                        lib/events/arm_cortex_x1c_events.h
                        lib/events/arm_cortex_x2_events.h
                        lib/events/arm_cortex_x3_events.h
                        lib/events/arm_neoverse_e1_events.h
                        lib/events/arm_neoverse_v1_events.h
                        lib/events/arm_neoverse_v2_events.h
                        lib/events/arm_rainier_events.h
    )
    add_library(pfm_aarch64 ${AARCH64_SOURCE})
    target_include_directories(pfm_aarch64 PRIVATE ${PROJECT_SOURCE_DIR}/third_party/libpfm4/include/)
    target_link_libraries(pfm PRIVATE pfm_aarch64)
endif()

if(${MPERF_ARCH} STREQUAL armv7)
    file(GLOB_RECURSE ARMV7_SOURCE lib/events/arm_1176_events.h
                    lib/events/arm_cortex_a15_events.h
                    lib/events/arm_cortex_a53_events.h
                    lib/events/arm_cortex_a57_events.h
                    lib/events/arm_cortex_a7_events.h
                    lib/events/arm_cortex_a8_events.h
                    lib/events/arm_cortex_a9_events.h
                    lib/events/arm_qcom_krait_events.h
                    lib/events/arm_xgene_events.h
                    lib/events/arm_cortex_a34_events.h
                    lib/events/arm_cortex_a55_events.h
                    lib/events/arm_cortex_a76_events.h
                    lib/events/arm_cortex_a78_events.h
                    lib/events/arm_cortex_a510_events.h
                    lib/events/arm_cortex_a710_events.h
                    lib/events/arm_cortex_aX1_events.h
                    lib/events/arm_cavium_tx2_events.h
                    lib/events/arm_marvell_tx2_unc_events.h
                    lib/events/arm_fujitsu_a64fx_events.h
                    lib/events/arm_neoverse_n1_events.h
                    lib/events/arm_neoverse_n2_events.h
                    lib/events/arm_hisilicon_kunpeng_events.h
                    lib/events/arm_hisilicon_kunpeng_unc_events.h
                    lib/pfmlib_arm.c
                    lib/pfmlib_arm_armv6.c
                    lib/pfmlib_arm_armv7_pmuv1.c
                    lib/pfmlib_arm_armv8.c
                    lib/pfmlib_arm_perf_event.c
                    lib/pfmlib_arm_priv.h
                    lib/pfmlib_perf_event_priv.h
                    lib/pfmlib_priv.h
                    lib/pfmlib_kunpeng_unc_perf_event.c
                    lib/pfmlib_tx2_unc_perf_event.c
                    lib/events/arm_1136_events.h
                    lib/events/arm_cortex_a17_events.h
                    lib/events/arm_cortex_a32_events.h
                    lib/events/arm_cortex_a34_events.h
                    lib/events/arm_cortex_a35_events.h
                    lib/events/arm_cortex_a5_events.h
                    lib/events/arm_cortex_a65_events.h
                    lib/events/arm_cortex_a710_events.h
                    lib/events/arm_cortex_a715_events.h
                    lib/events/arm_cortex_a72_events.h
                    lib/events/arm_cortex_a73_events.h
                    lib/events/arm_cortex_a75_events.h
                    lib/events/arm_cortex_a76ae_events.h
                    lib/events/arm_cortex_a77_events.h
                    lib/events/arm_cortex_a78c_events.h
                    lib/events/arm_cortex_r4_events.h
                    lib/events/arm_cortex_r52_events.h
                    lib/events/arm_cortex_r5_events.h
                    lib/events/arm_cortex_r7_events.h
                    lib/events/arm_cortex_r82_events.h
                    lib/events/arm_cortex_r8_events.h
                    lib/events/arm_cortex_x1_events.h
                    lib/events/arm_cortex_x1c_events.h
                    lib/events/arm_cortex_x2_events.h
                    lib/events/arm_cortex_x3_events.h
                    lib/events/arm_neoverse_e1_events.h
                    lib/events/arm_neoverse_v1_events.h
                    lib/events/arm_neoverse_v2_events.h
                    lib/events/arm_rainier_events.h
    )
    add_library(pfm_armv7 ${ARMV7_SOURCE})
    target_include_directories(pfm_armv7 PRIVATE ${PROJECT_SOURCE_DIR}/third_party/libpfm4/include/)
    target_link_libraries(pfm PRIVATE pfm_armv7)
endif()