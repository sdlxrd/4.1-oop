#include "Matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			a[i][j] = 0;
			b[i][j] = 0;
		}
	}
}
Matrix::Matrix(int a[2][2], int b[2][2])
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			this->a[i][j] = a[i][j];
			this->b[i][j] = b[i][j];
		}
	}
}
int Matrix::sum()
{
	int sum[2][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			cout << "(" << i + 1 << ", " << j + 1 << "): " << sum[i][j] << endl;
		}
	}
	return 0;
}

