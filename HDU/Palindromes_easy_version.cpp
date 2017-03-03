#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	std::cin >> n;
	while (n--) {
		string s;
		int flag=1;
		std::cin >> s;
		int length = s.length();
		for(int i=0; i<length/2; i++)
		{
			if (s[i]!=s[length-1-i]) {
				flag=0;
			}
		}
		if (flag) {
			std::cout << "yes" << '\n';
		}
		else{
			std::cout << "no" << '\n';
		}
	}
}
