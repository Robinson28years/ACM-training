#include <bits/stdc++.h>
using namespace std;

std::map<string, int> map2;

int main()
{
	string line;
	int k;
	int j;
	scanf("%d\n",&j);
	while (j--) {
		// std::cout << j << '\n';
		getline(cin,line);
		stringstream ss(line);
		stringstream ss2;
		string buf[10];
		int i=0;
		while (ss >> buf[i++]) {
			// std::cout << buf[i-1] << '\n';
		}
		if (map2.count(buf[0])<1) {
			map2[buf[0]]=0;
		}
		if (buf[1]=="gets") {
			ss2<<buf[2];
			ss2>>k;
			map2[buf[0]]+=k;
		}
		if (buf[1]=="eats") {
			ss2<<buf[2];
			ss2>>k;
			map2[buf[0]]-=k;
		}
		if (buf[1]=="gives") {
			if (map2.count(buf[2])<1) {
				map2[buf[2]]=0;
			}
			ss2<<buf[3];
			ss2>>k;
			map2[buf[0]]-=k;
			map2[buf[2]]+=k;
		}
		// std::cout << map2["A"] << '\n';
	}
	// std::cout << map2["A"] << '\n';
	int p;
	std::cin >> p;
	while (p--) {
		string y;
		std::cin >> y;
		std::cout << map2[y] << '\n';
	}

}
