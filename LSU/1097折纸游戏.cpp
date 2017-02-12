#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int m;
	int d[100][100];
	int n;
	std::cin >> n;
	while (n--) {
		std::cin >> m;
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<m; j++)
			{
				std::cin >> d[i][j];
			}
		}
		int flag=1;
			for(int i=0; i<m/2; i++)
			{
				for(int j=0; j<m; j++)
				{
					if (d[j][i]!=d[j][m-i-1]) {
						flag=0;
						break;
					}
				}
			}
			for(int i=0; i<m/2; i++)
			{
				for(int j=0; j<m; j++)
				{
					if (d[i][j]!=d[m-i-1][j]) {
						flag=0;
						// std::cout << i << j << '\n';
						break;
					}
				}
			}
			if (flag==1) {
				std::cout << "yes" << '\n';
			}
			else{
				std::cout << "no" << '\n';
			}

	}



}
