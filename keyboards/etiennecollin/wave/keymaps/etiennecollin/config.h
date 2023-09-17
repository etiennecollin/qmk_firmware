/* Copyright 2023 Etienne Collin (@etiennecollin)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

// Activate caps word by pressing Left Shift + Right Shift
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat
#define QUICK_TAP_TERM 0

// Maximum time between taps of tap dances
#define TAPPING_TERM 175

// Perform hold action if pressing a dual-role key, tapping another key and
// releasing the dual-role key withing tapping term
#define PERMISSIVE_HOLD

// Perform hold action if pressing a dual-role key, pressing another key,
// releasing the dual-role key and releasing the other key withing tapping term
#define HOLD_ON_OTHER_KEY_PRESS

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64

// Thumb Combos
#define COMBO_COUNT 2
#define COMBO_TERM 200
#define EXTRA_SHORT_COMBOS
