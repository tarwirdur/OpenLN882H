/**
 * @file     hal_misc.h
 * @author   BSP Team 
 * @brief    This file contains the read and write operations of syscon and syscmp registers.
 * @version  0.0.0.1
 * @date     2021-08-17
 * 
 * @copyright Copyright (c) 2021 Shanghai Lightning Semiconductor Technology Co. Ltd
 * 
 */

#ifndef __HAL_MISC_H
#define __HAL_MISC_H


#include "hal_common.h"

#ifdef __cplusplus
    extern "C" {
#endif // __cplusplus

void     hal_misc_awo_set_pclk1_div_para_up(uint8_t value);
void     hal_misc_awo_set_hclk_div_para_up(uint8_t value);
void     hal_misc_awo_set_pclk1_div_para_m1(uint8_t value);
void     hal_misc_awo_set_hclk_div_para_m1(uint8_t value);
uint8_t  hal_misc_awo_get_pclk1_div_para_m1(void);
uint8_t  hal_misc_awo_get_hclk_div_para_m1(void);
void     hal_misc_awo_set_swclkg_mac_80m(uint8_t value);
void     hal_misc_awo_set_swclkg_mac_40m(uint8_t value);
void     hal_misc_awo_set_swclkg_mac_20m(uint8_t value);
void     hal_misc_awo_set_swclkg_phy(uint8_t value);
void     hal_misc_awo_set_swclkg_wic(uint8_t value);
void     hal_misc_awo_set_swclkg_rtc(uint8_t value);
uint8_t  hal_misc_awo_get_swclkg_mac_80m(void);
uint8_t  hal_misc_awo_get_swclkg_mac_40m(void);
uint8_t  hal_misc_awo_get_swclkg_mac_20m(void);
uint8_t  hal_misc_awo_get_swclkg_phy(void);
uint8_t  hal_misc_awo_get_swclkg_wic(void);
uint8_t  hal_misc_awo_get_swclkg_rtc(void);
void     hal_misc_awo_set_srstn_all(uint8_t value);
void     hal_misc_awo_set_srstn_phy(uint8_t value);
void     hal_misc_awo_set_srstn_rtc(uint8_t value);
void     hal_misc_awo_set_srstn_wic(uint8_t value);
void     hal_misc_awo_set_srstn_pmu(uint8_t value);
uint8_t  hal_misc_awo_get_srstn_all(void);
uint8_t  hal_misc_awo_get_srstn_phy(void);
uint8_t  hal_misc_awo_get_srstn_rtc(void);
uint8_t  hal_misc_awo_get_srstn_wic(void);
uint8_t  hal_misc_awo_get_srstn_pmu(void);
void     hal_misc_awo_set_clk_src_sel(uint8_t value);
uint8_t  hal_misc_awo_get_clk_src_sel(void);
void     hal_misc_awo_set_r_xtal40m_syspll_fref_en(uint8_t value);
void     hal_misc_awo_set_r_xtal40m_cap_bit(uint8_t value);
void     hal_misc_awo_set_r_xtal40m_ibsel(uint8_t value);
void     hal_misc_awo_set_r_xtal40m_ldo_vbit(uint8_t value);
void     hal_misc_awo_set_r_tm2(uint8_t value);
void     hal_misc_awo_set_r_tm1(uint8_t value);
void     hal_misc_awo_set_bod_vth(uint8_t value);
void     hal_misc_awo_set_en_bod(uint8_t value);
void     hal_misc_awo_set_r_vtrim(uint8_t value);
uint8_t  hal_misc_awo_get_r_xtal40m_syspll_fref_en(void);
uint8_t  hal_misc_awo_get_r_xtal40m_cap_bit(void);
uint8_t  hal_misc_awo_get_r_xtal40m_ibsel(void);
uint8_t  hal_misc_awo_get_r_xtal40m_ldo_vbit(void);
uint8_t  hal_misc_awo_get_r_tm2(void);
uint8_t  hal_misc_awo_get_r_tm1(void);
uint8_t  hal_misc_awo_get_bod_vth(void);
uint8_t  hal_misc_awo_get_en_bod(void);
uint8_t  hal_misc_awo_get_r_vtrim(void);
void     hal_misc_awo_set_o_digpll_po(uint8_t value);
void     hal_misc_awo_set_o_phy_pd_en(uint8_t value);
void     hal_misc_awo_set_o_phy_po_en(uint8_t value);
void     hal_misc_awo_set_o_sram_pd_en(uint8_t value);
void     hal_misc_awo_set_o_sram_po_en(uint8_t value);
void     hal_misc_awo_set_o_digldo_retvdd(uint8_t value);
void     hal_misc_awo_set_o_digldo_norvdd(uint8_t value);
void     hal_misc_awo_set_ldo18_pd_en(uint8_t value);
void     hal_misc_awo_set_ldo18_po_en(uint8_t value);
void     hal_misc_awo_set_o_cpucore_retreg_po(uint8_t value);
void     hal_misc_awo_set_o_pdcmp_po(uint8_t value);
uint8_t  hal_misc_awo_get_o_digpll_po(void);
uint8_t  hal_misc_awo_get_o_phy_pd_en(void);
uint8_t  hal_misc_awo_get_o_phy_po_en(void);
uint8_t  hal_misc_awo_get_o_sram_pd_en(void);
uint8_t  hal_misc_awo_get_o_sram_po_en(void);
uint8_t  hal_misc_awo_get_o_digldo_retvdd(void);
uint8_t  hal_misc_awo_get_o_digldo_norvdd(void);
uint8_t  hal_misc_awo_get_ldo18_pd_en(void);
uint8_t  hal_misc_awo_get_ldo18_po_en(void);
uint8_t  hal_misc_awo_get_o_cpucore_retreg_po(void);
uint8_t  hal_misc_awo_get_o_pdcmp_po(void);
void     hal_misc_awo_set_o_sw_pd_start(uint8_t value);
void     hal_misc_awo_set_o_sw_po_start(uint8_t value);
void     hal_misc_awo_set_ext_inrp_sense_7(uint8_t value);
void     hal_misc_awo_set_ext_inrp_sense_6(uint8_t value);
void     hal_misc_awo_set_ext_inrp_sense_5(uint8_t value);
void     hal_misc_awo_set_ext_inrp_sense_4(uint8_t value);
void     hal_misc_awo_set_ext_inrp_sense_3(uint8_t value);
void     hal_misc_awo_set_ext_inrp_sense_2(uint8_t value);
void     hal_misc_awo_set_ext_inrp_sense_1(uint8_t value);
void     hal_misc_awo_set_ext_inrp_sense_0(uint8_t value);
uint8_t  hal_misc_awo_get_ext_inrp_sense_7(void);
uint8_t  hal_misc_awo_get_ext_inrp_sense_6(void);
uint8_t  hal_misc_awo_get_ext_inrp_sense_5(void);
uint8_t  hal_misc_awo_get_ext_inrp_sense_4(void);
uint8_t  hal_misc_awo_get_ext_inrp_sense_3(void);
uint8_t  hal_misc_awo_get_ext_inrp_sense_2(void);
uint8_t  hal_misc_awo_get_ext_inrp_sense_1(void);
uint8_t  hal_misc_awo_get_ext_inrp_sense_0(void);
void     hal_misc_awo_set_pin_is_inrp_src(uint8_t value);
void     hal_misc_awo_set_ext_inrp_en(uint8_t value);
uint8_t  hal_misc_awo_get_pin_is_inrp_src(void);
uint8_t  hal_misc_awo_get_ext_inrp_en(void);
uint8_t  hal_misc_awo_get_ext_rawinrp_value(void);
uint8_t  hal_misc_awo_get_ext_inrp_value_r(void);
void     hal_misc_awo_set_ext_inrp_clr_r(uint8_t value);
void     hal_misc_awo_set_pmu_seq_time(uint8_t value);
void     hal_misc_awo_set_o_vdd11_l2h_dly(uint8_t value);
void     hal_misc_awo_set_o_vdd11_h2l_dly(uint8_t value);
void     hal_misc_awo_set_o_clk_swc_dly(uint8_t value);
void     hal_misc_awo_set_o_pll_stb_dly(uint8_t value);
void     hal_misc_awo_set_o_xtal40_stb_dly(uint8_t value);
void     hal_misc_awo_set_pmu_enable(uint8_t value);
uint8_t  hal_misc_awo_get_pmu_seq_time(void);
uint8_t  hal_misc_awo_get_o_vdd11_l2h_dly(void);
uint8_t  hal_misc_awo_get_o_vdd11_h2l_dly(void);
uint8_t  hal_misc_awo_get_o_clk_swc_dly(void);
uint8_t  hal_misc_awo_get_o_pll_stb_dly(void);
uint8_t  hal_misc_awo_get_o_xtal40_stb_dly(void);
uint8_t  hal_misc_awo_get_pmu_enable(void);
void     hal_misc_awo_set_lp_mode_awo(uint8_t value);
void     hal_misc_awo_set_r_io_retention(uint8_t value);
void     hal_misc_awo_set_r_pmu_unret_en(uint8_t value);
void     hal_misc_awo_set_r_pmu_ret_en(uint8_t value);
void     hal_misc_awo_set_o_cpu_lockup_rst_mask(uint8_t value);
void     hal_misc_awo_set_o_wdt_rst_mask(uint8_t value);
void     hal_misc_awo_set_o_digldo_debug_mode(uint8_t value);
void     hal_misc_awo_set_o_pd_switch_intv(uint8_t value);
void     hal_misc_awo_set_o_sdio_rstreq_mask(uint8_t value);
void     hal_misc_awo_set_o_cpu_rstreq_mask(uint8_t value);
void     hal_misc_awo_set_o_pad_rst_mask(uint8_t value);
void     hal_misc_awo_set_o_flash_mode(uint8_t value);
uint8_t  hal_misc_awo_get_lp_mode_awo(void);
uint8_t  hal_misc_awo_get_r_io_retention(void);
uint8_t  hal_misc_awo_get_r_pmu_unret_en(void);
uint8_t  hal_misc_awo_get_r_pmu_ret_en(void);
uint8_t  hal_misc_awo_get_o_cpu_lockup_rst_mask(void);
uint8_t  hal_misc_awo_get_o_wdt_rst_mask(void);
uint8_t  hal_misc_awo_get_o_digldo_debug_mode(void);
uint8_t  hal_misc_awo_get_o_pd_switch_intv(void);
uint8_t  hal_misc_awo_get_o_sdio_rstreq_mask(void);
uint8_t  hal_misc_awo_get_o_cpu_rstreq_mask(void);
uint8_t  hal_misc_awo_get_o_pad_rst_mask(void);
uint8_t  hal_misc_awo_get_o_flash_mode(void);
void     hal_misc_awo_set_r_idle_reg(uint32_t value);
uint32_t hal_misc_awo_get_r_idle_reg(void);
uint8_t  hal_misc_awo_get_pmu_fsm(void);
uint8_t  hal_misc_awo_get_i_boot_mode(void);
void     hal_misc_awo_set_r_rco32k_cbit(uint8_t value);
void     hal_misc_awo_set_r_rco32k_bitsel(uint8_t value);
void     hal_misc_awo_set_r_rco32k_rbit(uint8_t value);
void     hal_misc_awo_set_r_rco32k_ibit(uint8_t value);
uint8_t  hal_misc_awo_get_r_rco32k_cbit(void);
uint8_t  hal_misc_awo_get_r_rco32k_bitsel(void);
uint8_t  hal_misc_awo_get_r_rco32k_rbit(void);
uint8_t  hal_misc_awo_get_r_rco32k_ibit(void);
void     hal_misc_awo_set_syspll_ref2x_en(uint8_t value);
void     hal_misc_awo_set_syspll_test_en(uint8_t value);
void     hal_misc_awo_set_syspll_sdmclk_test_en(uint8_t value);
void     hal_misc_awo_set_syspll_rvco_h_test(uint8_t value);
void     hal_misc_awo_set_syspll_rvco_l_test(uint8_t value);
void     hal_misc_awo_set_syspll_sdm_clk_sel(uint8_t value);
void     hal_misc_awo_set_syspll_rst(uint8_t value);
void     hal_misc_awo_set_syspll_cp_ibit(uint8_t value);
void     hal_misc_awo_set_syspll_en(uint8_t value);
void     hal_misc_awo_set_syspll_lf_ibit(uint8_t value);
void     hal_misc_awo_set_syspll_vreg_bit(uint8_t value);
void     hal_misc_awo_set_syspll_cpaux_ibit(uint8_t value);
void     hal_misc_awo_set_syspll_div(uint8_t value);
uint8_t  hal_misc_awo_get_syspll_ref2x_en(void);
uint8_t  hal_misc_awo_get_syspll_test_en(void);
uint8_t  hal_misc_awo_get_syspll_sdmclk_test_en(void);
uint8_t  hal_misc_awo_get_syspll_rvco_h_test(void);
uint8_t  hal_misc_awo_get_syspll_rvco_l_test(void);
uint8_t  hal_misc_awo_get_syspll_sdm_clk_sel(void);
uint8_t  hal_misc_awo_get_syspll_rst(void);
uint8_t  hal_misc_awo_get_syspll_cp_ibit(void);
uint8_t  hal_misc_awo_get_syspll_en(void);
uint8_t  hal_misc_awo_get_syspll_lf_ibit(void);
uint8_t  hal_misc_awo_get_syspll_vreg_bit(void);
uint8_t  hal_misc_awo_get_syspll_cpaux_ibit(void);
uint8_t  hal_misc_awo_get_syspll_div(void);
void     hal_misc_awo_set_r_syspll_lock_polarity(uint8_t value);
void     hal_misc_awo_set_r_syspll_lock_deb_dly(uint8_t value);
uint8_t  hal_misc_awo_get_r_syspll_lock(void);
uint8_t  hal_misc_awo_get_r_syspll_lock_polarity(void);
uint8_t  hal_misc_awo_get_r_syspll_lock_deb_dly(void);
void     hal_misc_awo_set_o_cpu_sleep_time_l(uint32_t value);
uint32_t hal_misc_awo_get_o_cpu_sleep_time_l(void);
void     hal_misc_awo_set_o_cpu_sleep_inten(uint8_t value);
void     hal_misc_awo_set_o_cpu_sleep_counter_bp(uint8_t value);
void     hal_misc_awo_set_o_cpu_sleep_time_h(uint16_t value);
uint8_t  hal_misc_awo_get_o_cpu_sleep_inten(void);
uint8_t  hal_misc_awo_get_o_cpu_sleep_counter_bp(void);
uint16_t hal_misc_awo_get_o_cpu_sleep_time_h(void);
uint16_t hal_misc_awo_get_i_rco32k_period_ns(void);
uint32_t hal_misc_awo_get_i_real_sleep_time_l(void);
uint16_t hal_misc_awo_get_i_real_sleep_time_h(void);
void     hal_misc_awo_set_swd_en(uint8_t value);
uint8_t  hal_misc_awo_get_swd_en(void);
void     hal_misc_awo_set_dbg_host_en(uint8_t value);
uint8_t  hal_misc_awo_get_dbg_host_en(void);
void     hal_misc_awo_set_vlimit_vset_awo(uint8_t value);
void     hal_misc_awo_set_ldo18_phy_vset(uint8_t value);
void     hal_misc_awo_set_ldo15_1_vset(uint8_t value);
void     hal_misc_awo_set_ldo18_4_vset(uint8_t value);
void     hal_misc_awo_set_ldo18_3_vset(uint8_t value);
void     hal_misc_awo_set_ldo18_2_vset(uint8_t value);
void     hal_misc_awo_set_ldo18_1_vset(uint8_t value);
uint8_t  hal_misc_awo_get_vlimit_vset_awo(void);
uint8_t  hal_misc_awo_get_ldo18_phy_vset(void);
uint8_t  hal_misc_awo_get_ldo15_1_vset(void);
uint8_t  hal_misc_awo_get_ldo18_4_vset(void);
uint8_t  hal_misc_awo_get_ldo18_3_vset(void);
uint8_t  hal_misc_awo_get_ldo18_2_vset(void);
uint8_t  hal_misc_awo_get_ldo18_1_vset(void);
void     hal_misc_cmp_set_ble_div_para_up(uint8_t value);
void     hal_misc_cmp_set_rfintf_div_para_up(uint8_t value);
void     hal_misc_cmp_set_timer4_div_para_up(uint8_t value);
void     hal_misc_cmp_set_timer3_div_para_up(uint8_t value);
void     hal_misc_cmp_set_timer2_div_para_up(uint8_t value);
void     hal_misc_cmp_set_timer1_div_para_up(uint8_t value);
void     hal_misc_cmp_set_pclk0_div_para_up(uint8_t value);
void     hal_misc_cmp_set_ble_div_para_m1(uint8_t value);
void     hal_misc_cmp_set_rfintf_div_para_m1(uint8_t value);
void     hal_misc_cmp_set_pclk0_div_para_m1(uint8_t value);
uint8_t  hal_misc_cmp_get_ble_div_para_m1(void);
uint8_t  hal_misc_cmp_get_rfintf_div_para_m1(void);
uint8_t  hal_misc_cmp_get_pclk0_div_para_m1(void);
void     hal_misc_cmp_set_timer4_div_para_m1(uint8_t value);
void     hal_misc_cmp_set_timer3_div_para_m1(uint8_t value);
void     hal_misc_cmp_set_timer2_div_para_m1(uint8_t value);
void     hal_misc_cmp_set_timer1_div_para_m1(uint8_t value);
uint8_t  hal_misc_cmp_get_timer4_div_para_m1(void);
uint8_t  hal_misc_cmp_get_timer3_div_para_m1(void);
uint8_t  hal_misc_cmp_get_timer2_div_para_m1(void);
uint8_t  hal_misc_cmp_get_timer1_div_para_m1(void);
void     hal_misc_cmp_set_aes_gate_en(uint8_t value);
void     hal_misc_cmp_set_trng_gate_en(uint8_t value);
void     hal_misc_cmp_set_ef_gate_en(uint8_t value);
void     hal_misc_cmp_set_pwm_gate_en(uint8_t value);
void     hal_misc_cmp_set_rfreg_gate_en(uint8_t value);
void     hal_misc_cmp_set_dma_gate_en(uint8_t value);
void     hal_misc_cmp_set_cache_gate_en(uint8_t value);
void     hal_misc_cmp_set_mac_gate_en(uint8_t value);
void     hal_misc_cmp_set_sdio_gate_en(uint8_t value);
void     hal_misc_cmp_set_dbgh_gate_en(uint8_t value);
void     hal_misc_cmp_set_timer4_gate_en(uint8_t value);
void     hal_misc_cmp_set_timer3_gate_en(uint8_t value);
void     hal_misc_cmp_set_timer2_gate_en(uint8_t value);
void     hal_misc_cmp_set_timer1_gate_en(uint8_t value);
void     hal_misc_cmp_set_timer_gate_en(uint8_t value);
void     hal_misc_cmp_set_wdt_gate_en(uint8_t value);
void     hal_misc_cmp_set_uart2_gate_en(uint8_t value);
void     hal_misc_cmp_set_uart1_gate_en(uint8_t value);
void     hal_misc_cmp_set_uart0_gate_en(uint8_t value);
void     hal_misc_cmp_set_i2c0_gate_en(uint8_t value);
void     hal_misc_cmp_set_ws2811_gate_en(uint8_t value);
void     hal_misc_cmp_set_spi1_gate_en(uint8_t value);
void     hal_misc_cmp_set_spi0_gate_en(uint8_t value);
void     hal_misc_cmp_set_gpiob_gate_en(uint8_t value);
void     hal_misc_cmp_set_gpioa_gate_en(uint8_t value);
void     hal_misc_cmp_set_i2s_gate_en(uint8_t value);
void     hal_misc_cmp_set_adcc_gate_en(uint8_t value);
void     hal_misc_cmp_set_qspi_gate_en(uint8_t value);
uint8_t  hal_misc_cmp_get_aes_gate_en(void);
uint8_t  hal_misc_cmp_get_trng_gate_en(void);
uint8_t  hal_misc_cmp_get_ef_gate_en(void);
uint8_t  hal_misc_cmp_get_pwm_gate_en(void);
uint8_t  hal_misc_cmp_get_rfreg_gate_en(void);
uint8_t  hal_misc_cmp_get_dma_gate_en(void);
uint8_t  hal_misc_cmp_get_cache_gate_en(void);
uint8_t  hal_misc_cmp_get_mac_gate_en(void);
uint8_t  hal_misc_cmp_get_sdio_gate_en(void);
uint8_t  hal_misc_cmp_get_dbgh_gate_en(void);
uint8_t  hal_misc_cmp_get_timer4_gate_en(void);
uint8_t  hal_misc_cmp_get_timer3_gate_en(void);
uint8_t  hal_misc_cmp_get_timer2_gate_en(void);
uint8_t  hal_misc_cmp_get_timer1_gate_en(void);
uint8_t  hal_misc_cmp_get_timer_gate_en(void);
uint8_t  hal_misc_cmp_get_wdt_gate_en(void);
uint8_t  hal_misc_cmp_get_uart2_gate_en(void);
uint8_t  hal_misc_cmp_get_uart1_gate_en(void);
uint8_t  hal_misc_cmp_get_uart0_gate_en(void);
uint8_t  hal_misc_cmp_get_i2c0_gate_en(void);
uint8_t  hal_misc_cmp_get_ws2811_gate_en(void);
uint8_t  hal_misc_cmp_get_spi1_gate_en(void);
uint8_t  hal_misc_cmp_get_spi0_gate_en(void);
uint8_t  hal_misc_cmp_get_gpiob_gate_en(void);
uint8_t  hal_misc_cmp_get_gpioa_gate_en(void);
uint8_t  hal_misc_cmp_get_i2s_gate_en(void);
uint8_t  hal_misc_cmp_get_adcc_gate_en(void);
uint8_t  hal_misc_cmp_get_qspi_gate_en(void);
uint8_t  hal_misc_cmp_get_ble_gate_en(void);
void     hal_misc_cmp_set_srstn_aes(uint8_t value);
void     hal_misc_cmp_set_srstn_trng(uint8_t value);
void     hal_misc_cmp_set_srstn_ef(uint8_t value);
void     hal_misc_cmp_set_srstn_pwm(uint8_t value);
void     hal_misc_cmp_set_srstn_rfreg(uint8_t value);
void     hal_misc_cmp_set_srstn_dma(uint8_t value);
void     hal_misc_cmp_set_srstn_cache(uint8_t value);
void     hal_misc_cmp_set_srstn_mac(uint8_t value);
void     hal_misc_cmp_set_srstn_sdio(uint8_t value);
void     hal_misc_cmp_set_srstn_dbgh(uint8_t value);
void     hal_misc_cmp_set_srstn_timer(uint8_t value);
void     hal_misc_cmp_set_srstn_wdt(uint8_t value);
void     hal_misc_cmp_set_srstn_uart2(uint8_t value);
void     hal_misc_cmp_set_srstn_uart1(uint8_t value);
void     hal_misc_cmp_set_srstn_uart0(uint8_t value);
void     hal_misc_cmp_set_srstn_i2c0(uint8_t value);
void     hal_misc_cmp_set_srstn_ws2811(uint8_t value);
void     hal_misc_cmp_set_srstn_spi1(uint8_t value);
void     hal_misc_cmp_set_srstn_spi0(uint8_t value);
void     hal_misc_cmp_set_srstn_gpiob(uint8_t value);
void     hal_misc_cmp_set_srstn_gpioa(uint8_t value);
void     hal_misc_cmp_set_srstn_i2s(uint8_t value);
void     hal_misc_cmp_set_srstn_adcc(uint8_t value);
void     hal_misc_cmp_set_srstn_qspi(uint8_t value);
uint8_t  hal_misc_cmp_get_srstn_aes(void);
uint8_t  hal_misc_cmp_get_srstn_trng(void);
uint8_t  hal_misc_cmp_get_srstn_ef(void);
uint8_t  hal_misc_cmp_get_srstn_pwm(void);
uint8_t  hal_misc_cmp_get_srstn_rfreg(void);
uint8_t  hal_misc_cmp_get_srstn_dma(void);
uint8_t  hal_misc_cmp_get_srstn_cache(void);
uint8_t  hal_misc_cmp_get_srstn_mac(void);
uint8_t  hal_misc_cmp_get_srstn_sdio(void);
uint8_t  hal_misc_cmp_get_srstn_dbgh(void);
uint8_t  hal_misc_cmp_get_srstn_timer(void);
uint8_t  hal_misc_cmp_get_srstn_wdt(void);
uint8_t  hal_misc_cmp_get_srstn_uart2(void);
uint8_t  hal_misc_cmp_get_srstn_uart1(void);
uint8_t  hal_misc_cmp_get_srstn_uart0(void);
uint8_t  hal_misc_cmp_get_srstn_i2c0(void);
uint8_t  hal_misc_cmp_get_srstn_ws2811(void);
uint8_t  hal_misc_cmp_get_srstn_spi1(void);
uint8_t  hal_misc_cmp_get_srstn_spi0(void);
uint8_t  hal_misc_cmp_get_srstn_gpiob(void);
uint8_t  hal_misc_cmp_get_srstn_gpioa(void);
uint8_t  hal_misc_cmp_get_srstn_i2s(void);
uint8_t  hal_misc_cmp_get_srstn_adcc(void);
uint8_t  hal_misc_cmp_get_srstn_qspi(void);
uint8_t  hal_misc_cmp_get_srstn_ble(void);
void     hal_misc_cmp_set_i2s_io_en1(uint8_t value);
void     hal_misc_cmp_set_i2s_io_en0(uint8_t value);
void     hal_misc_cmp_set_spif_io_en(uint8_t value);
void     hal_misc_cmp_set_sdio_io_en(uint8_t value);
uint8_t  hal_misc_cmp_get_i2s_io_en1(void);
uint8_t  hal_misc_cmp_get_i2s_io_en0(void);
uint8_t  hal_misc_cmp_get_spif_io_en(void);
uint8_t  hal_misc_cmp_get_sdio_io_en(void);
void     hal_misc_cmp_set_mcu_stcalib(uint32_t value);
uint32_t hal_misc_cmp_get_mcu_stcalib(void);
void     hal_misc_cmp_set_idle_reg(uint32_t value);
uint32_t hal_misc_cmp_get_idle_reg(void);
void     hal_misc_cmp_set_mac_txabort_reqn(uint8_t value);
uint8_t  hal_misc_cmp_get_mac_txabort_reqn(void);
void     hal_misc_cmp_set_ram32_ema(uint8_t value);
void     hal_misc_cmp_set_ram31_ema(uint8_t value);
void     hal_misc_cmp_set_ram30_ema(uint8_t value);
void     hal_misc_cmp_set_ram2_ema(uint8_t value);
void     hal_misc_cmp_set_ram1_ema(uint8_t value);
void     hal_misc_cmp_set_ram0_ema(uint8_t value);
void     hal_misc_cmp_set_rom_ema(uint8_t value);
uint8_t  hal_misc_cmp_getram32_ema(void);
uint8_t  hal_misc_cmp_getram31_ema(void);
uint8_t  hal_misc_cmp_getram30_ema(void);
uint8_t  hal_misc_cmp_getram2_ema(void);
uint8_t  hal_misc_cmp_getram1_ema(void);
uint8_t  hal_misc_cmp_getram0_ema(void);
uint8_t  hal_misc_cmp_getrom_ema(void);
void     hal_misc_cmp_set_ram35_emaw(uint8_t value);
void     hal_misc_cmp_set_ram34_emaw(uint8_t value);
void     hal_misc_cmp_set_ram33_emaw(uint8_t value);
void     hal_misc_cmp_set_ram32_emaw(uint8_t value);
void     hal_misc_cmp_set_ram31_emaw(uint8_t value);
void     hal_misc_cmp_set_ram30_emaw(uint8_t value);
void     hal_misc_cmp_set_ram2_emaw(uint8_t value);
void     hal_misc_cmp_set_ram1_emaw(uint8_t value);
void     hal_misc_cmp_set_ram0_emaw(uint8_t value);
void     hal_misc_cmp_set_ram35_ema(uint8_t value);
void     hal_misc_cmp_set_ram34_ema(uint8_t value);
void     hal_misc_cmp_set_ram33_ema(uint8_t value);
uint8_t  hal_misc_cmp_get_ram35_emaw(void);
uint8_t  hal_misc_cmp_get_ram34_emaw(void);
uint8_t  hal_misc_cmp_get_ram33_emaw(void);
uint8_t  hal_misc_cmp_get_ram32_emaw(void);
uint8_t  hal_misc_cmp_get_ram31_emaw(void);
uint8_t  hal_misc_cmp_get_ram30_emaw(void);
uint8_t  hal_misc_cmp_get_ram2_emaw(void);
uint8_t  hal_misc_cmp_get_ram1_emaw(void);
uint8_t  hal_misc_cmp_get_ram0_emaw(void);
uint8_t  hal_misc_cmp_get_ram35_ema(void);
uint8_t  hal_misc_cmp_get_ram34_ema(void);
void     hal_misc_cmp_set_clk_test_sel1(uint8_t value);
void     hal_misc_cmp_set_clk_test_en1(uint8_t value);
void     hal_misc_cmp_set_clk_test_sel0(uint8_t value);
void     hal_misc_cmp_set_clk_test_en0(uint8_t value);
uint8_t  hal_misc_cmp_get_clk_test_sel1(void);
uint8_t  hal_misc_cmp_get_clk_test_en1(void);
uint8_t  hal_misc_cmp_get_clk_test_sel0(void);
uint8_t  hal_misc_cmp_get_clk_test_en0(void);
void     hal_misc_cmp_set_rfreg_base_addr(uint16_t value);
void     hal_misc_cmp_set_rfreg_len(uint16_t value);
uint16_t hal_misc_cmp_get_rfreg_base_addr(void);
uint16_t hal_misc_cmp_get_rfreg_len(void);
void     hal_misc_cmp_set_rfreg_restore(uint8_t value);
void     hal_misc_cmp_set_rfreg_save(uint8_t value);
uint8_t  hal_misc_cmp_get_restore_done(void);
uint8_t  hal_misc_cmp_get_save_done(void);
void     hal_misc_cmp_set_debug_io_en(uint8_t value);
uint8_t  hal_misc_cmp_get_debug_io_en(void);
void     hal_misc_cmp_set_mac_debug_port_sel(uint8_t value);
void     hal_misc_cmp_set_debug_port_sel(uint8_t value);
void     hal_misc_cmp_set_debug_sw(uint16_t value);
uint8_t  hal_misc_cmp_get_mac_debug_port_sel(void);
uint8_t  hal_misc_cmp_get_debug_port_sel(void);
uint16_t hal_misc_cmp_get_debug_sw(void);
void     hal_misc_cmp_set_pa_ovd_ie(uint8_t value);
uint8_t  hal_misc_cmp_get_pa_ovd_ie(void);
void     hal_misc_cmp_set_pa_ovd(uint8_t value);


void     hal_misc_reset_all(void);
void     hal_misc_reset_phy(void);
void     hal_misc_reset_rtc(void);
void     hal_misc_reset_wic(void);
void     hal_misc_reset_pmu(void);

void     hal_misc_reset_aes(void);
void     hal_misc_reset_trng(void);
void     hal_misc_reset_ef(void);
void     hal_misc_reset_pwm(void);
void     hal_misc_reset_rfreg(void);
void     hal_misc_reset_dma(void);
void     hal_misc_reset_cache(void);
void     hal_misc_reset_mac(void);
void     hal_misc_reset_sdio(void);
void     hal_misc_reset_dbgh(void);
void     hal_misc_reset_timer(void);
void     hal_misc_reset_wdt(void);
void     hal_misc_reset_uart2(void);
void     hal_misc_reset_uart1(void);
void     hal_misc_reset_uart0(void);
void     hal_misc_reset_i2c0(void);
void     hal_misc_reset_ws2811(void);
void     hal_misc_reset_spi1(void);
void     hal_misc_reset_spi0(void);
void     hal_misc_reset_gpiob(void);
void     hal_misc_reset_gpioa(void);
void     hal_misc_reset_i2s(void);
void     hal_misc_reset_adcc(void);
void     hal_misc_reset_qspi(void);


void     hal_misc_set_aes_clk_en(hal_en_t en);
void     hal_misc_set_trng_clk_en(hal_en_t en);
void     hal_misc_set_ef_clk_en(hal_en_t en);
void     hal_misc_set_pwm_clk_en(hal_en_t en);
void     hal_misc_set_rfreg_clk_en(hal_en_t en);
void     hal_misc_set_dma_clk_en(hal_en_t en);
void     hal_misc_set_cache_clk_en(hal_en_t en);
void     hal_misc_set_mac_clk_en(hal_en_t en);
void     hal_misc_set_sdio_clk_en(hal_en_t en);
void     hal_misc_set_dbgh_clk_en(hal_en_t en);
void     hal_misc_set_timer4_clk_en(hal_en_t en);
void     hal_misc_set_timer3_clk_en(hal_en_t en);
void     hal_misc_set_timer2_clk_en(hal_en_t en);
void     hal_misc_set_timer1_clk_en(hal_en_t en);
void     hal_misc_set_timer_clk_en(hal_en_t en);
void     hal_misc_set_wdt_clk_en(hal_en_t en);
void     hal_misc_set_uart2_clk_en(hal_en_t en);
void     hal_misc_set_uart1_clk_en(hal_en_t en);
void     hal_misc_set_uart0_clk_en(hal_en_t en);
void     hal_misc_set_i2c0_clk_en(hal_en_t en);
void     hal_misc_set_ws2811_clk_en(hal_en_t en);
void     hal_misc_set_spi1_clk_en(hal_en_t en);
void     hal_misc_set_spi0_clk_en(hal_en_t en);
void     hal_misc_set_gpiob_clk_en(hal_en_t en);
void     hal_misc_set_gpioa_clk_en(hal_en_t en);
void     hal_misc_set_i2s_clk_en(hal_en_t en);
void     hal_misc_set_adcc_clk_en(hal_en_t en);
void     hal_misc_set_qspi_clk_en(hal_en_t en);

hal_en_t hal_misc_get_aes_clk_en(void);
hal_en_t hal_misc_get_trng_clk_en(void);
hal_en_t hal_misc_get_ef_clk_en(void);
hal_en_t hal_misc_get_pwm_clk_en(void);
hal_en_t hal_misc_get_rfreg_clk_en(void);
hal_en_t hal_misc_get_dma_clk_en(void);
hal_en_t hal_misc_get_cache_clk_en(void);
hal_en_t hal_misc_get_mac_clk_en(void);
hal_en_t hal_misc_get_sdio_clk_en(void);
hal_en_t hal_misc_get_dbgh_clk_en(void);
hal_en_t hal_misc_get_timer4_clk_en(void);
hal_en_t hal_misc_get_timer3_clk_en(void);
hal_en_t hal_misc_get_timer2_clk_en(void);
hal_en_t hal_misc_get_timer1_clk_en(void);
hal_en_t hal_misc_get_timer_clk_en(void);
hal_en_t hal_misc_get_wdt_clk_en(void);
hal_en_t hal_misc_get_uart2_clk_en(void);
hal_en_t hal_misc_get_uart1_clk_en(void);
hal_en_t hal_misc_get_uart0_clk_en(void);
hal_en_t hal_misc_get_i2c0_clk_en(void);
hal_en_t hal_misc_get_ws2811_clk_en(void);
hal_en_t hal_misc_get_spi1_clk_en(void);
hal_en_t hal_misc_get_spi0_clk_en(void);
hal_en_t hal_misc_get_gpiob_clk_en(void);
hal_en_t hal_misc_get_gpioa_clk_en(void);
hal_en_t hal_misc_get_i2s_clk_en(void);
hal_en_t hal_misc_get_adcc_clk_en(void);
hal_en_t hal_misc_get_qspi_clk_en(void);


#ifdef __cplusplus
    extern "C" {
#endif // __cplusplus

#endif /* __HAL_MISC_H */
