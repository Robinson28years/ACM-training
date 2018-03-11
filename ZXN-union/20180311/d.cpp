#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int k=n;
    int j=0;
    while(k>0){
        k/=10;
        j++;
    }
    int index=0;
    for(int i=0;i<j-1;i++){
        index += (int)pow(2,i+1);
    }
    int p = n;
    for(int i=0;i<j;i++){
        if(p%10==7){
            index +=(int)pow(2,i);
        }
        p/=10;
    }
    cout<<index+1<<endl;
    return 0;
}