/*!
 * @file LCD.h
 * @par Author & Doxygen Editor
 * 	Daniel Di Módica ~ <a href = "mailto: danifabriziodmodica@gmail.com">danifabriziodmodica@@gmail.com</a>
 * @date 27/08/2023 23:36:45
 * @brief Liquid Crystal LCD1602 & LCD2004 Class API (Application Programming Interface).
 */

#ifndef LCD_H_
#define LCD_H_

#include <vector>
#include "systick.h"
#include "ProgramConfig.h"

#define CLEAR_DISPLAY			0b00000001 //!< Set CLEAR register
#define RETURN_HOME				0b00000010 //!< Set Cursor = 0 register
#define ENTRY_MODE_SET			0b00000100 //!< Set Input Writer register
#define DISPLAY_CONTROL			0b00001000 //!< Set Control register
#define CURSOR_DISPLAY_SHIFT	0b00010000 //!< Set Cursor register
#define FUNCTION_SET			0b00100000 //!< Set Operation Mode register
#define SET_CGRAM				0b01000000 //!< Set CGRAM register
#define SET_DDRAM				0b10000000 //!< Set DDRAM register

#define DDRAM_FIRST_ROW_ADDR	(0x00U)
#define DDRAM_SECOND_ROW_ADDR	(0x40U)
#define DDRAM_THIRD_ROW_ADDR	(0x14U)
#define DDRAM_FOURTH_ROW_ADDR	(0x54U)

class LCD : protected Callback {
private:
	enum mode_LCD_t { s_eigth_bits, s_four_bits, s_config_display, s_config_cursor, s_clear, s_print, s_row };

	const std::vector<Gpio*> m_outputs;	//!< Vector of GPIO outputs
	mode_LCD_t m_mode;					//!< Current state of the display
	uint8_t *m_buffer;					//!< Display _write buffer
	const uint8_t m_rows;				//!< Number of display rows
	const uint8_t m_columns;			//!< Number of display columns
	uint8_t m_ticks;
	uint8_t m_sweep;					//!< Buffer _write position
	uint8_t m_position;					//!< User _write position

	void initialize(void);
	void writeInstruction(const uint8_t data, const Gpio::activity_t mode);
	uint32_t pow(uint32_t base, uint32_t exponent);
	void _write(const int8_t *ptr_str);
	void _write(const int32_t value);
protected:
	void callbackMethod(void) override;
public:
	enum { D7, D6, D5, D4, RS, ENABLE };

	LCD() = delete;
	LCD(std::vector<Gpio*> &outputs, const uint8_t rows, const uint8_t columns);
	LCD& operator=(const int8_t *ptr_str);
	void write(const int8_t *ptr_str, const uint8_t row = 0, const uint8_t column = 0);
	void write(const int32_t value, const uint8_t row = 0, const uint8_t column = 0);
	void clear(void);
	virtual ~LCD();
};

extern LCD *g_lcd;

void initLCD1602(void);
void initLCD2004(void);

#endif /* LCD_H_ */
