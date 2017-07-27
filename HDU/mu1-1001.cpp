#include "bits/stdc++.h"
int main(int argc, char const *argv[]) {
    int a,b;
    int q=0;
    while (std::cin >> a) {
        q++;
        b = a/3.3219280948;
        std::cout <<"Case #"<<q<<": "<< b << '\n';
    }
    return 0;
}
