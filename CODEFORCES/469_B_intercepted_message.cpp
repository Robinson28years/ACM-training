#include <bits/stdc++.h>
using namespace std;

int a[1000006];
int b[1000006];

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int x=0,y=0;
    int t1=0,t2=0;
    int sum=0;
    t1=a[0];
    t2=b[0];
    while(true){
        
        // cout<<t1<<" "<<t2<<endl;
        if(t1<t2){
            x++;
            t1+=a[x];
            // continue;
        }else if(t2<t1){
            y++;
            t2+=b[y];
            // t2+=b[y++];
        }else{
            // cout<<"ok: "<<t1<<endl;
            sum++;
            x++;
            y++;
            t1=a[x];
            t2=b[y];
        }
        if(x==n&&y==m)break;
    }
    cout<<sum<<endl;
}