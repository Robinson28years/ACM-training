#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct Grade {
	int h;
	int c;
};
Grade a[600];
Grade b[600];
int n;
ll maxn;

void dfs(int h, int c, int j) {
	if(j==n){
		ll k = (h*h-h*c-c*c);
		std::cout << k << '\n';
		if(k>maxn){
			maxn = k;
			return ;
		}
		else return ;
	}
	dfs(a[j].h+h, a[j].c+c, j+1);
	dfs(h, c, j+1);
}

int main(){
	int q;
	scanf("%d",&q );
	while (q--) {
		maxn=0;
		scanf("%d",&n );
		for(int i=0; i<n; i++){
			scanf("%d %d",&a[i].h,&a[i].c);
		}
		dfs(0,0,0);
		std::cout << maxn << '\n';
	}


	return 0;
}
