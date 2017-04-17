#include <bits/stdc++.h>
using namespace std;

int main(){
int k;
std::cin >> k;
while (k--) {
	int a,b,c;
	std::cin >> a>>b>>c;
	int q=0;
	int sum=0;
	for(int i=0; i<c; i++){
		sum+=50*(2*q+1);
		q++;
	}
	for(int i=0; i<b; i++){
		sum+=100*(2*q+1);
		q++;
	}
	for(int i=0; i<a; i++){
		sum+=300*(2*q+1);
		q++;
	}
	int q2=0;
	int sum2=0;
	for(int i=0; i<a; i++){
		sum2+=300*(2*q2+1);
		q2++;
	}
	for(int i=0; i<b; i++){
		sum2+=100*(2*q2+1);
		q2++;
	}
	for(int i=0; i<c; i++){
		sum2+=50*(2*q2+1);
		q2++;
	}
	std::cout << sum2<<" " <<sum<< '\n';
}
	return 0;
}
