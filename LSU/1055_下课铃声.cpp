#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;

struct Ke {
	int s;
	int xu;
};
int cmp( const Ke &a, const Ke &b ){
    if( a.s < b.s )
       return 1;
    else
       return 0;
}
int main()
{
	int q;
	std::cin >> q;
	while (q--) {
		int j;
		Ke a[30];
		std::cin >> j;
		int x,y;
		for(int i=1; i<=j*2; i++)
		{
			scanf("%d:%d",&x,&y );
			a[i].s=x*60+y;
			a[i].xu=i;
		}
		sort(a+1,a+j*2+1,cmp);
		for(int i=1; i<=j*2; i++)
		{
			std::cout << a[i].xu;
		}
		std::cout << '\n';
	}
}
