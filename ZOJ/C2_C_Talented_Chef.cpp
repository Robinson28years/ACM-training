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
	int q;
	//std::cin >> q;
	scanf("%d",&q);
	while (q--) {
		int a[40005]={0};
		memset(a,0,sizeof(a));
		int x,y;
		int t;
		int sum=0,all=0;
		int flag=0;
		scanf("%d%d",&x,&y);
		for(int i=0; i<x; i++)
		{
			scanf("%d",&t);
			a[i]=t;
			all+=t;
		}
		int c = all/y;
		if (all%y!=0) {
			c++;
		}
		sort(a,a+x,cmp);
		int b = a[0];
		if (c>=b) {
			sum=c;
		}
		else{
			sum=b;
		}
		printf("%d\n",sum);
	//std::cout << sum << '\n';
	}

}
