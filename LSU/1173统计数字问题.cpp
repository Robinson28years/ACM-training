#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int y[20]={0};
	std::cin >> n;
	for(int i=1; i<=n;i++)
	{
		int q=i;
		for(int j=0; j<10000; j++)
		{
			y[q%10]++;
			q=q/10;
			// std::cout << q << '\n';
			if (q==0) {
				break;
			}
		}
		// std::cout << "ok" << '\n';
	}
	for(int j=0; j<10; j++)
	{
		std::cout << y[j] << '\n';
	}
}
