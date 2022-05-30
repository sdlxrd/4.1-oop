#pragma once
#include "Sum.h"
class Complex :
    public Sum
{
	int x1, y1, x2, y2;
public:
	Complex();
	Complex(int, int, int, int);
	~Complex() {};

	int getX1() const { return x1; }
	int getX2() const { return x2; }
	int getY1() const { return y1; }
	int getY2() const { return y2; }

	int sum() override;
};

