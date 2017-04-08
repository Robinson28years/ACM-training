#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<map>
#include<stack>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int j;
std::cin >> j;
while (j--) {
	int c,k;
	string a;
	std::cin >> c >> k;
	k=k+1;
	std::cin >> a;
	int max=0;
	// if(a[0]=='0')max=1;
	int temp=0;
	for(int i=0; i<c; i++){
		if(a[i]=='0')temp++;
		else temp=0;
		if(temp>max)max=temp;
		// std::cout << max << '\n';
	}
	if(max>=k)std::cout << "yes" << '\n';
	else std::cout << "no" << '\n';
}
 return 0;
}
