#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int k,a,b;
	int j=0;
	std::cin >> k >> a >> b;
	while (1) {
		if (a<k) {
			break;
		}
		if (a-k>=0) {
			j++;
		}
		a=a-k;

	}
	while (1) {
		if (b<k) {
			break;
		}
		if (b-k>=0) {
			j++;
		}
		b=b-k;

	}
	if (j==0) {
		std::cout << "-1" << '\n';
	}
	else{

		std::cout << j << '\n';
	}
}
