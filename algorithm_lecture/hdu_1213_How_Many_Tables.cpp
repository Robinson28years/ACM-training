#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6+7;
int fa[maxn];
int n;

void init(){  
    for(int i=0;i<=2*n;i++)  
        fa[i]=i;  
}  
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
 int q;
 cin>>q;
 while(q--){
    set<int> s;
    int m;
    cin>>n>>m;
    init();
    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;
        un(x,y);   
    }
    int count=0;
    for (int i = 1; i <=n; i++)
    {
        s.insert(fi(i));
        // if(fa[i]==i)count++;
    }
    cout<<s.size()<<endl;
    // cout<<count<<endl;
 }
}