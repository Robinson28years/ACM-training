#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	std::cin >> n;
	if(n%2==0){
		for(int i=0; i<n/2; i++){
			std::cout << 1;
		}
	}else{
		std::cout << 7;
		for(int i=1; i<n/2; i++){
			std::cout << 1;
		}
	}
	std::cout << '\n';

	return 0;
}
