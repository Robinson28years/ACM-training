#include <bits/stdc++.h>
using namespace std;

const int maxn=100+100;

int vis[maxn];
int d[maxn];
int n;
int v[maxn];
int maxv[maxn],minv[maxn];

void read_case() {
	std::cin >> n;
	for(int i=1; i<=n; i++)
	{
		std::cin >> v[i];
	}
}

void print_ans(int* d, int S) {
	for(int i=1; i<=n; i++)
	{
		if (S>=v[i] && d[S]==d[S-v[i]]+1) {
			std::cout << v[i] << ' ';
			print_ans(d,S-v[i]);
			break;
		}
	}
}
int main()
{
	int S=13;
	read_case();
	maxv[0]=0;
	minv[0]=0;
	for(int i=1; i<=S; i++)
	{
		maxv[i]=-(1<<30);
		minv[i]=1<<30;
	}
	for(int i=1; i<=S; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if (i>=v[j]) {
				maxv[i] = max(maxv[i], maxv[i-v[j]]+1);
				minv[i] = min(minv[i], minv[i-v[j]]+1);
			}
		}
	}
	std::cout << maxv[S] << '\n';
	print_ans(maxv,S);
	std::cout << '\n';
	std::cout << minv[S] << '\n';
	print_ans(minv,S);
}
