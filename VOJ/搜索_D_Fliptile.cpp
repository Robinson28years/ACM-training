#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 16;
int p[maxn][maxn];
int d[maxn][maxn];
int t[maxn][maxn];
int cnt, x, y;
int dr[4]={1,0,-1,0};
int dc[4]={0,1,0,-1};

void read_case() {
	for(int i=0; i<x; i++)
	{
		for(int j=0; j<y; j++)
		{
			std::cin >> d[i][j];
		}
	}
}

bool inside(int n, int m) {
	return n>=0&&n<x&&m>=0&&m<y;
}

void flip(int n, int m) {
	cnt++;
	p[n][m]=1;
	t[n][m]=!t[n][m];
	for(int i=0; i<4; i++)
	{
		if (inside(n+dr[i],m+dc[i])) {
			t[n+dr[i]][m+dc[i]]^=1;
		}

	}

}

bool walk(int k)
{
	cnt = 0;
	memcpy(t,d,sizeof(t));
	for(int i=0; i<y; i++)
	{
		if (k & (1<<(y-1-i))) {
			flip(0,i);
		}
	}
	for(int i=1; i<x; i++)
	{
		for(int j=0; j<y; j++)
		{
			if (t[i-1][j]) {
				flip(i,j);
			}
		}
	}
	for(int i=0; i<y; i++)
	{
		if (t[x-1][i]) {
			return false;
		}
	}
	return true;
}

int main()
{
	int ans,q;
	while (std::cin >> x >> y) {
		read_case();
		ans = x*y+1;
		q=-1;
		for(int i=0; i<(1<<y); i++)
		{
			if (walk(i)&& cnt<ans) {
				ans = cnt;
				q = i;
			}
		}
		memset(p,0,sizeof(p));
		if (q >=0) {
			walk(q);
			for(int i=0; i<x; i++)
			{
				for(int j=0; j<y; j++)
				{
					// printf("%d%c", p[i][j], j < y - 1 ? ' ' : '\n');
					std::cout << p[i][j] << ' ';
				}
				std::cout << '\n';
			}
		}
		else{
			std::cout << "IMPOSSIBLE" << '\n';
		}
	}

}
