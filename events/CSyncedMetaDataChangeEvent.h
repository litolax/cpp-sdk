#pragma once

#include "../types/StringView.h"
#include "../types/MValue.h"
#include "../Ref.h"

#include "CEvent.h"

namespace alt
{
	class IEntity;

	class CSyncedMetaDataChangeEvent : public CEvent
	{
	public:
		CSyncedMetaDataChangeEvent(Ref<IEntity> _target, StringView _key, MValue _val) :
			CEvent(Type::SYNCED_META_CHANGE),
			target(_target),
			key(_key),
			val(_val)
		{

		}

		Ref<IEntity> GetTarget() const { return target; }
		StringView GetKey() const { return key; }
		MValue GetVal() const { return val; }

	private:
		Ref<IEntity> target;
		String key;
		MValue val;
	};
}
