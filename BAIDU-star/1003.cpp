#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int maxn = 100000+5;
const int maxm = 1000+5;

ll a[maxn],b[maxn],k[maxm],p[maxm];
ll dp[maxm][20];

int main()
{
	int n,m;
    while (std::cin >> n >> m) {
        ll maxb=0,maxp=0,h=0;
        ll sum = 0;
        memset(dp,0,sizeof(dp));
        for(int i=0; i<n; i++) {
            scanf("%I64d%I64d",&a[i],&b[i]);
            maxb = max(maxb, b[i]);
            h = max(h,a[i]);
        }
        for(int i=0; i<m; i++) {
            scanf("%I64d%I64d",&k[i],&p[i] );
            maxp = max(maxp, p[i]);
        }
        if(maxb >= maxp) {
            std::cout << "-1" << '\n';
            continue;
        }
        //用dp打表记录值
        for(int i=0; i<=10; i++) {
            for(int j=1; j<=h; j++) {
                dp[j][i] = 100000000;
                for(int t=0; t<m; t++) {
                    ll d = p[t]-i;
                    if(d<=0) {
                        continue;
                    }
                    if(d>=j) {
                        dp[j][i] = min(dp[j][i],k[t]);
                    }
                    else {
                        dp[j][i] = min(dp[j][i],dp[j-d][i]+k[t]);
                    }
                }
            }
        }
        for (int i=0; i<n; i++) {
            sum+=dp[a[i]][b[i]];
        }
        std::cout << sum << '\n';
    }

}
