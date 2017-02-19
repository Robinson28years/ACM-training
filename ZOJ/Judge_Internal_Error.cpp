#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	int n;
	int p[10000]={0};
	int q;
	int flag;
	std::cin >> t;
	while (t--) {
		std::cin >> n;
		for(int i=0; i<n; i++)
		{
			std::cin >> q;
			p[q]++;
		}
		int max = -1;
		for(int j=1000; j<10000; j++)
		{
			if (p[j]>=max) {
				max = p[j];
				flag = j;
			}
		}
		std::cout << flag << '\n';
	}
}
