#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	char p[10];
	std::cin >> n;
	for(int i; i<n; i++)
	{
		std::cin >> p[i];
	}
	sort(p,p+n);
	do {
		for(int i=0; i<n; i++)
		{
			std::cout << p[i];
		}
		std::cout << '\n';
	} while(next_permutation(p,p+n));
}
