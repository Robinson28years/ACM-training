#include <bits/stdc++.h>
using namespace std;

char a[200][200];

void dfs(int r, int l) {
	if (a[r][l]!='@') {
		// std::cout << "ok" << '\n';
		return ;
	}
	else {
		a[r][l]='*';
		dfs(r+1,l);
		dfs(r,l+1);
		dfs(r,l-1);
		dfs(r+1,l+1);
		dfs(r+1,l-1);
		dfs(r-1,l+1);
		dfs(r-1,l-1);
		dfs(r-1,l);
	}
}

int main()
{
	int x,y,k;
	while (	std::cin >> x >> y && x!=0) {
		k=0;
		memset(a,'*',sizeof(a[0][0]));
		for(int i=0; i<x; i++)
		{
			for(int j=0; j<y; j++)
			{
				std::cin >> a[i][j];
			}
		}
		for(int i=0; i<x; i++)
		{
			for(int j=0; j<y; j++)
			{
				if (a[i][j]=='@') {
					dfs(i,j);
					k++;
				}
			}
		}
		std::cout << k << '\n';
		// for(int i=0; i<x; i++)
		// {
		// 	for(int j=0; j<y; j++)
		// 	{
		// 		std::cout<< a[i][j];
		// 	}
		// 	std::cout  << '\n';
		// }
	}

}
