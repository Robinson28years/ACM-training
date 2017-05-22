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

int n;
int a[100];
int xw;
queue<Good> q;
int bestw;
int besth=10000;
queue<int> bw;

void slove() {
    while (!q.empty()) {
        Good u = q.front();
        q.pop();
        if (u.i==n) {
          if(u.w>=bestw) {
            if(u.h<besth){
              besth = u.h;
              bestw=u.w;
              bw = u.g;
            }
          }
        }else {
            if((u.w+a[u.i+1])<=xw){
              Good z = Good(u.i+1,(u.w+a[u.i+1]),u.h+1);
              z.g=u.g;
              z.g.push(1);
              q.push(z);
            }
            Good z = Good(u.i+1,(u.w),u.h);
            z.g=u.g;
            z.g.push(0);
            q.push(z);
        }
    }
}

int main(int argc, char const *argv[]) {
  std::cin >> n >> xw;
  for (size_t i = 1; i <=n; i++) {
    std::cin >> a[i];
  }
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
