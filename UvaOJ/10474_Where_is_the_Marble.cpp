#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,q;
	int c=0;
	while (std::cin >> n >> q && n!=0) {
		c++;
		int k1[10001],k2;
		memset(k1,0,sizeof(k1));
		// memset(k2,0,sizeof(k2));
		for(int i=0; i<n; i++)
		{
			std::cin >> k1[i];
		}
		// for(int i=0; i<q; i++)
		// {
		// 	std::cin >> k2[i];
		// }
		sort(k1,k1+n);
		// for(int j=0; j<n; j++)
		// {
		// 	std::cout << k1[j] << '\n';
		// }
		std::cout << "CASE# "<< c << ":" << '\n';

		for(int j=0;j<q;j++){
			std::cin >> k2;
			int flag=0;
			for(int i=0; i<n; i++)
			{
				if (k2==k1[i]) {
					std::cout << k2 <<" found at "<< i+1 << '\n';
					flag = 1;
					break;
				}
			}
			if (flag==0) {
				std::cout << k2<<" not found" << '\n';
			}
		}
	}

}
