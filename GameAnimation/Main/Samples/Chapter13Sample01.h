/******************************************************************
** @File         : Chapter13Sample01.h
** @Author       : BanMing
** @Date         : 2022/06/20
** @Description  :
*******************************************************************/

#ifndef _H_CHAPTER13_SAMPLE01_
#define _H_CHAPTER13_SAMPLE01_
#include "Application.h"
#include "../Math/vec3.h"
#include "../IK/CCDSolver.h"
#include "../OpenGL/DebugDraw.h"
#include <vector>

class Chapter13Sample01 :public Application
{
protected:
	const float kPositionMin = 0.0f;
	const float kPositionMax = 20.0f;

	const float kOrientationMin = 0.0f;
	const float kOrientationMax = 10.0f;
	const int kJointNum = 3;
protected:
	vec3 mTargetPosition;
	vec3 mTargetOrientation;
	CCDSolver mIKSolver;
	std::vector<Transform> mJoints;
	DebugDraw* mDebugDraw;
public:
	void Initialize();
	void Update(float inDeltaTime);
	void Render(float inAspectRatio);
	void OnGUI() override;
	void Shutdown();
};

#endif // _H_CHAPTER13_SAMPLE01_
