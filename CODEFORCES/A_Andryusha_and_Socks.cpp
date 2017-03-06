#include <bits/stdc++.h>
using namespace std;

int main()
{
	std::map<int, int> map;
	int n;
	std::cin >> n;
	int j;
	n=n*2;
	int sum=0;
	int max=-2;
	while (n--) {
		std::cin >> j;
		// std::cout << map.count(j) << '\n';
		if(map.count(j)<1){
			map[j]=1;
			sum++;
			if (sum>max) {
				max=sum;
			}
		}
		else{
			sum--;
		}
	}
	std::cout << max << '\n';
}
