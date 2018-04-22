#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 1e6+7;
int fa[maxn];

struct Node
{
    int start;
    int end;
    int val;
};

bool cmp(Node a,Node b){
    return a.val<b.val;
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
while(true){
    int n;
    cin>>n;
    if(n==0)break;
    int p=0; 
    for(int i=0;i<maxn;i++)
        fa[i]=i;
    Node s[1000];
    for (int i = 0; i < n-1; i++)
    {
        char x;
        int t;
        cin>>x>>t;
        // cout<<"ok"<<x<<" "<<t<<endl;;
        for (int j = 0; j < t; j++)
        {
            char y;
            int k;
            cin>>y>>k;
            s[p].start=x-'A';
            s[p].end=y-'A';
            s[p].val=k;
            p++;
        }
    }
    sort(s,s+p,cmp);
    int sum=0;
    for (int i = 0; i < p; i++)
    {
        // cout<<"start:"<<s[i].start<<" end:"<<s[i].end<<" val:"<<s[i].val<<endl;
        if(!check(s[i].start,s[i].end)){
            un(s[i].start,s[i].end);
            sum+=s[i].val;
        }      
    }
    cout<<sum<<endl;
} 

}