#include <bits/stdc++.h>
using namespace std;

int cmp( const int &a, const int &b ){
    if( a > b )
       return 1;
    else
       return 0;
}
int n;
int a[100009];
int maxn=-100000;
void dfs(int sum, int k) {
	if(a[k]<0&&maxn!=-100000)return;
	if(sum>maxn&&sum%2!=0)maxn=sum;
	if(sum<maxn)return;
	if (k==n) {
		return;
	}
	dfs(sum+a[k],k+1);
	dfs(sum,k+1);
}

int main(){
	std::cin >> n;
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n,cmp);
	int flag;
	int fiodd=-100000;
	int sum=0;
	if (a[0]>0) {
		for(int i=0; i<n; i++){
			if(a[i]>=0){
				sum+=a[i];
				if(a[i]%2!=0)fiodd=a[i];
			}else{
				int sum1=-1000000;
				if(sum%2==0&&fiodd!=-100000)sum1=sum-fiodd;
				if(sum%2==0){
					for(int j=i; j<n; j++){
						if (a[j]%2!=0) {
							sum+=a[j];
							flag=1;
							break;
						}
						//
						// if(sum%2!=1){
						// 	break;
						// }
					}
				}
				if (flag) {
					if(sum<sum1)sum=sum1;
				}else{
					sum=sum1;
				}
				break;
			}
		}
		if(sum%2==0){
			sum-=fiodd;
		}

	}else{
		for(int i=0; i<n; i++){
			if (a[i]%2!=0) {
				sum=a[i];
				break;
			}
		}
	}
	std::cout << sum << '\n';

	return 0;
}
