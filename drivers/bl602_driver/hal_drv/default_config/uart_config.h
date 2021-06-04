#ifndef _UART_CONFIG_H
#define _UART_CONFIG_H

#define UART_CLOCK_SOURCE_160M_ENABLE  (1)
#define UART_CTS_FLOWCONTROL_ENABLE    (0)
#define UART_RTS_FLOWCONTROL_ENABLE    (0)
#define UART_RX_DEGLITCH_ENABLE        (0)
#define UART_MSB_FIRST_ENABLE          (0)

#define UART_FIFO_MAX_LEN              128
#define UART_DEFAULT_RTO_TIMEOUT       255
#endif