/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef INC_GAME_HUD_HPP
#define INC_GAME_HUD_HPP

#include <ace/types.h>
#include <ace/utils/extview.h>
#include <entity/entity.hpp>
#include "player_controller.hpp"

#define HUD_BPP 5

void hudCreate(tView *pView);

void hudDestroy(void);

void hudReset(void);

tEntity *hudProcessPlay(tPlayerIdx ePlayerIdx, tSteer *pSteer);

void hudProcessInventory(tPlayerIdx ePlayerIdx, tSteer *pSteer);

#endif // INC_GAME_HUD_HPP
