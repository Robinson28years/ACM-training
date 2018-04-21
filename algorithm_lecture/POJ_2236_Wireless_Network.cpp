#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
const int maxn = 1e6+7;
int fa[maxn];

struct Node
{
    int x;
    int y;
    bool fix;
};

int fi(int x){
    return fa[x]==x?x:fa[x]=fi(fa[x]);
}
void un(int x,int y){
    int p1=fi(x),p2=fi(y);
    if(p1==p2)return;
    fa[p1]=p2;
}
int check(int x,int y){
    int p1=fi(x),p2=fi(y);
    if(p1==p2)return 1;
    else return 0;
}


int main()
{
    int n,m;
    cin>>n>>m;
    Node s[1005];
    for (int i = 1; i <= n; i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        s[i].x=x;
        s[i].y=y;
        s[i].fix=false;
    }
    for(int i=0;i<maxn;i++)
        fa[i]=i;

    char t;
    while(cin>>t){
        if(t=='O'){
            int p;
            scanf("%d",&p);
            s[p].fix=true;
            // cin>>p;
            for(int i=1;i<=n;i++){
                if(i==p)continue;
                else{
                    if(((s[p].x-s[i].x)*(s[p].x-s[i].x)+(s[p].y-s[i].y)*(s[p].y-s[i].y))<=(m*m)&&s[i].fix){
                        // cout<<p<<" "<<i<<endl;
                        un(p,i);
                    }
                }
            }

        }else{
            int k,l;
            scanf("%d%d",&k,&l);
            int flag = check(k,l);
            if(flag==1){
                cout<<"SUCCESS"<<endl;
            }else{
                cout<<"FAIL"<<endl;
            }
            
        }
    }
    

}