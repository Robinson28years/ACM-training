#include <bits/stdc++.h>
using namespace std;
int main()
{
	int w[6]={0,2,2,6,5,4};
	int v[6]={0,6,3,5,4,6};
	int f[100][100];
	int n = 5;
	for (int i = 1; i <=n; ++i)
	{
		// cout<<"ok"<<endl;
		for (int j = 0; j <=10; ++j)
		{
			if (i==1)
			{
				f[i][j]=0;
				f[i-1][j]=0;
			}
			if (j>=w[i])
			{
				f[i][j]=max(f[i-1][j],f[i-1][j-w[i]]+v[i]);
			}
			cout<<f[i][j]<<' ';
			// cout<<f[i][j]<<endl;

		}
		cout<<endl;
	}
	cout<<f[5][10]<<endl;
}
