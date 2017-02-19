#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string k[12]={"Rabbit","Tiger","Ox","Rat","Pig","Dog","Rooster","Monkey","Ram","Horse","Snake","Dragon"};
	int n;
	std::cin >> n;
	while (n--) {
		int j;
		std::cin >> j;
		int y=(j-1)%12;
		std::cout << k[y] << '\n';
	}

}
