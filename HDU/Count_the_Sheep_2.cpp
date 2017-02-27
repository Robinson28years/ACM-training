#include <bits/stdc++.h>
using namespace std;

const int  maxn = 100000 + 50;
struct Sheep {
	std::vector<int> v;
};

int main()
{
	int q;
	std::cin >> q;
	while (q--) {
		Sheep a[2][1005];
		int n,m,k;
		int w,e;
		long long sum=0;
		std::cin>> n >> m >> k;
		for(int i=1; i<=k; i++)
		{
			std::cin >> w >> e;
			// a[w].sex='m';
			a[0][w].v.insert(a[0][w].v.end(),e);
			// a[e].sex='w';
			a[1][e].v.insert(a[1][e].v.end(),w);
		}
		// for(int i=1; i<=1; i++)
		// {
		// 	vector<int>::iterator t ;
	    // 	for(t=a[0][i].v.begin(); t!=a[0][i].v.end(); t++)
	    //     cout<<*t<<" " ;
		// }
		for(int i=1; i<=m; i++)
		{
			// std::cout << i<<"mm0" << '\n';
			long long point = a[1][i].v.size()-1;
			for(vector<int>::iterator t=a[1][i].v.begin(); t!=a[1][i].v.end(); t++)
			{
				sum += (a[0][*t].v.size()-1)*point;
			}
		}
		std::cout << sum*2 << '\n';
	}


}
