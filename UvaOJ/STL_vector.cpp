#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	std::vector<int> a(10,0);
	std::cin >> a[2];
	std::cout << a[2] << '\n';
	std::vector<int>::iterator t;
	for(t=a.begin(); t!=a.end(); t++)
	std::cout << *t << '\n';
}
