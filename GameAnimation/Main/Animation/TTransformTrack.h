#ifndef _H_TTRANSFORMTRACK_
#define _H_TTRANSFORMTRACK_

#include "FastTrack.h"
#include "../Math/Transform.h"

template <typename VTRACK, typename QTRACK>
class TTransformTrack
{
protected:
	unsigned int mId;
	VTPACK mPosition;
	QTRACK mRotation;
	VTPACK mScale;

public:
	TTransformTrack();
	unsigned int GetId();
	void SetId(unsigned int id);
	VTRACK& GetPositionTrack();
	QTRACK& GetRotationTrack();
	VTRACK& GetScaleTrack();
	float GetStartTime();
	float GetEndTime();
	bool IsValid();
	Transform Sample(const Transform& ref, float time, bool looping);
};

typedef TTransformTrack<VectorTrack, QuaternionTrack> TransformTrack;
typedef TTransformTrack<FastVectorTrack, FastQuaternionTrack> FastTransformTrack;

FastTransformTrack OptimizeTransformTrack(TransformTrack& input);
#endif