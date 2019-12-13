#include <cstdio>
#include <cmath>

typedef struct Point
{
	double x;
	double y;
};

double CrossProduct(Point a, Point b)
{
	return a.x * b.y - a.y * b.x; 
}

double area(Point a, Point b)
{
	return std::abs(CrossProduct(a, b) / 2.0);
}