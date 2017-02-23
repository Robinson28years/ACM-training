#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;


int main()
{
	string line;
	getline(cin,line);
	stringstream ss(line);
	char x;
	while (ss >> x) {
		std::cout << x << '\n';
	}


}
