#include <bits/stdc++.h>
using namespace std;

const int maxn = 100;

int a[maxn];
int dp[maxn];
int n;

struct state {
   int s;
   int e;
};

int p[maxn];

void read_case() {
    std::cin >> n;
    for(int i; i<n; i++){
      std::cin >> a[i];
    }
}

void slove() {
    fill(dp,dp+n,1);
    memset(p,-1,sizeof(p));
    // p[0].s=a[0];
    // p[0].e=a[0];
    for(int i=1; i<n; i++){
      for(int j=0; j<i; j++){
        if(a[i]>a[j] && dp[i]<=dp[j]+1){
          // std::cout << dp[i] << '\n';
          p[i]=j;
          dp[i]=dp[j]+1;
        }
      }
    }
}

int main(){
  read_case();
  slove();
  int flag;
  int maxnn=-1;
  for(int i=0; i<n; i++){
    if(maxnn<dp[i]){
      maxnn=dp[i];
      flag = i;
    }
  }
  int y = flag;
  stack<int> r;
  do {
    // std::cout << a[y] << '\n';
    r.push(a[y]);
    y=p[y];
  } while(y!=-1);
  while (!r.empty()) {
    std::cout << r.top() << '\n';
    r.pop();
  }

	return 0;
}
