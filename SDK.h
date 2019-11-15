#pragma once

#ifdef __cplusplus
#define EXTERN extern "C"
#else
#define EXTERN
#endif // __cplusplus

#ifdef _WIN32

#define EXPORT EXTERN __declspec(dllexport)
#define IMPORT EXTERN __declspec(dllimport)

#else

#define EXPORT EXTERN __attribute__ ((visibility ("default")))
#define IMPORT

#endif // _WIN32


#include "deps/alt-math/alt-math.h"

#include "types/Types.h"
#include "types/String.h"
#include "types/StringView.h"
#include "types/RGBA.h"
#include "types/Array.h"
#include "types/MValue.h"

#include "IBaseObject.h"
#include "IWorldObject.h"

#include "entities/IEntity.h"
#include "entities/IPlayer.h"
#include "entities/IVehicle.h"

#include "script-objects/ICheckpoint.h"
#include "script-objects/IBlip.h"
#include "script-objects/IVoiceChannel.h"

#include "events/CEvent.h"
#include "events/CServerScriptEvent.h"
#include "events/CClientScriptEvent.h"
#include "events/CPlayerConnectEvent.h"
#include "events/CPlayerDisconnectEvent.h"
#include "events/CPlayerDamageEvent.h"
#include "events/CPlayerDeathEvent.h"
#include "events/CColShapeEvent.h"
#include "events/CPlayerEnterVehicleEvent.h"
#include "events/CPlayerLeaveVehicleEvent.h"
#include "events/CPlayerChangeVehicleSeatEvent.h"
#include "events/CDataNodeReceivedEvent.h"
#include "events/CRemoveEntityEvent.h"
#include "events/CConsoleCommandEvent.h"
#include "events/CWeaponDamageEvent.h"
#include "events/CExplosionEvent.h"
#include "events/CResourceStartEvent.h"
#include "events/CResourceStopEvent.h"
#include "events/CResourceErrorEvent.h"

#ifdef ALT_CLIENT_API

#include "events/CConnectionComplete.h"
#include "events/CDisconnectEvent.h"
#include "events/CGameEntityCreateEvent.h"
#include "events/CGameEntityDestroyEvent.h"
#include "events/CKeyboardEvent.h"
#include "events/CWebViewEvent.h"

#endif

#include "IPackage.h"
#include "IResource.h"
#include "IScriptRuntime.h"

#include "ICore.h"
