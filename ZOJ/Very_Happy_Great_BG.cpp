#include <bits/stdc++.h>
using namespace std;

int main(){
int q;
std::cin >> q;
while (q--) {
	int n;
	std::cin >> n;
	int a[10000];
	for(int i=0; i<n; i++){
		std::cin >> a[i];
	}
	int sum=0;
	sum+=n;
	for(int i=0; i<n; i++){
		sum+=a[i];
	}
	std::cout << sum << '\n';
}
	return 0;
}
