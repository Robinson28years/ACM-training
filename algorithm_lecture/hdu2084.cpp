#include "bits/stdc++.h"
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){
    int data[500][500]={0};
    int dp[500][500]={0};
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin>>data[i][j];   
        }
    }

    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            dp[i][j]=max((data[i][j]+dp[i+1][j]),(data[i][j]+dp[i+1][j+1]));
        }
    }

    cout<<dp[0][0]<<endl;
    }
}