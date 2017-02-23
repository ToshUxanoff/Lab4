#include "stdafx.h"
#include "TVector.h"


TVector::TVector()
{
		X = 5;
		Y = 5;
}
TVector::TVector(float x_in, float y_in)
{
	X = x_in;
	Y = y_in;
}
void TVector::Print()
{
	std::cout << "\nCoords of the end of the vector is " << X << ';' << Y;
}
