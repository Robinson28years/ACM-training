#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, buf;
	set<string> dict;
	while (std::cin >> s) {
		for(int i=0; i<s.length(); i++)
		{
			if(isalpha(s[i]))
			{
				s[i]=tolower(s[i]);
			}
			else
			{
				s[i]=' ';
			}
		}
		stringstream ss(s);
		while (ss>>buf) {
			dict.insert(buf);
		}

	}
	for(set<string>::iterator it = dict.begin(); it!=dict.end(); it++)
	{
		std::cout << *it << '\n';
	}
}
