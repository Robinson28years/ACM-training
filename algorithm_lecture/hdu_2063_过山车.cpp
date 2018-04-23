#include <bits/stdc++.h>
using namespace std;

const int maxn = 510;

int line[maxn][maxn],used[maxn],nxt[maxn];
int k,n,m,u,v;

bool Find(int x){
    for(int i=1;i<=m;i++){
        if(line[x][i]&&!used[i]){
            used[i] = 1;
            if(nxt[i]==0||Find(nxt[i])){
                nxt[i] = x;
                return true;
            }
        }
    }
    return false;
}

int match(){
    int sum = 0;
    for(int i=1;i<=n;i++){
        memset(used,0,sizeof(used));
        if(Find(i))sum++;
    }
    return sum;
}

int main()
{
    while(true){
        cin>>k;
        if(k==0)break;
        cin>>n>>m;
        memset(line,0,sizeof(line));
        memset(nxt,0,sizeof(nxt));
        while(k--){
            cin>>u>>v;
            line[u][v] = 1;
        }
        cout<<match()<<endl;

    }

}