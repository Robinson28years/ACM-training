#include <bits/stdc++.h>
using namespace std;

int main(){
	int x;
	std::cin >> x;
	while (x--) {
		int sum=0;
		int y;
		// std::cin >> y;
		scanf("%d", &y);
		std::map<long long, int> m;
		while (y--) {
			long long k;
			scanf("%I64d",&k );
			if (m.count(k)<1) {
				m[k]=1;
			}
			else{
				sum++;
				m.clear();
				m[k]=1;
			}
		}
		std::cout << sum+1 << '\n';
	}
	return 0;
}
