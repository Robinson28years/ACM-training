#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int k[200];
    for(int i=0;i<200;i++)k[i]=-1;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        k[y]=1;
    }
    int sum=0;
    if(k[m]!=-1)sum++;
    for(int i=0;i<m;i++){
        if(k[i]==-1)sum++;
    }
    cout<<sum<<endl;

}