#include <bits/stdc++.h>
using namespace std;

typedef set<int> Set;
std::map<Set, int> Cache;

int main()
{
	
	std::map<string, int> cns;
	cns["qq"]=4;
	cns["uu"]=5;
	std::cout << cns["qq"] << '\n';
	std::cout << cns.count("qq") << '\n';

}
