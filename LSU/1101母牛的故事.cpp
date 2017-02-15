#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[1000],x;
	a[1]=1;
	a[2]=2;
	a[3]=3;
	for(int i=4; i<1000; i++)
	{
		a[i]=a[i-1]+a[i-3];
	}
	while (std::cin >> x &&  x!=0) {
		std::cout << a[x];
	}
	std::cout << '\n';
	return 0;
}
