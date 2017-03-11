#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 100000+50;

int d[maxn];
int p[maxn];
int pmin[maxn];
int pmax[maxn];
int n;

void read_case() {
	std::cin >> n;
	for(int i=0; i<n; i++)
	{
		scanf("%d",&d[i] );
	}

}

int main()
{
	int t;
	std::cin >> t;
	for(int k=0; k<t; k++)
	{
		// std::cout << k << '\n';
		read_case();
		p[0]=d[0];
		pmin[0]=0;
		pmax[0]=0;
		for(int i=1; i<n; i++)
		{
			if (d[i]>p[i-1]+d[i]) {
				pmin[i]=i;
				pmax[i]=i;
			}
			else{
				pmin[i]=pmin[i-1];
				pmax[i]=i;
			}
			p[i] = max(d[i],p[i-1]+d[i]);
		}
		int max=-100000;
		int flag;
		for(int i=0; i<n; i++)
		{
			if (p[i]>max) {
				max=p[i];
				flag=i;
			}
		}
		std::cout << "Case "<<k+1<<":" << '\n';
		std::cout << max << ' '<<pmin[flag]+1<< ' ' << pmax[flag]+1 << '\n';
		if (k<t-1) {
			std::cout << '\n';
		}
	}

}
