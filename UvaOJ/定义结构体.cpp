#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

typedef struct  {
	double x;
	double y;
}Point;

struct Point2 {
	double x;
	double y;
};

double dist(Point2 a, Point2 b)
{
	return a.x-b.x;
}

int main()
{
	Point2 a;
	a.x=1;
	a.y=4;
	Point2 b;
	b.x=4;
	b.y=6;
	std::cout << dist(a, b) << '\n';

}
