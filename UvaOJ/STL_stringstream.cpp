#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	s="shasdf asdfasd";
	stringstream ss(s);
	string buf;
	while (ss >> buf) {
		std::cout << buf << '\n';
	}
	// std::cout << s << '\n';
}
