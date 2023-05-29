﻿#pragma once

#ifdef ALT_CLIENT_API

#include <cstdint>

#include "../objects/IPed.h"

namespace alt
{
	class ILocalPed : public virtual IPed
	{
	protected:
		virtual ~ILocalPed() = default;
	public:
		virtual void SetModel(uint32_t model) = 0;

		virtual uint32_t GetStreamingDistance() const = 0;

		virtual void SetVisible(bool toggle) = 0;
		virtual bool IsVisible() const = 0;

		virtual uint32_t GetScriptID() const = 0;
		
		virtual bool IsStreamedIn() const = 0;
	};
}

#endif