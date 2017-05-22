#include <bits/stdc++.h>
using namespace std;
struct Good {
  queue<Good> q;
  int i;
  int w;
  int h;
  queue<int> g;
  Good(int i=0, int w=0, int h=0):i(i),w(w),h(h){}
};

int cmp( const int &a, const int &b ){
    if( a > b)
       return 1;
    else
       return 0;
}

int n;
int a[100];
int xw;
queue<Good> q;
int bestw;
int besth=10000;
queue<int> bw;
// int bw[100];


void slove() {
    while (!q.empty()) {
        Good u = q.front();
        q.pop();
        if (u.i==n) {
          // std::cout << "dsfased"<<u.h << '\n';
          if(u.w>=bestw) {
            if(u.h<besth){
              besth = u.h;
              bestw=u.w;
              bw = u.g;
            }

            // memcpy(bw,u.g,sizeof(u.g));
          }
        }else {
            if((u.w+a[u.i+1])<=xw){
              Good z = Good(u.i+1,(u.w+a[u.i+1]),u.h+1);
              z.g=u.g;
              z.g.push(1);
              // std::cout << "1" << '\n';
              // z.g[u.i+1]=1;
              q.push(z);
              // std::cout << z.w<<" "<<z.i<<" ";
              // queue<int>bw1 = z.g;
              // while (!bw1.empty()) {
              //   int j = bw1.front();
              //   bw1.pop();
              //   std::cout << j;
              // }
              // std::cout << '\n';
            }
            Good z = Good(u.i+1,(u.w),u.h);
            z.g=u.g;
            z.g.push(0);
            // std::cout << "0" << '\n';
            // z.g[u.i+1]=0;
            q.push(z);
            // std::cout << z.w<<" "<<z.i<<" ";
            // queue<int>bw1 = z.g;
            // while (!bw1.empty()) {
            //   int j = bw1.front();
            //   bw1.pop();
            //   std::cout << j;
            // }
            // std::cout << '\n';
        }
    }
}

int main(int argc, char const *argv[]) {
  std::cin >> n >> xw;
  for (size_t i = 1; i <=n; i++) {
    std::cin >> a[i];
  }
  // sort(a+1,a+n+1,cmp);
  // for (size_t i = 1; i <=n; i++) {
  //   std::cout << a[i] << '\n';
  // }
  Good u = Good(0,0,0);
  q.push(u);
  slove();
  std::cout << bestw << '\n';
  while (!bw.empty()) {
    int j = bw.front();
    bw.pop();
    std::cout << j;
  }

  return 0;
}
