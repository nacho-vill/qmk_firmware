/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X64
#endif

#ifdef RGBLIGHT_ENABLE
  //#define RGBLIGHT_ANIMATIONS // 3500 bytes
  // #define RGBLIGHT_EFFECT_BREATHING //864 bytes
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
  #define RGBLIGHT_SLEEP
#endif

#define MASTER_RIGHT

// Allows media codes to properly register in macros and rotary encoder code
#define TAP_CODE_DELAY 10

#define COMBO_TERM 15

#define TAPPING_TERM 150
#define TAPPING_TERM_PER_KEY

// Define if using homerow mods
// #define PERMISSIVE_HOLD
// #define IGNORE_MOD_TAP_INTERRUPT

// Define if using Force Hold for thumb or homerow mods
// #define TAPPING_FORCE_HOLD
// #define TAPPING_FORCE_HOLD_PER_KEY


// Set the mouse settings to a comfortable speed/accuracy trade-off
// Assume the screen refresh rate is 60 Htz or higher
#define MK_COMBINED
#define MOUSEKEY_DELAY 100							// default: 300. Let's try and make this as low as possible while keeping the cursor responsive
#define MOUSEKEY_INTERVAL 24						// default: 50. This makes the mouse ~3 times faster and more accurate
//#define MOUSEKEY_MOVE_DELTA 25						// default: 25
#define MOUSEKEY_MAX_SPEED 5						// default: 10
#define MOUSEKEY_TIME_TO_MAX 0 						// default: 20. Since we made the mouse about 3 times faster with the previous setting,
													// give it more time to accelerate to max speed to retain precise control over short distances.

#define MOUSEKEY_WHEEL_DELAY 100					// It makes sense to use the same delay for the mouseweel
#define MOUSEKEY_WHEEL_INTERVAL 50					// default: 100
#define MOUSEKEY_WHEEL_MAX_SPEED 8					// default: 8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100				// default: 40

// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
// #define SPLIT_USB_DETECT
// #define NO_USB_STARTUP_CHECK

