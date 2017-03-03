#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	while (std::cin >> a>> b) {
		if ((a+b)%86==0) {
			std::cout << "yes" << '\n';
		}
		else{
			std::cout << "no" << '\n';
		}
	}
}
