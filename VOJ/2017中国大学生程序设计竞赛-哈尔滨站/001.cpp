#include <bits/stdc++.h>
using namespace std;

int main(){
    int z;
    cin>>z;
    while(z--){
        double a,b;
    cin>>a>>b;
    for(int i = 1;i < 305;i++)
    {
        double k,q;
        k=b*i;
        q=a*i;
        if((int)k-(int)q>=1){
            cout<<i<<endl;
            break;
        }
    }
    }
}