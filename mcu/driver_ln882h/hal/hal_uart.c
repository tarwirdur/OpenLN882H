#include "hal/hal_common.h"
#include "hal/hal_uart.h"
#include "hal/hal_clock.h"
#include "reg_ln_uart.h"



void hal_uart_init(uint32_t uart_base, uart_init_t* init)
{
    ln_uart_m_setf(uart_base, init->word_len);
    
    ln_uart_over8_setf(uart_base, init->over_sampl);
    
    if (UART_PARITY_NONE == init->parity) {
        ln_uart_pce_setf(uart_base, 0);
    } else {
        ln_uart_pce_setf(uart_base, 1);
        ln_uart_ps_setf(uart_base, init->parity);
    }
    
    ln_uart_stop_setf(uart_base, init->stop_bits);
    
    hal_uart_baudrate_set(uart_base, init->baudrate);
}

void hal_uart_baudrate_set(uint32_t uart_base, uint32_t baudrate)
{
    uint8_t  over_sample = UART_OVER_SAMPL_16;
    uint32_t src_clk = 0U, bbr = 0U;
    
    switch(uart_base) {
        case UART0_BASE:
             /* get USART0 src clock */
             src_clk = hal_clock_get_apb0_clk();//rcu_clock_freq_get(APB1);
             break;
        case UART1_BASE:
             /* get USART1 src clock */
             src_clk = hal_clock_get_apb0_clk();//rcu_clock_freq_get(APB1);
             break;
        case UART2_BASE:
             /* get USART2 src clock */
             src_clk = hal_clock_get_apb0_clk();//rcu_clock_freq_get(APB1);
             break;
        default:
             break;
    }
    
    over_sample = ln_uart_over8_getf(uart_base);

    if (UART_OVER_SAMPL_8 == over_sample) {
        bbr = src_clk / (baudrate >> 4U);
    } else {
        bbr = src_clk / (baudrate >> 3U);
    }

    ln_uart_brr_setf(uart_base, bbr);
}

void hal_uart_rx_mode_enable(uint32_t uart_base, hal_en_t en)
{
    ln_uart_re_setf(uart_base, en);
}

void hal_uart_tx_mode_enable(uint32_t uart_base, hal_en_t en)
{
    ln_uart_te_setf(uart_base, en);
}

void hal_uart_hardware_flow_rts_enable(uint32_t uart_base, hal_en_t en)
{
    ln_uart_rtse_setf(uart_base, en);
}

void hal_uart_hardware_flow_cts_enable(uint32_t uart_base, hal_en_t en)
{
    ln_uart_ctse_setf(uart_base, en);
}

void hal_uart_enable(uint32_t uart_base, hal_en_t en)
{
    ln_uart_ue_setf(uart_base, en);
}
void hal_uart_dma_enable(uint32_t uart_base, uart_dma_req_enum dma_req, hal_en_t en)
{
    if(dma_req == USART_DMA_REQ_TX)
    {
        if(en == HAL_DISABLE)
            ln_uart_dmat_setf(uart_base , 0);
        else if(en == HAL_ENABLE)
            ln_uart_dmat_setf(uart_base , 1);
    }
    else if(dma_req == USART_DMA_REQ_RX)
    {
        if(en == HAL_DISABLE)
            ln_uart_dmar_setf(uart_base , 0);
        else if(en == HAL_ENABLE)
            ln_uart_dmar_setf(uart_base , 1);
    }
}
void hal_uart_send_data(uint32_t uart_base, uint16_t data)
{
    ln_uart_uart_tdr_set(uart_base, data);
}

uint16_t hal_uart_recv_data(uint32_t uart_base)
{
    return ln_uart_uart_rdr_get(uart_base);
}

void hal_uart_it_flag_clear(uint32_t uart_base, uart_it_flag_clear_enum it_flag_clear)
{
    ln_uart_uart_icr_set(uart_base, it_flag_clear);
}

unsigned char hal_uart_flag_get(uint32_t uart_base, uart_flag_enum flag)
{
    uint32_t val = ln_uart_uart_isr_get(uart_base);
    if (val & flag) {
        return HAL_SET;
    } else {
        return HAL_RESET;
    }
}

unsigned char hal_uart_it_flag_en_sta_get(uint32_t uart_base, uart_it_en_enum it_en)
{
    unsigned char val = 0;
    switch(it_en)
    {
        //TODO:
        //case USART_IT_RXFIFO_TIMEOUT:

        case USART_IT_CME :
            val = ln_uart_cmie_getf(uart_base);
            break;
        case USART_IT_RXFIFO_AF:
            val = ln_uart_rxafie_getf(uart_base);
            break;
        case USART_IT_PE:
            val = ln_uart_peie_getf(uart_base);
            break;
        case USART_IT_TXE:
            val = ln_uart_txeie_getf(uart_base);
            break;
        case USART_IT_TC:
            val = ln_uart_tcie_getf(uart_base);
            break;
        case USART_IT_RXNE:
            val = ln_uart_rxneie_getf(uart_base);
            break;
        case USART_IT_IDLE:
            val = ln_uart_idleie_getf(uart_base);
            break;
        case USART_IT_WUE:
            val = ln_uart_wufie_getf(uart_base);
            break;
        case USART_IT_CTS:
            val = ln_uart_ctsie_getf(uart_base);
            break;
        case USART_IT_ERR:
            val = ln_uart_eie_getf(uart_base);
            break;
        default:
            break;
    }
    return val;
}

void hal_uart_it_enable(uint32_t uart_base, uart_it_en_enum it_en)
{
    uint32_t val = 0;
    switch(it_en)
    {
        //TODO:
        //case USART_IT_RXFIFO_TIMEOUT:

        case USART_IT_CME :
        case USART_IT_RXFIFO_AF:
        case USART_IT_PE:
        case USART_IT_TXE:
        case USART_IT_TC:
        case USART_IT_RXNE:
        case USART_IT_IDLE:
            val = ln_uart_uart_cr1_get(uart_base);
            val |= it_en;
            ln_uart_uart_cr1_set(uart_base, val);
            break;
        
        case USART_IT_WUE:
        case USART_IT_CTS:
        case USART_IT_ERR:
            val = ln_uart_uart_cr3_get(uart_base);
            val |= it_en;
            ln_uart_uart_cr3_set(uart_base, val);
            break;
        default:
            break;
    }
}

void hal_uart_it_disable(uint32_t uart_base, uart_it_en_enum it_en)
{
    uint32_t val = 0;
    switch(it_en)
    {
        //TODO:
        //case USART_IT_RXFIFO_TIMEOUT:

        case USART_IT_CME :
        case USART_IT_RXFIFO_AF:
        case USART_IT_PE:
        case USART_IT_TXE:
        case USART_IT_TC:
        case USART_IT_RXNE:
        case USART_IT_IDLE:
            val = ln_uart_uart_cr1_get(uart_base);
            val &= ~it_en;
            ln_uart_uart_cr1_set(uart_base, val);
            break;
        
        case USART_IT_WUE:
        case USART_IT_CTS:
        case USART_IT_ERR:
            val = ln_uart_uart_cr3_get(uart_base);
            val &= ~it_en;
            ln_uart_uart_cr3_set(uart_base, val);
            break;
        default:
            break;
    }
}

hal_en_t hal_uart_it_en_status_get(uint32_t uart_base, uart_it_en_enum it_en)
{
    hal_en_t ret = HAL_DISABLE;
    
    switch(it_en)
    {
        case USART_IT_RXFIFO_TIMEOUT:
        case USART_IT_CME :
        case USART_IT_RXFIFO_AF:
        case USART_IT_PE:
        case USART_IT_TXE:
        case USART_IT_TC:
        case USART_IT_RXNE:
        case USART_IT_IDLE:
            ret = (it_en & ln_uart_uart_cr1_get(uart_base)) ? HAL_ENABLE : HAL_DISABLE;
            break;
                
        case USART_IT_WUE:
        case USART_IT_CTS:
        case USART_IT_ERR:
            ret = (it_en & ln_uart_uart_cr3_get(uart_base)) ? HAL_ENABLE : HAL_DISABLE;
            break;
        
        default:
            break;
    }
    return ret;
}


void hal_uart_clr_over_run_err(uint32_t uart_base)
{
    if(ln_uart_re_getf(uart_base) == 1)
    {
       ln_uart_re_setf(uart_base, 0);
       ln_uart_re_setf(uart_base, 1);
    }
    if(ln_uart_ue_getf(uart_base) == 1)
    {
       ln_uart_ue_setf(uart_base, 0);
       ln_uart_ue_setf(uart_base, 1);
    }
}

uint8_t hal_uart_tx_fifo_level_get(uint32_t uart_base)
{
    return ln_uart_tx_fifo_level_getf(uart_base);
}

uint8_t hal_uart_rx_fifo_level_get(uint32_t uart_base)
{
    return ln_uart_rx_fifo_level_getf(uart_base);
}

void hal_uart_rx_fifo_it_trig_level_set(uint32_t uart_base, uint8_t level)
{
    ln_uart_rx_byte_setf(uart_base, level);
}

void hal_uart_deinit(uint32_t uart_base)
{

}




