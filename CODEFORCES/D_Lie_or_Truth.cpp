#include <bits/stdc++.h>
using namespace std;
const int maxn = 100005;
int main(){
	int x,l,r;
	std::cin >>x>>l>>r;
	int a[maxn],b[maxn];
	for(int i=1; i<=x; i++){
		std::cin >> a[i];
	}
	for(int i=1; i<=x; i++){
		std::cin >> b[i];
	}
	// int q=0;
	// char c[100005],d[100005];
	// for(int i=l-1; i<r; i++){
	// 	c[q]=a[i];
	// 	d[q]=b[i];
	// 	q++;
	// }
	// sort(c,c+q);
	// sort(d,d+q);
	int flag=1;
	// sort(a+(l-1),a+(r));
	// sort(b+(l-1),b+(r));
	// for(int i=0; i<x; i++){
	// 	std::cout << a[i]<<" "<<b[i] << '\n';
	// 	// if(a[i]!=b[i]){
	// 	// 	flag=0;
	// 	// 	break;
	// 	// }
	// }
	// for(int i=l-1; i<r; i++){
	// 	// std::cout << a[i]<<" "<<b[i] << '\n';
	// 	if(a[i]!=b[i]){
	// 		flag=0;
	// 		break;
	// 	}
	// }
	for(int i=1; i<l; i++){
		if(a[i]!=b[i]){
			flag=0;
			break;
		}
	}
	if(flag){
		for(int i=r+1; i<=x; i++){
			if (a[i]!=b[i]) {
				flag=0;
				break;
			}
		}
	}
	if (flag) {
		std::cout << "TRUTH" << '\n';
	}else{
		std::cout << "LIE" << '\n';
	}
	return 0;
}
