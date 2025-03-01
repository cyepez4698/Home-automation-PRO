/*!
 * @file UART.h
 * @par Author & Doxygen Editor
 * 	Daniel Di Módica ~ <a href = "mailto: danifabriziodmodica@gmail.com">danifabriziodmodica@@gmail.com</a>
 * @date 23/07/2023 13:38:36
 * @brief Universal Asynchronous Receiver/Transmitter Class API (Application Programming Interface).
 */

#ifndef UART_H_
#define UART_H_

#include <vector>
#include <cstring>
#include "AsyncComm.h"
#include "ProgramConfig.h"

#if defined (__cplusplus)
extern "C" {
	void UART0_IRQHandler(void);
	void UART1_IRQHandler(void);
	void UART2_IRQHandler(void);
	void UART3_IRQHandler(void);
	void UART4_IRQHandler(void);
}
#endif

#define RX_BUFFER_SIZE 64
#define TX_BUFFER_SIZE 80

#define RX_IDX 0
#define TX_IDX 1

#define MAX_USART_CHANNELS 5

#define USART_OFFSET_BASE (0x4000U)

class UART : protected std::vector<Gpio>, public AsyncComm {
private:
	USART_Type*	m_usart;							//!< Register to be used
	uint8_t	    m_bufferRX[RX_BUFFER_SIZE];         //!< Reception buffer
	uint32_t	m_indexRXIn, m_indexRXOut;			//!< RX buffer input position - RX buffer output position - RX buffer size
	uint8_t    	m_bufferTX[TX_BUFFER_SIZE];			//!< Transmission buffer
	uint32_t	m_indexTXIn, m_indexTXOut;			//!< TX buffer input position - TX buffer output position - TX buffer size
	bool 		m_flagTX;							//!< Error in sending data (Buffer overload)
public:
	enum parity_t 		{ NONE, ODD, EVEN };
	enum data_bits_t	{ SEVEN_BITS, EIGHT_BITS };
	enum channelUART_t	{ UART0, UART1, UART2, UART3, UART4 };

	UART() = delete;
	UART(const Gpio& RX, const Gpio& TX, channelUART_t channel = UART0, uint32_t baudrate = 9600, data_bits_t data_bits = EIGHT_BITS, parity_t parity = NONE);
	void transmit(const char *message) override;
	void transmit(const char *message, uint8_t length) override;
	bool receive(char *message, uint8_t length) override;
	void setBaudRate(uint32_t baudrate);
	virtual ~UART();
private:
	void enableSWM(void);
	void enableClock(void);
	void config(uint32_t baudrate, data_bits_t data_bits, parity_t parity);
	void pushRX(uint8_t data) override;
	bool popRX(uint8_t *data) override;
	void pushTX(uint8_t data) override;
	bool popTX(uint8_t *data) override;
	void enableInterrupt(void);
	void disableInterrupt(void);

	void UART_IRQHandler(void) override;
};

extern UART *g_usb;

void initUSB0(void);

#endif /* UART_H_ */
