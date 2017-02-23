#pragma once
#include "TVector.h"
class TVector3 :
	public TVector
{
public:
	TVector3(float x_in, float y_in, float z_in);
	void Print();
protected:
	float Z;
};
