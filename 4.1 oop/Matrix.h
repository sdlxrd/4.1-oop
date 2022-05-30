#pragma once
#include "Sum.h"
class Matrix :
    public Sum
{
	int a[2][2], b[2][2];
public:
	Matrix();
	Matrix(int a[2][2], int b[2][2]);
	~Matrix() {};

	int getA() const { return a[2][2]; }
	int getB() const { return b[2][2]; }
	
	int sum() override;
};

