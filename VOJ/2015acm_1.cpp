#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int t;
    std::cin >> t;
    while (t--) {
        int l,r;
        int n;
        int a[100000]={0};
        int p;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        std::cin >> p;
        for (int i = 0; i < p; i++) {
            std::cin >> l>>r;
            int max = -1;
            for (int j = l-1; j < r; j++) {
                if(max<a[j])max = a[j];
            }
            std::cout << max << '\n';
        }
    }


    return 0;
}
