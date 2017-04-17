#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	std::cin >> n>>k;
	int y=n;
	int num=0;
	// int q=0;
	int a[100000];
	for(int i=2; i<y; i++){
		while (n%i==0) {
			n/=i;
			a[num]=i;
			num++;
		}
	}
	if (num>=k) {
		for(int i=0; i<k-1; i++){
			std::cout << a[i] << ' ';
		}
		int t=1;
		for(int j=k-1; j<num; j++){
			t*=a[j];
		}
		std::cout << t << '\n';

	}else{
		if (k==1) {
			std::cout << y << '\n';
		}else{

			std::cout << "-1" << '\n';
		}
	}

	return 0;
}
