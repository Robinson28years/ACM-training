#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long x,y,sum;
	while (std::cin >> x>>y) {
		sum=0;
		for(int i=1; i<=x; i++)
		{
			for(int j=1; j<=y; j++)
			{
				std::cout << i*j << '\n';
				if (i*j%2016==0) {
					sum++;
				}
			}
		}
		std::cout << sum << '\n';
	}
}
