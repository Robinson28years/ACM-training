#include "bits/stdc++.h"
using namespace std;
const int MAXN = 100000+100;
int n;
int a[MAXN];
int b[MAXN];
int c[MAXN];
int dp[MAXN];
const int inf=1e9+7;
int binary_search(int x){
    int l=1,r=n;
    while(l<r){
        int mid=(l+r)>>1;
        if(b[mid]>x) r=mid;
        else l=mid+1;
    }
    return l;
}
int lis(){
    memset(b,inf,sizeof(b));
    b[0]=0;
    int maxx=0;
    for(int i=1; i<=n; ++i){
        int idx=binary_search(a[i]);
        maxx=max(idx,maxx);
        b[idx]=a[i];
    }
    return maxx;
}
int delis(){
    memset(b,inf,sizeof(b));
    b[0]=0;
    int maxx=0;
    for(int i=1; i<=n; ++i){
        int idx=binary_search(c[i]);
        maxx=max(idx,maxx);
        b[idx]=c[i];
    }
    return maxx;
}
int main(int argc, char const *argv[]) {
  int y;
  std::cin >> y;
  while (y--) {
    std::cin >> n;
    for (size_t i = 1; i <=n; i++) {
      scanf("%d",&a[i] );
      c[n-i+1]=a[i];
    }
    if(delis()>=(n-1) || lis()>=(n-1))
    std::cout << "YES" << '\n';
    else std::cout << "NO" << '\n';
  }
  // std::cout << delis() << '\n';
  return 0;
}
