#pragma once
#include "Sum.h"
class Vector :
	public Sum
{
	int vect1[10], vect2[10];
public:
	Vector();
	Vector(int vect1[10], int vect2[10]);
	~Vector() {};

	int getV1() { return vect1[10]; }
	int getV2() { return vect2[10]; }

	int sum() override;
};
