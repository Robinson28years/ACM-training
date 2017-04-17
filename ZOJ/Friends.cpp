#include <bits/stdc++.h>
using namespace std;

int main(){
int p;
std::cin >> p;
while (p--) {
	int n,m,z;
	int a[200][200];
	std::cin >> n>>m>>z;
	memset(a,0,sizeof(a));
	for(int i=0; i<m; i++){
		int x,y;
		std::cin >> x>>y;
		a[x][y]=1;
		a[y][x]=1;
	}
	int r;
	int xx=0;
	int ss=1;
	while(ss) {
		ss=0;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				r=xx;
				int q=0;
				if(a[i][j]==0)
				{
					for(int k=0; k<n; k++){
						if(k!=i&&k!=j){
							if(a[i][k]==1&&a[j][k]==1){
								// std::cout << i<<" "<<j<<" "<<k << '\n';
								q++;
							}
						}
					}
					if(q>=z){
						a[i][j]=1;
						a[j][i]=1;
						xx++;
						ss=1;
					}
				}

			}
		}
	}
std::cout << xx << '\n';
}
	return 0;
}
