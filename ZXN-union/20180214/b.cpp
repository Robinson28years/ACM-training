#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int rf[1005]={0};
    int a =0;
    int b =1;
    for(;b<=n;){
        int c = b;
        b = a + b;
        a = c;
        rf[b]=1;
    }
    for(int i=1;i<=n;i++){
        if(rf[i]==1){
            cout<<"O";
        }else{
            cout<<"o";
        }
    }
    cout<<endl;
}