#include <bits/stdc++.h>

using namespace std;

int main(){
ios::sync_with_stdio(false); cin.tie(0);
int q;
std::cin >> q;
while (q--) {
	string a,b;
	std::cin >> a;
	// b=a;
	int k = a.length();
	// sort(b.begin(),b.end());
	// // std::cout << b << '\n';
	char f='z',s;
	// for(int i=0; i<b.length(); i++){
	// 	if(a[i]!=b[i]){
	// 		f=a[i];
	// 		s=b[i];
	// 		break;
	// 	}
	// }
	int flag;
	for(int i=1; i<k; i++){
		if(a[i]<a[i-1]){
			// std::cout << "ok" << '\n';
			if(a[i]<f){
				f=a[i];
				flag=i;
			}
			// std::cout << flag << '\n';
			// break;
		}
	}
	for(int i=(flag-1); i>=0; i--){
		if (f<a[i]) {
			// std::cout << "ok" << '\n';
			s=a[i];
		}
	}
	for(int i=0; i<k; i++){
		if(a[i]==f)a[i]=s;
		else if(a[i]==s)a[i]=f;
	}
	// std::cout << f<<s << '\n';
	std::cout << a << '\n';
}

 return 0;
}
