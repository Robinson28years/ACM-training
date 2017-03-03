#include <bits/stdc++.h>
using namespace std;

int lmp(int a, int b){
	int m = a;
	int n =b;
	if (m<n) {
		swap(m,n);
	}
	int r;
	do {
		r = m%n;
		m=n;
		n=r;
	} while(r!=0);
	return a*b/m;
}


int main()
{
	int k[100];
	int j=0;
	string line;
	getline(cin,line);
	stringstream ss(line);
	int x;
	while (ss >> x) {
		 k[j++]=x;
	}
	int b;
	for(int i=1; i<j; i++)
	{
		b=lmp(k[i],k[i-1]);
		b=lmp(b,k[i+1]);
	}

}
