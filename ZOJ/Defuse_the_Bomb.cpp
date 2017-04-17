#include <bits/stdc++.h>
using namespace std;
struct button {
	int p;
	int l;
};
int main(){
int p;
std::cin >> p;
while (p--) {
	button s1,s2,s3,s4,s5;
	// button a[10];
	int d,b[10];
	//stage 1
	std::cin >> d>>b[1]>>b[2]>>b[3]>>b[4];
	if(d==1)s1.p=2,s1.l=b[2];
	else if(d==2)s1.p=2,s1.l=b[2];
	else if(d==3)s1.p=3,s1.l=b[3];
	else if(d==4)s1.p=4,s1.l=b[4];
	//stage 2
	std::cin >> d>>b[1]>>b[2]>>b[3]>>b[4];
	if(d==1){
		for(int i=1;i<=4;i++){
			if(b[i]==4)s2.p=i,s2.l=b[i];
		}
	}
	else if(d==2)s2.p=s1.p,s2.l=b[s1.p];
	else if(d==3)s2.p=1,s2.l=b[1];
	else if(d==4)s2.p=s1.p,s2.l=b[s1.p];
	//stage 3
	std::cin >> d>>b[1]>>b[2]>>b[3]>>b[4];
	if(d==1){
		for(int i=1;i<=4;i++){
			if(b[i]==s2.l)s3.p=i,s3.l=b[i];
		}
	}
	else if(d==2){
		for(int i=1;i<=4;i++){
			if(b[i]==s1.l)s3.p=i,s3.l=b[i];
		}
	}
	else if(d==3)s3.p=3,s3.l=b[3];
	else if(d==4){
		for(int i=1;i<=4;i++){
			if(b[i]==4)s3.p=i,s3.l=b[i];
		}
	}
	//stage 4
	std::cin >> d>>b[1]>>b[2]>>b[3]>>b[4];
	if(d==1)s4.p=s1.p,s4.l=b[s1.p];
	else if(d==2)s4.p=1,s4.l=b[1];
	else if(d==3||d==4)s4.p=s2.p,s4.l=b[s2.p];
	// else if(d==4)s4.p=4,s1.l=b[4];
	//stage 5
	std::cin >> d>>b[1]>>b[2]>>b[3]>>b[4];
	if(d==1){
		for(int i=1;i<=4;i++){
			if(b[i]==s1.l)s5.p=i,s5.l=b[i];
		}
	}
	else if(d==2){
		for(int i=1;i<=4;i++){
			if(b[i]==s2.l)s5.p=i,s5.l=b[i];
		}
	}
	else if(d==3){
		for(int i=1;i<=4;i++){
			if(b[i]==s4.l)s5.p=i,s5.l=b[i];
		}
	}
	else if(d==4){
		for(int i=1;i<=4;i++){
			if(b[i]==s3.l)s5.p=i,s5.l=b[i];
		}
	}
	std::cout << s1.p<<" "<<s1.l << '\n';
	std::cout << s2.p<<" "<<s2.l << '\n';
	std::cout << s3.p<<" "<<s3.l << '\n';
	std::cout << s4.p<<" "<<s4.l << '\n';
	std::cout << s5.p<<" "<<s5.l << '\n';
}
	return 0;
}
