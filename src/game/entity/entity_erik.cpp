/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "entity_erik.hpp"
#include <ace/managers/key.h>
#include <entity/entity_viking.hpp>
#include "assets.hpp"
#include "tile.hpp"

using namespace Lmc;

static const tEntityVikingDefs s_DefsErik = {
	.AnimDefs = tEntityVikingDefs::tAnimDefArray()
		.withElement(
			enumValue(tEntityVikingAnimationKind::Stand),
			 tEntityVikingAnimDef {.ubFrameFirst = 17, .ubFrameLast = 17}
		)
		.withElement(
			enumValue(tEntityVikingAnimationKind::Walk),
			 tEntityVikingAnimDef {.ubFrameFirst = 0, .ubFrameLast = 7}
		)
};

void entityErikCreate(
	tEntity &Entity, UWORD uwPosX, UWORD uwPosY, UWORD uwCenterX, UWORD uwCenterY,
	UWORD uwParam1, UWORD uwParam2
)
{
	entityVikingCreate(Entity, uwPosX, uwPosY, uwCenterX, uwCenterY, uwParam1, uwParam2);

	auto &Data = Entity.dataAs<tEntityVikingData>();
	Data.pVikingDefs = &s_DefsErik;
	Data.pFrames[enumValue(tEntityVikingFacing::Left)] = g_pBobBmErikLeft;
	Data.pMasks[enumValue(tEntityVikingFacing::Left)] = g_pBobBmErikLeftMask;
	Data.pFrames[enumValue(tEntityVikingFacing::Right)] = g_pBobBmErikRight;
	Data.pMasks[enumValue(tEntityVikingFacing::Right)] = g_pBobBmErikRightMask;
}
