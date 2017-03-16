#include <bits/stdc++.h>
using namespace std;

int main()
{
	for(int i=0; i<101; i++)
	{
		for(int j=0; j<101; j++)
		{
			for(int k=0; k<101; k++)
			{
				if (i+j+k==100 && k%3==0 && i*5+3*j+k/3==100) {
					std::cout << "gong:"<<i<<" mu:"<<j<< " xiao:"<<k<< '\n';
				}
			}
		}
	}
}
