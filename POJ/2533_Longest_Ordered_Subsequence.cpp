#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 1000+50;



int main()
{
	int d[maxn];
	int p[maxn];
	int t;
	// int k;
	// std::cin >> k;
	std::cin >> t;
		// memset(d,-1,sizeof(d));
		// memset(p,1,sizeof(p));
		// fill(&p[0], &p[maxn-1], 1);
		fill(p,p+maxn,1);
		// std::cout << p[10] << '\n';
		for(int i=0; i<t; i++)
		{
			std::cin >> d[i];
		}
		// read_case();
		for(int i=1; i<t; i++)
		{
			for(int j=0; j<i; j++)
			{
				if (d[i]>d[j]) {
					p[i]=max(p[i],p[j]+1);
					// std::cout << i+1 << ' '<< p[i] << '\n';
				}
			}
		}
		// sort(p+1,p+t+1);
		int max=-1;
		for(int i=0; i<t; i++)
		{
			if (p[i]>max) {
				max = p[i];
			}
		}
		std::cout << max << '\n';
}
