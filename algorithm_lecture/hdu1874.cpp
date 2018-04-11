#include <bits/stdc++.h>
using namespace std;

const int maxn = 300;

int main()
{
    
    int n,m;
    // cin>>n>>m;
    while(cin>>n>>m){
        int data[maxn][maxn];
    int dp[maxn][maxn];
        for (int i = 0; i < maxn; i++)
    {
        for (int j = 0; j < maxn; j++)
        {
            if(i==j)data[i][j]=0;
            else data[i][j]=1e9;
        }
    }   
    for (int i = 0; i < m; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        data[x][y]=min(z,data[x][y]);
        data[y][x]=min(z,data[y][x]);
    }
    int t1,t2;
    cin>>t1>>t2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                data[j][k]=min(data[j][k],data[j][i]+data[i][k]);
            }
        }
    }
    int result = data[t1][t2];
    if(result==1e9)cout<<-1<<endl;
    else cout<<result<<endl;
    }
}
 