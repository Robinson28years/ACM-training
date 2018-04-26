#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 50;
char g[maxn][maxn][maxn];
int vis[maxn][maxn][maxn];
struct Node
{
    int r,c,d;
    Node(int r=0,int c=0,int d=0):r(r),c(c),d(d){}
};
// Node p[maxn][maxn][maxn];
const int dr[]={-1,0,1,0,0,0};
const int dc[]={0,1,0,-1,0,0};
const int dd[]={0,0,0,0,1,-1};
int m,n,l;
int r1,c1,d1,r2,c2,d2;

void read_case(){
    cin>>l>>m>>n;
    // getchar();
    for(int i=0;i<l;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                cin>>g[i][j][k];
                if(g[i][j][k]=='S'){
                    r1=j,c1=k,d1=i;
                }else if(g[i][j][k]=='E'){
                    r2=j,c2=k,d2=i;
                }
                // scanf("%c",&g[i][j][k]);
            }
            // getchar();
        }
        // getchar();
    }

}

bool inside(int r,int c,int d)
{
    return r>=0&&r<m&&c>=0&&c<n&&d>=0&&d<l;
}

Node walk(const Node& u,int dir)
{
    return Node(u.r+dr[dir],u.c+dc[dir],u.d+dd[dir]);
}

void solve()
{
    queue<Node> q;
    memset(vis,-1,sizeof(vis));
    Node u = Node(r1,c1,d1);
    vis[u.d][u.r][u.c]=0;
    q.push(u);
    bool flag = false;
    while(!q.empty()){
        Node u = q.front();q.pop();
        if(u.r==r2&&u.c==c2&&u.d==d2){
            flag = true;
            // cout<<vis[u.d][u.r][u.c]<<endl;
            printf("Escaped in %d minute(s).\n",vis[u.d][u.r][u.c]);
            // cout<<"ok"<<endl;
            return ;
        }
        for(int i=0;i<6;i++){
            Node v = walk(u,i);
            if(inside(v.r,v.c,v.d)&&vis[v.d][v.r][v.c]<0&& g[v.d][v.r][v.c]!='#'){
                vis[v.d][v.r][v.c]=vis[u.d][u.r][u.c]+1;
                q.push(v);
            }
        }

    }
    if(!flag){
        cout<<"Trapped!"<<endl;
    }

}


int main()
{
    while(true){
        read_case();
        if(l==0)break;
        solve(); 
    }
    return 0;
    

}