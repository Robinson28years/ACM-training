#include <bits/stdc++.h>
using namespace std;

stack<char> conversion(int num, int jz) {
	stack<char> s;
	int t,flag=1;
	char c;
	if(num<0){flag=0;num=-num;}
	do {
		t=num%jz;
		num=num/jz;
		if (t>=10) c='A'+t-10;
		else c=t+'0';
		s.push(c);
	} while(num!=0);
	if(flag==0)s.push('-');
	return s;
}

int main()
{
	int num,jz;
	stack<char> g;
	while (std::cin >> num >> jz) {
		g=conversion(num,jz);
		while (!g.empty()) {
			std::cout << g.top();
			g.pop();
		}
		std::cout << '\n';
	}


}
