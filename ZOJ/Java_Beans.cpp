#include <bits/stdc++.h>
using namespace std;
int cmp( const int &a, const int &b ){
    if( a > b )
       return 1;
    else
       return 0;
}
int main(){
	int k;
	std::cin >> k;
	while (k--) {
		int n,m;
		int a[10000];
		std::cin >> n>>m;
		for(int i=0; i<n; i++){
			std::cin >> a[i];
		}
		int max=-1;
		for(int i=0; i<n; i++){
			int sum=0;
			for(int j=i; j<i+m; j++){
				if(j>=n)sum+=a[j-n];
				else sum+=a[j];
				if(sum>max)max=sum;
			}
		}
		std::cout << max << '\n';

		// sort(a,a+n,cmp);
		// int sum=0;
		// for(int i=0; i<m; i++){
		// 	sum+=a[i];
		// }
		// std::cout << sum << '\n';
	}
	return 0;
}
