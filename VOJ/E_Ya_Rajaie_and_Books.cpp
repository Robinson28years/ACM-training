#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<stack>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n;
  std::cin >> n;
  while (n--) {
  	int x;
	std::cin >> x;
	if(x%5!=0){
		std::cout << x/5+1 << '\n';
	}else{
		std::cout << x/5 << '\n';
	}
  }
 return 0;
}
