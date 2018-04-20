#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6+7;
int fa[maxn];

int fi(int x){
    return fa[x]==x?x:fa[x]=fi(fa[x]);
}
void un(int x,int y){
    int p1=fi(x),p2=fi(y);
    if(p1==p2)return;
    fa[x]=y;
}
int check(int x,int y){
    int p1=fi(x),p2=fi(y);
    if(p1==p2)return 1;
    else return 0;
}


int main()
{
    for(int i=0;i<maxn;i++)
        fa[i]=i;

}