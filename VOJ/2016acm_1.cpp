#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int j;
    std::cin >> j;
    while (j--) {
        int a,b;
        int n;
        int sum =0;
        std::cin >> n;
        for (size_t i = 0; i < n; i++) {
            std::cin >> a>>b;
            sum+=a*b;
        }
        std::cout << sum << '\n';
    }

    return 0;
}
