#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn=5000;
int mr[maxn][maxn];

int main()
{
	int n,m,a,b;
	while (std::cin >> n>>m>>a>>b) {
		int d[maxn];
		memset(mr,-1,sizeof(mr));
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				mr[i][j]=b;
			}
		}
		for(int i=0; i<m; i++)
		{
			int x,y;
			std::cin >> x>>y;
			mr[x][y]=a;
		}


		d[1]=0;
		for(int i=2; i<=n; i++)
		{
			d[i]=mr[1][i];
			for(int j=1; j<i; j++)
			{
				if ((d[j]+mr[j][i])<d[i]) {
					// std::cout <<"kkk "<< d[j] << '\n';
					d[i]=d[j]+mr[j][i];
				}
			}
			// std::cout << d[i] << '\n';
		}
		std::cout << d[n] << '\n';
	}




}
