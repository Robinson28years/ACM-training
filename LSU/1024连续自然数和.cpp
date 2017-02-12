#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int x,n;
	while (std::cin >> n) {
		for(int i=n/2;i>1;i--){
			x=n/i;
			if (n%i==0 && i/2<x && i%2!=0) {
				std::cout << x-i/2<< " " << x+i/2 << '\n';
			}
			if (n%i!=0 && (2*x+1)*i/2==n && x-i/2+1>0 && i%2==0) {
				std::cout << x-i/2+1<< " " << x+i/2 << '\n';
			}
		}
		std::cout  << '\n';
	}

}
