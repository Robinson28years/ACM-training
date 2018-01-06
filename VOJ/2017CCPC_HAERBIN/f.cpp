#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[100005];
    int q[100005];
    int k[100005];

    int b;
    cin>>b;
    for(int i = 1;i <= b;i=i+2)
    {
        if(i%2!=0&&i==b){
            q[i]=i;
        }else{
            q[i]=i;
            k[i+1]=i+1;
        }
    }
    for(int i = b;i >0;i=i-2)
    {
            cout<<k[i]<<endl;
            // cout<<q[i-1]<<endl;
    }
    
}