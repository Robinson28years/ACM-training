#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	std::cin >> n;
	int k[100009];
	int q[100009];
	int j=0;
	int max=0;
	int max2=0;
	for(int i=0; i<n; i++)
	{
		std::cin >> k[i];
	}
	for(int i=0; i<n; i++)
	{
		max=-3;
		// sort(k,k+n);
		for(int j=0; j<n; j++){
			// std::cout << k[j] << '\n';
			if (k[j]>max) {
				max=k[j];
			}
		}
		// max=k[n-1];
		// std::cout << "zuida"<<max << '\n';
		q[j++]=k[i];
		if (k[i]<max) {
			k[i]=-1;
			std::cout<< '\n';
		}
		else{
			k[i]=-1;
			j--;
			std::cout << q[j] << ' ';
			max=-3;
			// sort(k,k+n);
			for(int j=0; j<n; j++){
				// std::cout << k[j] << '\n';
				if (k[j]>max) {
					max=k[j];
				}
			}
			for(int z=0; z<j; z++){
				if (q[z]>max2) {
					max2=q[z];
				}
			}
			if (max2<max) {

			}
			else{
				sort(q,q+j);
				while (j--) {
					std::cout << q[j] << ' ';
				}
				j=0;

			}
			std::cout << '\n';

		}
	}
}
