#include <bits/stdc++.h>
using namespace std;

int cmp( const int &a, const int &b ){
    if( a > b )
       return 1;
    else
       return 0;
}

int main()
{
		int x,y;
	// int q;
	// std::cin >> q;
	int a[1009]={0};
	while (std::cin >> x) {
		// memset(a,0,sizeof(a));

		int t;
		int sum=0;

		for(int i=0; i<x; i++)
		{
			scanf("%d", &t);
			a[i]=t;
		}

		while (1) {
			sort(a,a+x,cmp);
			if (a[0]<=0) {
				break;
			}
			a[0]-=4;
			for(int i=1; i<x; i++)
			{
				a[i]-=1;
			}
			sum++;

		}
	std::cout << sum << '\n';
	}

}
