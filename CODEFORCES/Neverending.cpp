#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int x;
	string y;
	std::cin >> x;
	for(int i=0; i<=x; i++){
		std::cout << y << '\n';
	}
	if (x%2==0) {
		std::cout << "home" << '\n';
	}
	else{
		std::cout << "contest" << '\n';
	}
}
