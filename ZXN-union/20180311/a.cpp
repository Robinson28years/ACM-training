#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int co = 0;
    for(int i=1;i<1000;i++){
        int k = i;
        int j=0;
        int c=0;
        while(k>0){
            k=k/10;
            j++;
        }
        if(co+j>=n){
            c = co+j-n;
            int z=i;
            for(int y=0;y<c;y++){
                z/=10;
                // cout<<z<<endl;
            }
            // cout<<j<<endl;
            cout<<z%10<<endl;
            break;
        }else{
            co+=j;
        }
    }

    return 0;
}