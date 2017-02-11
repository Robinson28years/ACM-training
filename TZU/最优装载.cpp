#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,c;
	int a[2001];
	int sum=0,q=0;
	while (std::cin >> n>>c) {
		for(int i=0; i<n; i++)
		{
			std::cin >> a[i];
		}
		sort(a,a+n);
		for(int i=0; i<n; i++)
		{
			sum+=a[i];
			if (sum>c) {
				break;
			}
			q++;
		}
		std::cout << q << '\n';
		sum=0;
		q=0;
	}
}
