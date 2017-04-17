#include <bits/stdc++.h>
using namespace std;

int main(){
	int q;
	std::cin >> q;
	while (q--) {
		int a,b,c,d;
		std::cin >> a>>b>>c>>d;
		std::cout << c<<" "<<b+d << '\n';
		std::cout << a<<" "<<b+d << '\n';
	}
	return 0;
}
