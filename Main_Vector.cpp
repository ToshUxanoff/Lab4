#include "stdafx.h"
#include "iostream"
#include "TVector.h"
#include "TVector3.h"

int _tmain(int argc, _TCHAR* argv[])
{
	TVector vect1(6, 7);
	vect1.Print();
	TVector3 vect2(10,11,12);
	vect2.Print();
	TVector *vectdynamic1 = new TVector3(11, 153, 12); //Демонстрация динам. полиморф.
	vectdynamic1->Print();
	system("pause");
	return 0;
}
