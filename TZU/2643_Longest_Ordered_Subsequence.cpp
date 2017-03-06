#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 1000+50;

int d[maxn];
int p[maxn];
int t;

void read_case() {
	std::cin >> t;
	for(int i=1; i<=t; i++)
	{
		std::cin >> d[i];
	}
}

void dp() {
	p[1]=1;
	for(int i=1; i<=t; i++)
	{
		for(int j=1; j<i; j++)
		{
			if (d[i]>=d[j] && p[j]+1>p[i]) {
				p[i]=max(1,p[j]+1);
				std::cout << i << ' '<< p[i] << '\n';
			}
		}
	}
}

int main()
{
	int k;
	std::cin >> k;
	while (k--) {
		memset(d,-1,sizeof(d));
		memset(p,-1,sizeof(p));
		read_case();
		dp();
		sort(p+1,p+t+1);
		std::cout << p[t] << '\n';
	}
}
