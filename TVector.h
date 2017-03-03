#pragma once
#include "iostream"
class TVector
{
public:
	TVector();
	TVector(float x_in, float y_in);
	virtual void Print();
	protected:
		float X;
		float Y;
};
