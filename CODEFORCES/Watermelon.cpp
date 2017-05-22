#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int k;
	int a[1000];
	memset(a,0,sizeof(a));
	for(int i=2;i<=100;i+=2){
		for(int j=2;j<=100;j+=2){
			a[i+j]=1;
		}
	}
		scanf("%d",&k);
		if(a[k]==1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	return 0;
}