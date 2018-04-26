#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l,r,a;
    cin>>l>>r>>a;
    for (int i = 0; i < a; i++)
    {
        if(l>r){
            r++;
        }else{
            l++;
        }
    }
    cout<<2*min(l,r)<<endl;

}