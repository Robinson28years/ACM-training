#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    string s;
    cin>>s;
    int step = 0;
    bool home = true;
    for(int i=0;i<n;){
        if((i+d)>=(n-1)){
            step++;
            break;
        }
        // cout<<i<<endl;
        for(int x=d;x>=0;x--){
            if(x==0){
                home = false;
            }
            if(s[i+x]=='1'){
                i = i+x;
                step++;
                break;
            }
        }
        if(home==false)break;
    }
    if(home){
        cout<<step<<endl;
    }else{
        cout<<-1<<endl;
    }

    return 0;
}