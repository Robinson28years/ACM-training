#include <bits/stdc++.h>
using namespace std;
int a[1000009];

int main(){
	int n;
	std::cin >> n;
	int max=-1;
	for(int i=0; i<n; i++){
		std::cin >> a[i];
		if(a[i]>max)max=a[i];
	}
	int  sum=0;
	for(int i=0; i<n; i++){
		sum+=max-a[i];
	}
	std::cout << sum << '\n';
	return 0;
}
