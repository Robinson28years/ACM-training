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

	while (std::cin >> n) {
		int flag=1;
		for(int i=0; i<n; i++)
		{
			int x;
			std::cin >> x;
			if ((sqrt(x)-(int)sqrt(x))>0) {
				flag=0;
				// break;
			}
		}
		if (flag) {
			std::cout << "Yes" << '\n';
		}
		else{
			std::cout << "No" << '\n';
		}
	}

}
