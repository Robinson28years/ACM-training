#include <bits/stdc++.h>
using namespace std;

int main(){
	int x1,x2,x3,y1,y2,y3;
	std::cin >> x1>>y1;
	std::cin >> x2>>y2;
	std::cin >> x3>>y3;
	std::cout << 3 << '\n';
	std::cout << x1+x2-x3 <<' '<< y1+y2-y3 << '\n';
	std::cout << x1+x3-x2 <<' '<< y1+y3-y2 << '\n';
	std::cout << x2+x3-x1 <<' '<< y2+y3-y1 << '\n';
	return 0;
}
