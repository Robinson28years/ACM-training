#include <bits/stdc++.h>
using namespace std;

int main(){
	std::map<char, int> m;
	int r,c;
	string a;
	std::cin >> r>>c>>a;
	r=r-1;
	c=c-1;
	int sum=0;
	int rm=0,cm=0;
	int mrm=0,mcm=0;
	int k= a.length();
	for(int i=0; i<k; i++){
		if(a[i]=='<'){
			cm--;
			if(abs(mcm)<abs(cm))mcm=cm;
			if(abs(mcm)>c){
				sum++;
				cm++;
				mcm=cm;
			}
		}
		if(a[i]=='>'){
			cm++;
			if(abs(mcm)<abs(cm))mcm=cm;
			if(abs(mcm)>c){
				sum++;
				cm--;
				mcm=cm;
			}
		}
		if(a[i]=='^'){
			rm--;
			if(abs(mrm)<abs(rm))mrm=rm;
			if(abs(mrm)>r){
				sum++;
				rm++;
				mcm=cm;
			}
		}
		if(a[i]=='v'){
			rm++;
			if(abs(mrm)<abs(rm))mrm=rm;
			if(abs(mrm)>r){
				sum++;
				rm--;
				mcm=cm;
			}
		}
	}

	std::cout << sum << '\n';
	return 0;
}
