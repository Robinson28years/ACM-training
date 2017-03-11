#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	while(cin>>s){
		set<char> ch;
		for (int i = 0; i < s.length(); ++i)
		{
		ch.insert(s[i]);
		}
		if (ch.size()>=26)
		{
			cout<<"impossible"<<endl;
		}
		else{
			cout<<26-ch.size()<<endl;
		}
	}

}
