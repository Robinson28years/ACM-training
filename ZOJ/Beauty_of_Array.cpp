#include <bits/stdc++.h>
using namespace std;

int main(){
int q;
std::cin >> q;
while (q--) {
	int n;
	std::cin >> n;
	int a[100009];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			std::map<int, int> m;
			for(int k=i; k<=j; k++){
				if (m.count(a[k])==0) {
					sum+=a[k];
					m[a[k]]=1;
				}
			}
		}
	}
	std::cout << sum << '\n';
}
	return 0;
}
