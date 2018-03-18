#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    int dp[2100][2100];
    memset(dp, 0 ,sizeof(dp));
    cin>>n>>k;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<=n; j++) dp[j][1]=1;
        for(int j=1; j<=n; j++) {
            for(int z=1; z*j==i; z++) {
                dp[z][j] += dp[i][j];
            }
        }
    }
}