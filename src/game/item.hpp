/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef INC_GAME_ITEM_HPP
#define INC_GAME_ITEM_HPP

#include <ace/types.h>
#include <lmc/enum_value.hpp>

enum class tItemKind: BYTE {
	Invalid = -1,
	None = 0,
	Shield,
	Bomb,
	Nuke,
	W1RedKey,
	W1SkeletonKey,
	W1GoldKey,
	W5RedCard,
	W5CardUnk8, // TODO: investigate
	W5YellowCard,
	W1Eyeball,
	W1Mushroom,
	W1Wing,
	W2Egg,
	W2Scroll,
	W2Wand,
	W3Diamond,
	W3Tarot,
	W3CrystalBall,
	W4Skull,
	W4Voodoo,
	W4Tusk,
	W5Pcb,
	W5Battery,
	W5Cd,
	TimeGear,
	TimeBattery,
	TimeCapacitor,
	Torch,
	TomatorBomb,
	Garlic,
	Meatloaf,
	Beer,
	Banana,
	Burger,
};

static constexpr auto operator < (tItemKind eLeft, tItemKind eRight)
{
	return Lmc::enumValue(eLeft) < Lmc::enumValue(eRight);
}

UBYTE itemIsDiscardable(tItemKind eItemKind);

#endif // INC_GAME_ITEM_HPP


