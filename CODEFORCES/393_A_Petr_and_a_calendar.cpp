#include <bits/stdc++.h>
using namespace std;

int main(){
	int fr[13]={
		0,31,28,31,30,31,30,31,31,30,31,30,31
	};
	int m,d;
	std::cin >> m>>d;
	if ((fr[m]+d-1)%7!=0) {
		std::cout << (fr[m]+d-1)/7+1 << '\n';
	}else{
		std::cout << (fr[m]+d-1)/7 << '\n';
	}
	return 0;
}
