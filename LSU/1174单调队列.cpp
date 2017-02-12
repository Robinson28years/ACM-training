#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int x;
	int d[200],z[200];
	std::cin >> x;
	for(int i=0; i<x; i++)
	{
		std::cin >> d[i];
		if (d[i]<d[0]) {
			d[i]=0;
		}
		else{
			for(int j=1; j<i; j++)
			{
				if (d[j]>d[i]) {
					d[j]=0;
				}
			}
		}
	}
	int k=0;
	for(int i=0; i<x; i++)
	{

		if (d[i]!=0) {
			z[k++]=d[i];
		}
	}
	int q;
	for(q=0; q<k-1; q++ )
	{
		std::cout << z[q] << " ";
	}
	std::cout << z[q] << '\n';
}
