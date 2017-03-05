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
		int sum=0;
		int flag=0;
		scanf("%d%d",&x,&y);
		for(int i=0; i<x; i++)
		{
			scanf("%d",&t);
			a[i]=t;
		}
		sort(a,a+x,cmp);
		do {
			if (flag) {
				break;
			}
			sum+=(a[y-1]-1);
			for(int i=0; i<y; i++)
			{
				a[i]-=(a[y-1]-1);
			}
			sort(a,a+x,cmp);
			if (a[y-1]==1) {
				sum+=a[0];
				flag=1;
			}
		} while(a[0]>0);

		printf("%d\n",sum);
	//std::cout << sum << '\n';
	}

}
