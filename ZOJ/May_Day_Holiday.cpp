#include <bits/stdc++.h>
using namespace std;

int main(){
	int t[100];
	t[1]=9;
	t[2]=6;
	t[3]=5;
	t[4]=5;
	t[5]=5;
	t[6]=5;
	t[0]=6;
int y;
std::cin >> y;
while (y--) {
	int x;
	std::cin >> x;
	int day=0;
	int q,p;
	if(x>=2015){
		for(int i=2016; i<=x; i++){
			if(i%4==0&&(i%100!=0)||i%400==0){
				day+=366;
			}else{
				day+=365;
			}
		}
		 q=day%7;
		 p=(q+5)%7;
	}else{
		for(int i=2014; i>=x; i--){
			// std::cout << i << '\n';
			int j=i+1;
			if(j%4==0&&(j%100!=0)||j%400==0){
				day+=366;
			}else{
				day+=365;
			}
		}
		 q=day%7;
		 if(q<=5)p=5-q;
		 if(q>5)p=7-(q-5);
		//  p=7-(q-5)
		//  p=(5+q)%7;
	}

	// std::cout << p << '\n';
	std::cout << t[p] << '\n';
}

	return 0;
}
