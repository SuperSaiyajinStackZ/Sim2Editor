/*
*   This file is part of Sim2Editor - External Tools
*   Copyright (C) 2020-2021 Universal-Team
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*   Additional Terms 7.b and 7.c of GPLv3 apply to this file:
*       * Requiring preservation of specified reasonable legal notices or
*         author attributions in that material or in the Appropriate Legal
*         Notices displayed by works containing it.
*       * Prohibiting misrepresentation of the origin of that material,
*         or requiring that modified versions of such material be marked in
*         reasonable ways as different from the original version.
*/

#ifndef _SIM2EDITOR_EXTERNAL_TOOLS_COMMON_HPP
#define _SIM2EDITOR_EXTERNAL_TOOLS_COMMON_HPP

#include <iostream>
#include <memory>
#include <string>

#define SLOT_OFFS 0xC // The Slot (0x0: 1, 0x1: 2, 0x2: 3). Additional Note: 0xD seems to be related to the Slot offset too, but the Game handles it on 0xC only?
#define SAV_COUNT_OFFS 0x8 // The SAV Count offset. It is 4 byte long (0xFFFFFFFF).
#define START_STR "Sim2Editor External Tools - Last Saved Slot Detector v0.4.0 by SuperSaiyajinStackZ.\n\n"

#endif