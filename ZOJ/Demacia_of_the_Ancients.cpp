#include <bits/stdc++.h>
using namespace std;

int main(){
int j;
std::cin >> j;
while (j--) {
	int n;
	std::cin >> n;
	int sum=0;
	for(int i=0; i<n; i++){
		int x;
		std::cin >> x;
		if (x>6000) {
			sum++;
		}

	}
	std::cout << sum << '\n';
}
	return 0;
}
