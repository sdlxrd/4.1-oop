#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(): x1(0), x2(0), y1(0), y2(0)
{}
Complex::Complex(int x1, int x2, int y1, int y2) : x1(x1), x2(x2), y1(y1), y2(y2)
{}
int Complex::sum()
{
	int sum1 = x1 + y1;
	int sum2 = x2 + y2;
	cout << "(" << sum1 << ", " << sum2 << ")" << endl;
	return sum1;
}