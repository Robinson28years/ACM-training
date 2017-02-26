#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int n,a[5]={0};
	std::cin >> n;
	while (n--) {
		memset(a,0,sizeof(a));
		// for(int i=0; i<4; i++)
		// {
		// 	a[i]=0;
		// }
		// std::cout << a[2] << '\n';
		std::cin >> s;
		for(int i=0; i<s.length(); i++)
		{
			if (s[i]<='Z'&&s[i]>='A') {
				a[0]++;
			}
			else if(s[i]<='z'&&s[i]>='a'){
				a[1]++;
			}
			else if(s[i]<='9'&&s[i]>='0'){
				a[2]++;
			}
			else {
				a[3]++;
			}
		}
		int t=0,q=4;
		while (q--) {
			// std::cout << a[q] << '\n';
			if (a[q]>0) {
				t++;
			}
		}
		if (s.length()>=8&&s.length()<=16&&t>=3) {
			std::cout << "YES" << '\n';
		}
		else{
			std::cout << "NO" << '\n';
		}
	}


}
