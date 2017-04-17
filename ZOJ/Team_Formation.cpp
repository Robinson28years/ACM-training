#include <bits/stdc++.h>
using namespace std;



int main(){
int q;
std::cin >> q;
while (q--) {
	int sum=0;
	int n;
	std::cin >> n;
	int d[100009];
	for(int i=0; i<n; i++){
		scanf("%d",&d[i]);
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if((d[i]^d[j])>max(d[i],d[j])){
				sum++;
			}
		}
	}
	std::cout << sum << '\n';
}
	return 0;
}
