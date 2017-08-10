#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int maxn = 100000+50;

struct num {
    ll s;
    ll w;
};

int cmp( const num &a, const num &b ){
    if( a.s > b.s )
       return 1;
    else
       return 0;
}

int main(int argc, char const *argv[]) {
    int q;
    std::cin >> q;
    while (q--) {
        struct num a[maxn],b[maxn];
        ll t;
        int y;
        std::cin >> y;
        for(int i=0;i<y;i++) {
            scanf("%I64d", &a[i].s);
            a[i].w=i;
        }
        sort(a,a+y,cmp);
        for(int i=2;i<y;i++) {
            ll maxt=-100;
            for(int j=0;j<y;j++) {
                if((a[j].w+1) % i != 0){
                    maxt=a[j].s;
                    break;
                }
            }
            std::cout << maxt << ' ';
        }
        int i=y;
        ll maxt=-100;
        for(int j=0;j<y;j++) {
            if((a[j].w+1) % i != 0){
                maxt=a[j].s;
                break;
            }
        }
        std::cout << maxt << '\n';
    }
    return 0;
}
