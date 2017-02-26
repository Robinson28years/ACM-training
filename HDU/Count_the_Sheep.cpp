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
		int sum=0;
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
		for(int i=1; i<=n; i++)
		{
			// std::cout << i<<"mm0" << '\n';
			for(vector<int>::iterator t=a[0][i].v.begin(); t!=a[0][i].v.end(); t++)
			{
				// std::cout << *t<<"wt1" << '\n';
				for(vector<int>::iterator b=a[1][*t].v.begin(); b!=a[1][*t].v.end(); b++)
				{

					if (*b==i ) {
						continue;
					}
					else{
						// std::cout << *b<<"mb2" << '\n';
						for(vector<int>::iterator c=a[0][*b].v.begin(); c!=a[0][*b].v.end(); c++)
						{

							if (*c==*t ) {
								continue;
							}
							else{
								// std::cout << *c<<"wc3" << '\n';
								// for(vector<int>::iterator d=a[1][*c].v.begin(); d!=a[1][*c].v.end(); d++)
								// {
									// if (*d==*b ) {
									// 	continue;
									// }
									// else{
									// std::cout << *d<<"md4" << '\n';
										sum++;
									// }
								// }
							}
						}
					}
				}
			}
		}
		for(int i=1; i<=m; i++)
		{
			for(vector<int>::iterator t=a[1][i].v.begin(); t!=a[1][i].v.end(); t++)
			{
				// std::cout << *t<<"t" << '\n';
				for(vector<int>::iterator b=a[0][*t].v.begin(); b!=a[0][*t].v.end(); b++)
				{

					if (*b==i ) {
						continue;
					}
					else{
						// std::cout << *b<<"b" << '\n';
						for(vector<int>::iterator c=a[1][*b].v.begin(); c!=a[1][*b].v.end(); c++)
						{

							if (*c==*t ) {
								continue;
							}
							else{
								// std::cout << *c<<"c" << '\n';
								// for(vector<int>::iterator d=a[0][*c].v.begin(); d!=a[0][*c].v.end(); d++)
								// {
									// if (*d==*b ) {
									// 	continue;
									// }
									// else{
									// std::cout << *d<<"d" << '\n';
										sum++;
									// }
								// }
							}
						}
					}
				}
			}
		}
		std::cout << sum << '\n';
	}


}
