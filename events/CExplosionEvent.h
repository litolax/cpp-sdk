#pragma once

#include "../deps/alt-math/alt-math.h"

#include "CEvent.h"

namespace alt
{
	class IEntity;
	class IPlayer;

	class CExplosionEvent : public CEvent
	{
	public:
		enum class ExplosionType : int8_t
		{
			GRENADE,
			GRENADELAUNCHER,
			STICKYBOMB,
			MOLOTOV,
			ROCKET,
			TANKSHELL,
			HI_OCTANE,
			CAR,
			PLANE,
			PETROL_PUMP,
			BIKE,
			DIR_STEAM,
			DIR_FLAME,
			DIR_WATER_HYDRANT,
			DIR_GAS_CANISTER,
			BOAT,
			SHIP_DESTROY,
			TRUCK,
			BULLET,
			SMOKEGRENADELAUNCHER,
			SMOKEGRENADE,
			BZGAS,
			FLARE,
			GAS_CANISTER,
			EXTINGUISHER,
			PROGRAMMABLEAR,
			TRAIN,
			BARREL,
			PROPANE,
			BLIMP,
			DIR_FLAME_EXPLODE,
			TANKER,
			PLANE_ROCKET,
			VEHICLE_BULLET,
			GAS_TANK,
			FIREWORK,
			SNOWBALL,
			PROXMINE,
			VALKYRIE_CANNON,

			UNKNOWN = -1
		};

		CExplosionEvent(const std::shared_ptr<IPlayer>& _source, ExplosionType _explosionType, Position _position, uint32_t _explosionFX, const std::shared_ptr<IEntity>& _target) :
			CEvent(Type::EXPLOSION_EVENT),
			source(_source),
			explosionType(_explosionType),
			position(_position),
			explosionFX(_explosionFX),
			target(_target)
		{

		}

		IPlayer* GetSource() const { return source.get(); }
		IEntity* GetTarget() const { return target.get(); }
		ExplosionType GetExplosionType() const { return explosionType; }
		Position GetPosition() const { return position; }
		uint32_t GetExplosionFX() const { return explosionFX; }

	private:
		std::shared_ptr<IPlayer> source;
		std::shared_ptr<IEntity> target;
		ExplosionType explosionType;
		Position position;
		uint32_t explosionFX;
	};
}
