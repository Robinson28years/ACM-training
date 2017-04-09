#include <bits/stdc++.h>
using namespace std;

int main(){
	int p;
	std::cin >> p;
	while (p--) {
		string a;
		std::cin >> a;
		int len= a.length();
		int sum=0;
		for(int i=2; i<len; i++){
			if(a[i-2]=='c'&&a[i-1]=='a'&&a[i]=='t')sum++;
			if(a[i-2]=='d'&&a[i-1]=='o'&&a[i]=='g')sum++;
		}
		std::cout << sum << '\n';
	}
	return 0;
}
