#include "bits/stdc++.h"
int main(int argc, char const *argv[]) {
    long long n,k;
    int q=0;
    while (std::cin >> n>>k) {
        q++;
        long long y;
        long long j = k/(n-1);
        long long t = k%(n-1);
        if(t!=0)j++;
        // std::cout << "asdfa"<<j << '\n';
        if (j==1) {
            y=k;
        }
        else if (j%2==0) {
            if(t==0)y=n-2;
            else if(t==1)y=n;
            else y=t-1;
        }
        else {
            if(t==0)y=n-2;
            else if(t==1)y=n-1;
            else y=t-1;

        }
        std::cout <<"Case #"<<q<<": "<< y << '\n';
    }
}
