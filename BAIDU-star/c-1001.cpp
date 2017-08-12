#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, char const *argv[]) {
    int q;
    std::cin >> q;
    while (q--) {
        ll n,m;
        std::cin >> m;
        n=m-1;
        int j=0;
        for(int i=1;i<1000000000;i++) {
            if(n%i==0)j++;
        }
        std::cout << j << '\n';
        // if(n%1==0)j++;
        // if(n%2==0)j++;
        // if(n%3==0)j++;
        // if(n%4==0)j++;
        // if(n%5==0)j++;
        // if(n%6==0)j++;
        // if(n%7==0)j++;
        // if(n%8==0)j++;
        // if(n%9==0)j++;
        // if(n%10==0)j++;
        // std::cout << j << '\n';
    }
    return 0;
}
