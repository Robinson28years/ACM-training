#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int k[10009]={0};
	int gs[101][101]={0};
	k[2]=1;
	for(int j=3; j<=10000; j++)
	{
		int flag=1;
		// j=sqrt(j);
		// std::cout << j << '\n';
		for(int i=2; i<sqrt(j)+0.5; i++)
		{
			if (j%i==0) {
				flag=0;
				break;
			}
		}
		if (flag==1) {
			k[j]++;
		}
	}
	for(int x=0; x<=100; x++)
	{
		for(int y=0; y<=100; y++)
		{
			if (x<0) {
				x=-x;
			}
			if (y<0) {
				y=-y;
			}
			if (x==0 || y==0) {
				if (x==0 && y!=0) {
					if (k[y]>0 && (y-3)%4==0) {
						gs[x][y]++;
					}
				}
				if (y==0 && x!=0) {
					if (k[x]>0 && (x-3)%4==0) {
						gs[x][y]++;
					}
				}
			}
			else{
				if (k[x*x+y*y]>0) {
					gs[x][y]++;
				}
			}
		}
	}

//打表结束

	int t;
	std::cin >> t;
	while (t--) {
		int x1,x2,y1,y2;
		int num=0,real=0;
		std::cin >> x1>>x2>>y1>>y2;
		for(int x=x1; x<=x2; x++)
		{
			for(int y=y1; y<=y2; y++)
			{
				num++;
				if (gs[abs(x)][abs(y)]>0) {
					// std::cout << x << y << "ok" << '\n';
					real++;
				}

			}
		}
		int r;
		int m =real;
		int n = num;
		do {
			r = m%n;
			m=n;
			n=r;
		} while(r!=0);
		std::cout << real/m<<'/'<<num/m << '\n';
		// std::cout << k[3] << '\n';
	}

}
