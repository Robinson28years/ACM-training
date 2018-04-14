#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
struct Node
{
	double x;
	double y;
};
struct Xll
{
	double x3;
	double y3;
};

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	// int i, j , k;
	int n;
	cin>>n;
	Node nd[2010];
	Xll xll[2010];
	map<Xll,int> cnt;
	
	for (int i = 0; i < n; ++i)
	{
		int x,y;
		cin>>x>>y;
		nd[i].x=x;
		nd[i].y=y;
	}
	int m = n*(n-1)/2;
	int g=0;
	int count=0;
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			xll[g].x3=nd[i].x-nd[j].x;
			xll[g].y3=nd[i].y-nd[j].y;

			count+=cnt[xll[g]];
			cnt[xll[g]]++;
			
			g++;

		}
	}
	cout<<count/2<<endl;
	
}