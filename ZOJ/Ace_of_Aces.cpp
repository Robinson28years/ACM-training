#include <bits/stdc++.h>
using namespace std;

int cmp( const int &a, const int &b ){
    if( a > b )
       return 1;
    else
       return 0;
}

int main(){
int j;
std::cin >> j;
while (j--) {
	int n;
	std::cin >> n;
	int a[10000];
	memset(a,0,sizeof(a));
	int max=-1;
	int flag;
	for(int i=0; i<n; i++){
		int x;
		std::cin >> x;
		a[x]++;
		if(a[x]>max){
			max=a[x];
			flag=x;
		}
	}
	sort(a,a+1000,cmp);
	// std::cout << a[0]<<" "<<a[1] << '\n';
	if(a[0]==a[1]){
		std::cout <<  "Nobody"<< '\n';
	}else{
		std::cout << flag << '\n';
	}
}
	return 0;
}
