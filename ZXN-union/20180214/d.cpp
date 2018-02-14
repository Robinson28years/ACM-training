#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main()
{
    set <long long> s;
    LL n,k;
    cin>>n>>k;
    bool flag = false;
    for(LL i =1;i<=k;i++){
        LL x = n%i;
        if(s.count(x)==1){
            flag = true;
            break;
        }
        s.insert(x);
    }
    if(flag){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }

    return 0;
}