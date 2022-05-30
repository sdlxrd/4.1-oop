#pragma once
class Sum
{
	int x, y;
public:
	Sum();
	Sum(int, int);
	~Sum() {};
	int getX() const { return x; }
int getY() const { return y; }
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	virtual int sum();
};


