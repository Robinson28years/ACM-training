#include <bits/stdc++.h>
using namespace std;
// int d[1000][1000];

int main(){
int u;
std::cin >> u;
while (u--) {
	int n,m;
	std::cin >> n>>m;
	int a[1000]={0},b[1000]={0};
	for(int i=1; i<=m; i++){
		std::cin >> a[i];
	}
	for(int i=1; i<=m; i++){
		std::cin >> b[i];
	}
	int h=m;
for(int i=1; i<=m; i++){
	for(int j=i+1; j<=m; j++){
		if ((a[i]==a[j]&&b[i]==b[j])||(a[i]==b[j]&&b[i]==a[j])) {
			h--;
			break;
		}
	}
}
std::cout <<setiosflags(ios::fixed)<<setprecision(3)<< h/(1.0*n) << '\n';
}

	return 0;
}
