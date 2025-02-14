#pragma once

#include <cstdint>
#include "../objects/IWorldObject.h"

namespace alt
{
	class IMarker : public virtual IWorldObject
	{
	public:
		enum class MarkerType : uint32_t
		{
			MarkerCone = 0,
			MarkerCylinder = 1,
			MarkerArrow = 2,
			MarkerArrowFlat = 3,
			MarkerFlag = 4,
			MarkerRingFlag = 5,
			MarkerRing = 6,
			MarkerPlane = 7,
			MarkerBikeLogo1 = 8,
			MarkerBikeLogo2 = 9,
			MarkerNum0 = 10,
			MarkerNum1 = 11,
			MarkerNum2 = 12,
			MarkerNum3 = 13,
			MarkerNum4 = 14,
			MarkerNum5 = 15,
			MarkerNum6 = 16,
			MarkerNum7 = 17,
			MarkerNum8 = 18,
			MarkerNum9 = 19,
			MarkerChevron1 = 20,
			MarkerChevron2 = 21,
			MarkerChevron3 = 22,
			MarkerRingFlat = 23,
			MarkerLap = 24,
			MarkerHalo = 25,
			MarkerHaloPoint = 26,
			MarkerHaloRotate = 27,
			MarkerSphere = 28,
			MarkerMoney = 29,
			MarkerLines = 30,
			MarkerBeast = 31,
			MarkerQuestionMark = 32,
			MarkerTransformPlane = 33,
			MarkerTransformHelicopter = 34,
			MarkerTransformBoat = 35,
			MarkerTransformCar = 36,
			MarkerTransformBike = 37,
			MarkerTransformPushBike = 38,
			MarkerTransformTruck = 39,
			MarkerTransformParachute = 40,
			MarkerTransformThruster = 41,
			MarkerWarp = 42,
			MarkerBoxes = 43,
			MarkerPitLane = 44
		};

		virtual ~IMarker() = default;

#ifdef ALT_CLIENT_API
		virtual bool IsStreamedIn() const = 0;
#endif

		virtual bool IsGlobal() const = 0;
		virtual IPlayer* GetTarget() const = 0;

		virtual alt::RGBA GetColor() const = 0;
		virtual void SetColor(alt::RGBA color) = 0;

		virtual bool IsVisible() const = 0;
		virtual void SetVisible(bool visible) = 0;

		virtual MarkerType GetMarkerType() const = 0;
		virtual void SetMarkerType(MarkerType type) = 0;

		virtual Position GetScale() const = 0;
		virtual void SetScale(Position scale) = 0;

		virtual Rotation GetRotation() const = 0;
		virtual void SetRotation(Rotation _rot) = 0;

		virtual Position GetDirection() const = 0;
		virtual void SetDirection(Position dir) = 0;

		virtual bool IsFaceCamera() const = 0;
		virtual void SetFaceCamera(bool faceCamera) = 0;

		virtual bool IsRotating() const = 0;
		virtual void SetRotating(bool rotating) = 0;

		virtual bool IsBobUpDown() const = 0;
		virtual void SetBobUpDown(bool bobUpDown) = 0;

		virtual uint32_t GetStreamingDistance() const = 0;
	};
} // namespace alt
