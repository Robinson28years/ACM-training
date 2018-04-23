#include <bits/stdc++.h>
using namespace std;

struct BR{
    int index;
    int level;
    bool operator < (BR &a){
        return a.level>level;
    }
};

int main()
{
   int n;
   cin>>n;
   int q=0;
   BR br[3000];
   priority_queue<BR> pq[5];
   string s;
   for(int i=1;i<=n;i++){
       string s;
       cin>>s;
       if(s=="IN"){
        int x,y;
        cin>>x>>y;
        br[q].index=i;
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