/*
 * Strings.hpp
 *
 *  Created on: 27 Feb 2017
 *      Author: David
 *
 * The encoding used for this file must be UTF-8 to ensure that accented characters are displayed correctly.
 */

#ifndef SRC_UI_STRINGS_HPP_
#define SRC_UI_STRINGS_HPP_

#include "ecv.h"
#undef array
#undef result
#undef value
#include "UI/ColourSchemes.hpp"
#include "ObjectModel/PrinterStatus.hpp"
#include "FlashData.hpp"
#include "Configuration.hpp"

#define CSTRING const char * const _ecv_array
#define Newline			"\n"
#define DegreeSymbol	"\u00B0"

// Unicode strings for special characters in our font
#define DECIMAL_POINT	"\xC2\xB7"		// Unicode middle-dot, code point B7
#define DEGREE_SYMBOL	"\xC2\xB0"		// Unicode degree-symbol, code point B0
#define THIN_SPACE		"\xC2\x80"		// Unicode control character, code point 0x80, we use it as thin space
#define LEFT_ARROW		"\xC2\x81"		// Unicode control character, code point 0x81, we use it as up arrow
#define UP_ARROW		"\xC2\x82"		// Unicode control character, code point 0x82, we use it as up arrow
#define RIGHT_ARROW		"\xC2\x83"		// Unicode control character, code point 0x83, we use it as down arrow
#define DOWN_ARROW		"\xC2\x84"		// Unicode control character, code point 0x84, we use it as down arrow
#define MORE_ARROW		"\xC2\x85"
#define LESS_ARROW		"\xC2\x86"

struct StringTable
{
	// Language name
	CSTRING languageName;

	// Main page strings
	CSTRING control;
	CSTRING print;
	CSTRING status;
	CSTRING console;
	CSTRING setup;
	CSTRING current;
	CSTRING active;
	CSTRING standby;
	CSTRING move;
	CSTRING extrusion;
	CSTRING macro;
	CSTRING stop;

	// Status page
	CSTRING extruderPercent;
	CSTRING speed;
	CSTRING fan;
	CSTRING timeRemaining;
	CSTRING simulated;
	CSTRING file;
	CSTRING filament;
	CSTRING slicer;
	CSTRING notAvailable;
	CSTRING pause;
	CSTRING babystep;
	CSTRING resume;
	CSTRING cancel;
	CSTRING reprint;
	CSTRING resimulate;
	CSTRING set;

	// Setup page
	CSTRING volume;
	CSTRING calibrateTouch;
	CSTRING mirrorDisplay;
	CSTRING invertDisplay;
	CSTRING theme;
	CSTRING brightnessDown;
	CSTRING brightnessUp;
	CSTRING saveSettings;
	CSTRING clearSettings;
	CSTRING saveAndRestart;
	CSTRING infoTimeout;
	CSTRING screensaverAfter;
	CSTRING babystepAmount;
	CSTRING feedrate;

	// Misc
	CSTRING confirmFactoryReset;
	CSTRING confirmFileDelete;
	CSTRING areYouSure;
	CSTRING touchTheSpot;
	CSTRING moveHead;
	CSTRING extrusionAmount;
	CSTRING extrusionSpeed;
	CSTRING extrude;
	CSTRING retract;
	CSTRING babyStepping;
	CSTRING currentZoffset;
	CSTRING message;
	CSTRING messages;
	CSTRING firmwareVersion;
	CSTRING response;

	// File popup
	CSTRING filesOnCard;
	CSTRING macros;
	CSTRING error;
	CSTRING accessingSdCard;
	CSTRING fileName;
	CSTRING fileSize;
	CSTRING layerHeight;
	CSTRING objectHeight;
	CSTRING filamentNeeded;
	CSTRING generatedBy;
	CSTRING lastModified;
	CSTRING estimatedPrintTime;
	CSTRING simulatedPrintTime;
	CSTRING simulate;

	// Printer status strings
	CSTRING statusValues[(unsigned int)OM::PrinterStatus::NumTypes];

	// Colour theme names
	CSTRING colourSchemeNames[NumColourSchemes];

	// Display dimmer types
	CSTRING displayDimmingNames[(unsigned int)DisplayDimmerType::NumTypes];

	CSTRING heaterCombineTypeNames[(unsigned int)HeaterCombineType::NumTypes];

	CSTRING outOfRangeValueInt;
	CSTRING outOfRangeValueFloat;
	CSTRING outOfRangeTextLength;
};

const StringTable LanguageTables[] =
{
	// English
	{
		// ISO-639.1 language code
		"en",

		// Main page strings
		"Control",
		"Print",
		"Status",
		"Console",
		"Setup",
		"Current" THIN_SPACE DEGREE_SYMBOL "C",
		"Active" THIN_SPACE DEGREE_SYMBOL "C",
		"Standby" THIN_SPACE DEGREE_SYMBOL "C",
		"Move",
		"Extrusion",
		"Macro",
		"STOP",

		// Print page
		"Extruder" THIN_SPACE "%",
		"Speed ",							// note space at end
		"Fan ",								// note space at end
		"Time left: ",
		"sim'd ",							// note space at end
		"file ",							// note space at end
		"filament ",						// note space at end
		"slicer ",							// note space at end
		"n/a",
		"Pause",
		"Baby step",
		"Resume",
		"Cancel",
		"Print again",
		"Simulate again",
		"Set",

		// Setup page
		"Volume ",							// note space at end
		"Calibrate touch",
		"Mirror display",
		"Invert display",
		"Theme",
		"Brightness -",
		"Brightness +",
		"Save settings",
		"Clear settings",
		"Save & Restart",
		"Info timeout ",					// note space at end
		"Screensaver ",						// note space at end
		"Babystep ",						// note space at end
		"Feedrate ",						// note space at end

		// Misc
		"Confirm factory reset",
		"Confirm file delete",
		"Are you sure?",
		"Touch the spot",
		"Move head",
		"Extrusion amount (mm)",
		"Speed (mm/s)",
		"Extrude",
		"Retract",
		"Baby stepping",
		"Current Z offset: ",
		"Message",
		"Messages",
		"Panel Due firmware version ",	// note space at end
		"Response",

		// File popup
		"Files on card ",				// note the space on the end
		"Macros",
		"Error ",						// note the space at the end
		" accessing SD card",			// note the space at the start
		"File: ",
		"Size: ",
		"Layer height: ",
		"Object height: ",
		"Filament needed: ",
		"Sliced by: ",
		"Date: ",
		"Estimated print time: ",
		"Simulated print time: ",
		"Simulate",

		// Printer status strings
		{
			"Connecting",
			"Idle",
			"Printing",
			"Halted",
			"Starting up",
			"Paused",
			"Busy",
			"Pausing",
			"Resuming",
			"Firmware upload",
			"Changing tool",
			"Simulating",
			"Off",
			"Cancelling",
		},

		// Theme names
		{
			"Light theme",
			"Dark theme 1",
			"Dark theme 2"
		},

		// Display dimming types
		{
			"Never dim",
			"Dim if idle",
			"Always dim"
		},

		// Heater combine types
		{
			"Heat's not comb.",
			"Heaters comb.",
		},

		"value is out of range: %ld <= value <= %ld",
		"value is out of range: %f <= value <= %f",
		"text length is out of range: %ld <= length <= %ld",
 	},



#if USE_CYRILLIC_CHARACTERS
	// Russian
	{
		"ru",

		// Main page strings
		"Контроль",
		"Печать",
		"Статус",
		"Консоль",
		"Настройки",
		"Текущая" THIN_SPACE DEGREE_SYMBOL "C",
		"Заданная" THIN_SPACE DEGREE_SYMBOL "C",
		"Преднагрев" THIN_SPACE DEGREE_SYMBOL "C",
		"Движения",
		"Экструзия",
		"Макрос",
		"СТОП",

		// Print page
		"Экструзия" THIN_SPACE "%",
		"Скорость ",             // note space at end
		"обдув ",               // note space at end
		"Оставшееся время: ",
		"Файл ",              // note space at end
		", Файл ",            // note space at end
		", Филамент ",             // note space at end
		"Слайсер ",
		"-",
		"Пауза",
		"Высота слоя",
		"Продолжить",
		"Oтмена",
		"Повтор печати",
		"Повтор моделирования",
		"Установить",

		// Setup page
		"Громкость ",              // note space at end
		"Калибровка экрана",
		"Отзеркаленый дисплей",
		"Перевёрнутый дисплей",
		"Тема",
		"Яркость -",
		"Яркость +",
		"Сохранить настройки",
		"Сбросить настройки",
		"Сохранить и перезапустить",
		"Ожидание информации ",          // note space at end
		"Заставка ",           // note space at end
		"Мелкий шаг ",            // note space at end
		"Скорость подачи ",            // note space at end

		// Misc
		"Подтвердить сброс настроек",
		"Подтвердить удаление файла",
		"Вы уверены?",
		"Дотронуться до точки",
		"Двигать экструдером",
		"Количество экструзии (мм)",
		"Скорость (мм / с)",
		"Экструдировать",
		"Ретракт",
		"Высота слоя",
		"Текущее смещение по оси Z: ",
		"Сообщение",
		"Сообщения",
		"Версия прошивки Panel Due ",  // note space at end
		"Ответ",

		// File popup
		"Файлы на карте ",       // note the space on the end
		"Макросы",
		"Ошибка ",           // note the space at the end
		"доступ к SD-карте",     // note the space at the start
		"Имя файла: ",
		"Размер: ",
		"Высота слоя: ",
		"Высота объекта: ",
		"Нет филамента: ",
		"Нарезано: ",
		"Последнее изменение: ",
		"Расчетное время печати: ",
		"Время имитации печати: ",
		"Симуляция ",

		// Printer status strings
		{
			"Подключение",
			"Ожидание",
			"Печать",
			"Остановлен",
			"Запуск",
			"Пауза",
			"Занятый",
			"Пауза",
			"Продолжить",
			"Загрузка прошивки",
			"Смена инструмента",
			"Симуляция",
			"Отмена",
			"Инициализация",
		},

		// Theme names
		{
			"Светлая тема",
			"Тёмная тема 1",
			"Тёмная тема 2"
		},

		// Display dimming types
		{
			"Никогда не тускнеет",
			"Уменьшить при ожидании",
			"Всегда тусклый"
		},

		// Heater combine types
		{
			"Нагреватели не комб.",
			"Нагреватели комб.",
		},

		"value is out of range: %ld <= value <= %ld",
		"value is out of range: %f <= value <= %f",
		"text length is out of range: %ld <= length <= %ld",
	}
#endif
};

constexpr unsigned int NumLanguages = sizeof(LanguageTables) / sizeof(LanguageTables[0]);
#endif /* SRC_UI_STRINGS_HPP_ */
