/* Copyright 2021 Pingshun Huang (Alex) <alex.g.huang@gmail.com> @<pingshunhuangalex>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FORCE_NKRO                        // NKRO by default requires to be turned on, this forces it on during keyboard startup regardless of EEPROM setting. NKRO can still be turned off but will be turned on again if the keyboard reboots
#define TAP_CODE_DELAY 10                 // Sets the delay between register_code and unregister_code, if you're having issues with it registering properly (common on VUSB boards). The value is in milliseconds

#define HOLD_ON_OTHER_KEY_PRESS           // Makes it possible to press a dual-role key, press another key, and then release the dual-role key, all within the tapping term, but perform its hold action instead
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY   // Enables handling for per key HOLD_ON_OTHER_KEY_PRESS settings
#define QUICK_TAP_TERM 100                // Sets tap-then-hold timing to use a dual role key to repeat keycode
#define QUICK_TAP_TERM_PER_KEY            // Enables handling for per key QUICK_TAP_TERM settings

#define MOUSEKEY_DELAY 0                  // Delay between pressing a movement key and cursor movement
#define MOUSEKEY_INTERVAL 16              // Time between cursor movements in milliseconds
#define MOUSEKEY_MAX_SPEED 7              // Maximum number of scroll steps per scroll action
#define MOUSEKEY_TIME_TO_MAX 60           // Time until maximum cursor speed is reached
#define MOUSEKEY_WHEEL_DELAY 0            // Delay between pressing a wheel key and wheel movement

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(NO_SOUND)
#endif
