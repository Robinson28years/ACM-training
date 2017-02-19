#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int m,n;
	std::cin >> m >> n;
	int r;
	do {
		r = m%n;
		m=n;
		n=r;
	} while(r!=0);
	std::cout << m << '\n';
}
