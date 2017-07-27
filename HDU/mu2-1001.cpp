#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[]) {
    int q;
    std::cin >> q;
    while (q--) {
        string a,b;
        int n,x,y;
        std::cin >> n>>x>>y;
        std::cin >> a;
        std::cin >> b;
        int t=0;
        for(int i=0; i<n; i++) {
            if(a[i]==b[i])t++;
        }
        int nosame;
        nosame = n-t;
        // int max = nosame/2;
        // if(nosame %2 != 0)max++;
        // max = t + max;
        int same = t;
        if(abs(x-y)>nosame || abs(x+y)>(2*same+nosame) || x>n || x<0 || y>n || y<0){
            std::cout << "Lying" << '\n';
        }else {
            std::cout << "Not lying" << '\n';
        }
    }

    return 0;
}
