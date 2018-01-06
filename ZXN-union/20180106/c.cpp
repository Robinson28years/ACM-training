#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long l,r,x,y,k;
    while(cin>>l>>r>>x>>y>>k) {
        if (y*k<l || x*k>r)
            printf("NO\n");
        else {
            long long i = x;
            long long q;
            while(i<=y) {
                q = i * k;
                if (q>r) {
                    printf("NO\n");                    
                    break;
                }
                if (q>=l && q<=r) {
                    printf("YES\n");                    
                    break;
                }
                i = i + 1;
            }
        }
    }
    return 0;
}