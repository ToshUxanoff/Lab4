#include "stdafx.h"
#include "TVector3.h"


TVector3::TVector3(float x_in, float y_in, float z_in) :TVector(x_in, y_in)
{
	Z = z_in;
}
void TVector3::Print()
{
	TVector::Print();
	std::cout << ';' << Z << std::endl;
}
