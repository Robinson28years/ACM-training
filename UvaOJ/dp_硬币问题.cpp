#include <bits/stdc++.h>
using namespace std;

const int maxn=100+100;

int vis[maxn];
int d[maxn];
int n;
int v[maxn];

void read_case() {
	std::cin >> n;
	for(int i=1; i<=n; i++)
	{
		std::cin >> v[i];
	}
}

int dp(int S){
	std::cout << S << '\n';
	if (vis[S]) {
		return d[S];
	}
	vis[S] = 1;
	int& ans = d[S];
	ans = -(1<<30);
	for(int i=1; i<=n; i++)
	{
		if (S >= v[i]) {
			ans = max(ans, dp(S-v[i])+1);
		}
	}
	return ans;
}

int main()
{
	memset(vis,0,sizeof(vis));
	memset(d,-1,sizeof(d));
	read_case();
	std::cout << dp(13) << '\n';
}
