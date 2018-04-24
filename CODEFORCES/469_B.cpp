#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int>V[100100];
int vis[100100];

ll n1;
ll n2;

void dfs(int x,int step){
    for (int i = 0; i < V[x].size(); i++)
    {
    if(!vis[V[x][i]]){
        vis[V[x][i]]=1;
       if(step%2==1)n1++;
       else n2++;
       dfs(V[x][i],step+1);  
    }
      
    }
}

int main()
{
    int n,a,b;
    cin>>n;
    for (int i = 0; i < n-1; i++)
    {
        cin>>a>>b;
        V[a].push_back(b);
        V[b].push_back(a);   
    }
    n1=1;
    n2=0;
    vis[1]=1;
    dfs(1,0);
    cout<<n1*n2-n+1<<endl;

}