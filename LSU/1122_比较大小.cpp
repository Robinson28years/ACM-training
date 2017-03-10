#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<iostream>
#include<algorithm>
using namespace std;

int conversion(string s,int num)
{
	int sum=0;
	int len=s.length();
	for(int i=0; i<len; i++)
	{
		if (s[len-i-1]>='0'&&s[len-i-1]<='9') {
			sum+=(s[len-i-1]-'0')*pow(num,i);
		}
		else{
			sum+=(s[len-i-1]-'A'+10)*pow(num,i);
		}
	}
	return sum;
}

int jmax(string s)
{
	int k;
	char max='0';
	for(int i=0; i<s.length(); i++)
	{
		if (s[i]>max) {
			max=s[i];
		}
	}
	if (max>='0'&&max<='9') {
		k=max-'0';
	}
	else{
		k=max-'A'+10;
	}
	return k+1;
}

int main()
{
	// std::cout << conversion("FF",16) << '\n';
	// std::cout << jmax("12489") << '\n';
	string s,s2;
	while (std::cin >> s >>s2) {
		// std::cout << conversion(s,jmax(s))<< " " << conversion(s2,16) << '\n';
		if (conversion(s,jmax(s))>conversion(s2,16)) {
			std::cout << "A" << '\n';
		}
		else if (conversion(s2,jmax(s2))>conversion(s,16)) {
			std::cout << "B" << '\n';
		}
		else{
			std::cout << "Can't Comparable" << '\n';
		}
	}

}
