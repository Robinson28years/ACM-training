#include <bits/stdc++.h>
using namespace std;

int lmp(int a, int b){
	int m = a;
	int n =b;
	if (m<n) {
		swap(m,n);
	}
	int r;
	do {
		r = m%n;
		m=n;
		n=r;
	} while(r!=0);
	return a/m*b;
}


int main()
{
	int x,y;
	while (std::cin >> x) {
		int b=1;
		for(int i=0; i<x; i++)
		{
			std::cin >> y;
			b=lmp(b,y);
		}
		std::cout << b << '\n';
	}

}
