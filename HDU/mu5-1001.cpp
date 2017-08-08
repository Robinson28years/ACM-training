#include <bits/stdc++.h>
using namespace std;

int cmp( const int &a, const int &b ){
    if( a > b )
       return 1;
    else
       return 0;
}

int main(int argc, char const *argv[]) {
int p;
std::cin >> p;
while (p--) {
    int n,k;
    int a[100000+5];
    std::cin >> n >> k;
    for(int i=0;i<n;i++) {
        // std::cin >> a[i];
        scanf("%d", &a[i]);
    }
    sort(a,a+n,cmp);
    int q=1;
    for(int i=0;i<n-1;i++) {
        if((a[i]-a[i+1])<=k)q++;
        else break;
    }
    std::cout << q << '\n';
}

    return 0;
}
