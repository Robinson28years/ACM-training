#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6+7;
int fa[maxn];
int n;

void init()  
{  
    for(int i=0;i<=2*n;i++)  
        fa[i]=i;  
}  
  
int find(int a)  
{  
    if(a==fa[a])return a;  
    return fa[a]=find(fa[a]);  
}  
  
void un(int a,int b)  
{  
    a=find(a);  
    b=find(b);  
    if(a==b)return ;  
    fa[a]=b;  
}  


int main()
{
 int q;
 cin>>q;
 while(q--){
    set<int> s;
    // for(int i=0;i<maxn;i++)
    //     fa[i]=i;
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
        // s.insert(fi(i));
        if(fa[i]==i)count++;
    }
    // cout<<s.size()<<endl;
    cout<<count<<endl;
 }
}