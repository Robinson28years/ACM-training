#include <bits/stdc++.h>
using namespace std;


int s[1000005];

int main()
{
    int n;
    // cin>>n;
    while(cin>>n){
        map<int,int> m;
        m.clear();
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            s[i]=x;
            if(m[s[i]]>0){
                m[s[i]]++;
            }else{
                m[s[i]]=1;
            }
        }
        sort(s,s+n);
        int sum=0;
        for(int i=0;i<n;i++){
            if(m[s[i]]>1){
                sum+=m[s[i]]/2;
                m[s[i]]=m[s[i]]%2;
            }
            if(m[s[i]]==1&&m[s[i]+1]%2==1&&m[s[i]+2]>0){
                sum++;
                m[s[i]]=0;
                m[s[i]+1]--;
                m[s[i]+2]--;
            }
        }
        cout<<sum<<endl;
    }
}