#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    string b = "hello";
    int len = a.length();
    int j=0;
    for(int i=0;i<len;i++){
        if(a[i]==b[j]){
            j++;
        }
    }
    if(j==5){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}