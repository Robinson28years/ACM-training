#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
//XXXXXXXXXXXXXXXXXXXXXXXX
#define INF 0x3F3F3F3F
const int maxn = 1010;
double g[maxn][maxn];
int vis[maxn];
double dis[maxn];
double minn2;

struct Node
{
    int x;
    int y;
};

void init(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            g[i][j]=INF;
        }
    }
}

void add_edge(int u,int v,double d){
    g[u][v]=min(g[u][v],d);
}

void dijkstra(int s,int n){
    for (int i = 0; i < n; i++)
    {
        vis[i] = 0;
        i==s?dis[i]=0:dis[i]=INF;
    }
    for (int i = 0; i < n; i++)
    {
        int x,minn=INF;
        for (int j = 0; j < n; j++)
        {
            if(vis[j]==0&&dis[j]<=minn){
                x=j;
                minn = dis[j];
            }          
        }
        vis[x]=1;
        for (int j = 0; j < n; j++)
        {
            int y = j;
            double t = dis[y];
            dis[y] = min(dis[y],dis[x]+g[x][y]);   
            if(t!=dis[y]&&y==1)minn2=g[x][y];
        }
    }
}


int main()
{
    int n,m;
    int r=0;
    while(true){
        cin>>n;
        r++;
        if(n==0)break;
        m = n*(n-1)/2;
        init(n);
        Node q[300];
        for (int i = 0; i < n; i++)
        {
            int x,y;
            cin>>x>>y;
            q[i].x=x;
            q[i].y=y;
            // for(int j =0; j<=i; j++)
            // {

            // }
            // add_edge(x,y,z);
            // add_edge(y,x,z);
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                int d1= (int)pow(q[i].x-q[j].x,2)+pow(q[i].y-q[j].y,2);
                double d = sqrt(d1);
                // cout<<d<<endl;
                if(i==1&&j==0)continue;
                add_edge(i,j,d);
                add_edge(j,i,d);
            }
        }
        int s,e;
        // cin>>s>>e;
        s=0;
        e=1;
        dijkstra(s,n);
        // double result = dis[e];
        // if(result == INF){
        //     cout<<-1<<endl;
        // }else{
        //     cout<<result<<endl;
        // }
        if(r!=1)cout<<endl;
        if(minn2==0){
            int d1= (int)pow(q[0].x-q[1].x,2)+pow(q[0].y-q[1].y,2);
                double d = sqrt(d1);
                // cout<<d<<endl;
                printf("Scenario #%d\n",r);
                printf("Frog Distance = %.3f\n",d);

        }else{
            printf("Scenario #%d\n",r);
            printf("Frog Distance = %.3f\n",minn2);
        // cout<<minn2<<endl;
        }
    }

}