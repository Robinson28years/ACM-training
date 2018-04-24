#include <bits/stdc++.h>
using namespace std;

struct BR{
    int index;
    int level;
    bool operator < (const BR &a) const{
        if(a.level == level){
            return a.index < index;
        }else{
            return a.level>level;
        }
    }
};

int main()
{
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
   int n;
while(cin>>n){
       int q=0;
   BR br[3000];
   priority_queue<BR> pq[5];
   string s;
   int z=0;
   for(int i=1;i<=n;i++){
       string s;
       cin>>s;
       if(s=="IN"){
        z++;
        int x,y;
        cin>>x>>y;
        br[q].index=z;
        br[q].level=y;
        pq[x].push(br[q]);
        q++;  
       }else{
           int u;
           cin>>u;
           if(pq[u].empty())cout<<"EMPTY"<<endl;
           else {
               cout<<pq[u].top().index<<endl;
               pq[u].pop();
           }
       }
   }
}
}