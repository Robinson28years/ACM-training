#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;

#define INF 0x3F3F3F3F
const int maxn = 2010;
int g[maxn][maxn];
int vis[maxn];
int dis[maxn];

void init(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            g[i][j]=INF;
        }
    }
}

void add_edge(int u,int v,int d){
    g[u][v]=min(g[u][v],d);
}

void dijkstra(int s,int n){
    for (int i = 1; i <= n; i++)
    {
        vis[i] = 0;
        i==s?dis[i]=0:dis[i]=INF;
    }
    for (int i = 1; i <= n; i++)
    {
        int x,minn=INF;
        for (int j = 1; j <= n; j++)
        {
            if(vis[j]==0&&dis[j]<=minn){
                x=j;
                minn = dis[j];
            }          
        }
        vis[x]=1;
        for (int j = 1; j <= n; j++)
        {
            int y = j;
            dis[y] = min(dis[y],dis[x]+g[x][y]);   
        }
    }
}


int main()
{
    int n,m;
    cin>>m>>n;
    // while(cin>>n>>m){
        init(n);
        for (int i = 0; i < m; i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            add_edge(x,y,z);
            add_edge(y,x,z);
        }
        int s,e;
        // cin>>s>>e;
        s=1;
        e=n; 
        dijkstra(s,n);
        int result = dis[e];
        if(result == INF){
            cout<<-1<<endl;
        }else{
            cout<<result<<endl;
        }
    // }

}