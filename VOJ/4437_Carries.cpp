#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn=100000+100;

int hn(int i, int j)
{

	int sum = i+j;
	int k=0;
	while(sum>9){
		k++;
		sum/=10;
	}
	// if (k>0) {
	// 	std::cout << i<< ' '<<j << '\n';
	// }
	return k;
}

int main()
{
	int n;
	while (std::cin >> n) {
		int q[maxn];
		int sum=0;
		for(int i=0; i<n; i++)
		{
			std::cin >> q[i];
			for(int j=0; j<i; j++)
			{
				sum+=hn(q[i],q[j]);
			}
		}
		std::cout << sum << '\n';
	}

}
