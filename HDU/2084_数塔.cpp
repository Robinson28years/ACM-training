#include <bits/stdc++.h>
using namespace std;

const int maxn = 100+50;
int a[maxn][maxn];
int d[maxn][maxn];
int n;

void read_case() {
	std::cin >> n;
	memset(a,0,sizeof(a));
	memset(d,-1,sizeof(d));
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			std::cin >> a[i][j];
		}
	}
}

int solve(int i, int j){
	if (d[i][j]>=0) {
		return d[i][j];
	}
	return d[i][j] = a[i][j] + (i == n ? 0 : max(solve(i+1, j), solve(i+1, j+1)) );
}

int main()
{
	int z;
	std::cin >> z;
	while (z--) {
		read_case();
		std::cout << solve(1,1) << '\n';
	}
}
