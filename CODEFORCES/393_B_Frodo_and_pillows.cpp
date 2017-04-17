#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	std::cin >> n>>m>>k;
	int sum=0;
	if (k==1||k==n) {

	}else{
		// if((m-n)>=0){
			sum++;
			m-=n;
		// }
		if((m-1)>=0){
			sum++;
			m-=1;
			if((m-n+2)>=0){
				sum++;
				m=m-n+2;
			}
		}
	}
	return 0;
}
