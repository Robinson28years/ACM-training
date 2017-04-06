#include <bits/stdc++.h>
using namespace std;

int main()
{
	std::map<string, int> m;
	m["Tetrahedron"]=4;
	m["Cube"]=6;
	m["Octahedron"]=8;
	m["Dodecahedron"]=12;
	m["Icosahedron"]=20;
	int n;
	std::cin >> n;
	int sum=0;
	while (n--) {
		string s;
		std::cin >> s;
		sum+=m[s];
	}
	std::cout << sum << '\n';
}
