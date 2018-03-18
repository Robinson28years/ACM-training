#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[9999];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[9999];
    int minn = 10000;
    int mins;
    for(int i=0;i<n-2;i++){
        b[i]=a[i+2]-a[i];
        if(b[i]<=minn){
            minn = b[i];
            mins = i;
        }
    }
    // cout<<mins<<endl;
    int maxn = -100;
    for(int i=0;i<n-1;i++){
        int q; 
        if(i==(mins+1)){
             q = a[i+1]-a[i-1];
        }else{
             q = a[i+1]-a[i];
        }
        // cout<<"oko"<<q<<endl;
        if(q>maxn){
            maxn = q;
        }
    }
    cout<<maxn<<endl;
    
    return 0;
}