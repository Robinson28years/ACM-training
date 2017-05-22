#include <bits/stdc++.h>
using namespace std;

const int maxn = 100000+100;
int a[maxn];
int n;

bool isSort(int j) {
  int flag1=1;
  int flag2=1;
  for (size_t i = 1; i < n; i++) {
    if(i==j || (i==1 && j==0)){
      continue;
    }else if ((i-1)==j) {
      if(a[i]<a[i-2])flag1=0;
    }else {
      if(a[i]<a[i-1])flag1=0;
    }
  }
  for (size_t i = 1; i < n; i++) {
    if(i==j || (i==1 && j==0)){
      continue;
    }else if ((i-1)==j) {
      if(a[i]>a[i-2])flag2=0;
    }else {
      if(a[i]>a[i-1])flag2=0;
    }
  }
  // std::cout << flag1 << " "<< flag2 << '\n';
  if(flag1==1 || flag2==1){
    return true;
  }else {
    return false;
  }
}

int main(int argc, char const *argv[]) {
int y;
std::cin >> y;
while (y--) {
  std::cin >> n;
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  int flag =0;
  for (size_t j = 0; j < n; j++) {
    bool ff=  isSort(j);
    if(ff){
      flag=1;
      break;
    }
  }
  if (flag) {
    std::cout << "YES" << '\n';
  }else{
    std::cout << "NO" << '\n';
  }
}
  return 0;
}
