#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[]) {
    int q;
    std::cin >> q;
    while (q--) {
        int t;
        std::cin >> t;
        int maxn=-100;
        while (t--) {
            int a,b,c,ab,bc,ac,abc;
            std::cin >> a>>b>>c>>ab>>bc>>ac>>abc;
            if(a<ab||a<ac||b<ab||b<bc||c<ac||c<bc||a<abc||b<abc||c<abc||ab<abc||bc<abc||ac<abc||a<(ab+ac-abc)||b<(ab+bc-abc)||c<(ac+bc-abc)) {

            }
            else {
                int z = a+b+c-ab-bc-ac+abc;
                if(z>maxn)maxn=z;
            }
        }
        std::cout << maxn << '\n';
    }

    return 0;
}
