#include<cstdio>
#include<cstring>
#include<vector>
#include<cmath>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;

struct BH {
	// int h;
	int s1;
	int s2;
};
const int maxn = 100000+10;

int k[10009]={0};
int ssu[maxn];
int r=1;
void ss() {
	k[2]=1;
	ssu[0]=2;
	for(int j=3; j<=10000; j++)
	{
		int flag=1;
		// int p = sqrt(j);
		for(int i=2; i<sqrt(j)+0.5; i++)
		{
			if (j%i==0) {
				flag=0;
				break;
			}
		}
		if (flag==1) {
			k[j]++;
			ssu[r++]=j;
			// std::cout <<r<<' '<< j << '\n';
		}
	}
}


int main()
{
	BH a[maxn];
	ss();
	// std::cout << r << '\n';
	// for(int i=0; i<r; i++)
	// {
	// 	std::cout << ssu[i] << '\n';
	// }
	for(int i=0; i<r; i++)
	{
		// std::cout <<i << ' '<< ssu[i] << '\n';
		for(int j=0; j<r; j++)
		{
			// std::cout << j << '\n';
			int t = ssu[i]+ssu[j];
			if (a[t].s1>0) {
				continue;
			}
			a[t].s1=ssu[i];
			a[t].s2=ssu[j];
		}
	}
	int z;
	while (std::cin >> z) {
		if (a[z].s1>a[z].s2) {
			swap(a[z].s1,a[z].s2);
		}
		std::cout << a[z].s1 <<' '<<a[z].s2 << '\n';
	}
}
