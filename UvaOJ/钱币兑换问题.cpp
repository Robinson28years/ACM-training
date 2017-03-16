#include <bits/stdc++.h>
using namespace std;

int main()
{
	int maxn=10;
	int q=0;
	for(int i=0; i<maxn; i++)
	{
		for(int j=0; j<maxn; j++)
		{
			for(int k=0; k<maxn; k++)
			{
				if ((i+j*2+k*5)==maxn) {
					std::cout << "method:" <<++q<< '\n';
					std::cout << "one:"<<i << '\n';
					std::cout << "two:"<<j << '\n';
					std::cout << "five:"<<k << '\n';
					std::cout << '\n' << '\n';
				}
			}
		}
	}
}
