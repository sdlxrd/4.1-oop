#include "Sum.h"
#include <iostream>
using namespace std;

Sum::Sum() :x(0), y(0)
{}
Sum::Sum(int x, int y): x(x), y(y)
{}
int Sum::sum()
{
	int sum = x + y;
	cout << sum << endl;
	return sum;
}