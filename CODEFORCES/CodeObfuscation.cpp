#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string x;
	std::cin >> x;
	int y=x.length();
	// std::cout << x.length() << '\n';
	int qqq=0;

	for(int i=1; i<y; i++){
		// std::cout << x[1]-x[0] << '\n';
		int flag=0;
		for(int j=0; j<i; j++){
			if (x[i]-x[j]<=1 && x[i]-x[j]>=-1) {
				flag=1;
				// std::cout << x[i] << '\n';
			}

		}
		if (flag==0) {
			qqq=1;
			break;
		}
	}
	if (x[0]!='a') {
		qqq=1;
	}
	if (qqq==0) {
		std::cout << "YES" << '\n';
	}
	else{
		std::cout << "NO" << '\n';
	}
}
