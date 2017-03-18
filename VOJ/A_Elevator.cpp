#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	std::cin >> n;
	while (n--) {
		int x,y;
		int m;
		int sum=0;
		std::cin >> x>>y;
		for(int i=0; i<x; i++)
		{
			std::cin >> m;
			sum+=m;
		}
		// std::cout << sum << '\n';
		if (sum>y) {
			std::cout << "Warning" << '\n';
		}
		else{
			std::cout << "Safe" << '\n';
		}
	}
}
