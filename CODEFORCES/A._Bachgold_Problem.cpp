#include <bits/stdc++.h>
using namespace std;

int main(){
	int x;
	std::cin >> x;
	if (x%2!=0) {
		std::cout << x/2 << '\n';
		for(int i=0; i<x/2-1; i++){
			std::cout << 2 << ' ';
		}
		std::cout << 3 << '\n';
	}else{
		std::cout << x/2 << '\n';
		for(int i=0; i<x/2-1; i++){
			std::cout << 2 << ' ';
		}
		std::cout << 2 << '\n';
	}
	return 0;
}
