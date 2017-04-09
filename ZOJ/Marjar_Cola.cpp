#include <bits/stdc++.h>
using namespace std;

int main(){
	int q;
	std::cin >> q;
	while (q--) {
		int x,y,a,b;
		std::cin >> x>>y>>a>>b;
		int sum=0;
		if (x==1||y==1||(x==2&&y==2&&a>=2)||(x==2&&y==2&&b>=2)) {
			std::cout << "INF" << '\n';
		}else{
			while (1) {
				int k=a/x+b/y;
				sum+=k;
				a=(a%x)+k;
				b=(b%y)+k;
				// std::cout << a << " "<<b << '\n';
				if(a<x&&b<y)break;
			}
			std::cout << sum << '\n';
		}
	}
	return 0;
}
