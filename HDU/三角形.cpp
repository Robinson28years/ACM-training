#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	std::cin >> n;
	while (n--) {
		double a,b,c;
		std::cin >> a >> b >> c;
		if (a+b>c && a+c>b && b+c>a ) {
			std::cout << "YES" << '\n';
		}
		else{
			std::cout << "NO" << '\n';
		}
	}
}
