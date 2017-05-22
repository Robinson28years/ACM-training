#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	int a[1000];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		if(a[i]>=a[k]&&a[i]>0)sum++;
	}
	cout<<sum<<endl;
	return 0;
}