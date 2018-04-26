#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
const int maxn = 1000005;
int a[maxn];
int b[maxn];

int main()
{
	int z;
	cin>>z;
	int v=0;
	while(z--){
	CLR(a,-1);
	CLR(b,-1);	
	v++;
	int n,m,p;
	cin>>n>>m>>p;
	for(int i=1;i<=n;i++){
		int t;
		scanf("%d",&t);
		a[i]=t;
	}
	for(int i=1;i<=m;i++){
		int t;
		scanf("%d",&t);
		b[i]=t;
	}
	int sum = 0;
	for(int i=1;;i++){
//		cout<<i<<endl;
		if((i+(m-1)*p)>n)break;
		bool flag = true;
		for(int j=1;j<=m;j++){
//			cout<<"w "<<j<<" :"<<b[j]<<" "<<a[i+(j-1)*p]<<endl;
			if(b[j]!=a[i+(j-1)*p]){
				flag = false;
				break;
			}
		}
		if(flag){
			sum++;
//			cout<<i<<endl;
//			break;
		}
	}
//	cout<<sum<<endl;
	printf("Case #%d: %d\n",v,sum);
	}
	
}