#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 10000+50;
int d[maxn];
int p[maxn];
int n;
int maxx[maxn];
int minn[maxn];
int flag2=0;

void read_case() {
	std::cin >> n;
	for(int i=0; i<n; i++)
	{
		scanf("%d",&d[i]);
		if (d[i]<0) {
			flag2++;
		}
	}
}

void dp() {
	p[0]=d[0];
	maxx[0]=0;
	minn[0]=0;
	for(int i=1; i<n; i++)
	{
		if (d[i]>(p[i-1]+d[i])) {
			maxx[i]=i;
			minn[i]=i;
		}
		else{
			maxx[i]=i;
			minn[i]=minn[i-1];
		}
		p[i]=max(d[i],p[i-1]+d[i]);
	}
}

int main()
{
	while (1) {
		flag2=0;
		read_case();
		if (n==0) {
			break;
		}
		dp();
		int max=-1;
		int flag;
		for(int i=0; i<n; i++)
		{
			if (p[i]>max) {
				max=p[i];
				flag=i;
			}
		}
		// sort(p,p+n);
		if (flag2==n) {
			max=0;
			minn[flag]=0;
			maxx[flag]=n-1;
		}
		std::cout << max << ' '<< d[minn[flag]]<<' '<< d[maxx[flag]] << '\n';
	}
}
