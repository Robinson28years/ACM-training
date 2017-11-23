#include <bits/stdc++.h>
using namespace std;

int main () {
    
    int x,y;
    while (std::cin >> x>>y) {
        int max=0;
        for (size_t j = x; j < (y+1); j++) {
            int n=j;
            int i = 0;
            do {
                i++;
                if(n%2!=0)n=3*n+1;
                else n=n/2;
            } while(n!=1);
            if ((i+1)>max) {
                max = i+1;
            }
        }
        std::cout <<x<<" "<<y<<" "<< max << '\n';
    }
}
