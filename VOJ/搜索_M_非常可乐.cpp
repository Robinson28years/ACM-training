#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;

struct KL {
	int k;
	int b1;
	int b2;
	KL(int k=0, int b1=0, int b2=0):k(k),b1(b1),b2(b2){}
};
const int maxn = 100+50;
int d[101][51][51];
int p[101][51][51];

int main()
{
	while (1) {
		queue<KL> q;
		memset(d,-1,sizeof(d));
		memset(p,-1,sizeof(p));
		int s,n,m;
		std::cin >> s>>n>>m;
		if (s==0) {
			break;
		}
		KL u=KL(s,0,0);
		q.push(u);
		p[u.k][u.b1][u.b2]=0;
		d[u.k][u.b1][u.b2]=0;
		int flag=1,flag2=0;
		if(s%2!=0)flag2=1;
		while (!q.empty()) {
			if(flag2)break;
			u=q.front(); q.pop();
			std::cout << u.k<<' '<<u.b1<<' '<<u.b2 << '\n';
			KL k = u;
			if ((u.k==u.k/2 && u.b1==u.k/2) || (u.b1==u.k/2 && u.b2==u.k/2) || (u.k==u.k/2 && u.b2==u.k/2)) {
				std::cout << p[u.k][u.b1][u.b2] << '\n';
				flag=0;
				break;
			}
			if (u.k>0 && u.b1!=n) {
				// KL k = u;
				if (u.k<=(n-u.b1)) {
					k.k=0;
					k.b1+=u.k;
				}
				else{
					k.k-=(n-u.b1);
					k.b1=n;
				}
				k.b2=u.b2;
				if (d[k.k][k.b1][k.b2]<0) {
					q.push(k);
					p[k.k][k.b1][k.b2]=p[u.k][u.b1][u.b2]+1;
				}
			}
			if (u.k>0 && u.b2!=m) {
				// KL k = u;
				if (u.k<=(n-u.b2)) {
					k.k=0;
					k.b2+=u.k;
				}
				else{
					k.k-=(n-u.b2);
					k.b2=m;
				}
				k.b1=u.b1;
				if (d[k.k][k.b1][k.b2]<0) {
					q.push(k);
					p[k.k][k.b1][k.b2]=p[u.k][u.b1][u.b2]+1;
				}
			}
			if (u.b1>0) {
				// KL k = u;
				k.k+=u.b1;
				k.b1=0;
				k.b2=u.b2;
				if (d[k.k][k.b1][k.b2]<0) {
					q.push(k);
					p[k.k][k.b1][k.b2]=p[u.k][u.b1][u.b2]+1;
				}
			}
			if (u.b2>0) {
				// KL k = u;
				k.k+=u.b2;
				k.b2=0;
				k.b1=u.b1;
				if (d[k.k][k.b1][k.b2]<0) {
					q.push(k);
					p[k.k][k.b1][k.b2]=p[u.k][u.b1][u.b2]+1;
				}
			}
			if (u.b1>0 && u.b2!=m) {
				// KL k = u;
				if (u.b1<(m-u.b2)) {
					k.b1=0;
					k.b2+=u.b1;
				}
				else{
					k.b1-=(m-u.b2);
					k.b2=m;
				}
				k.k=u.k;
				if (d[k.k][k.b1][k.b2]<0) {
					q.push(k);
					p[k.k][k.b1][k.b2]=p[u.k][u.b1][u.b2]+1;
				}
			}
			if (u.b2>0 && u.b1!=n) {
				// KL k = u;
				if (u.b2<(n-u.b1)) {
					k.b2=0;
					k.b1+=u.b2;
				}
				else{
					k.b2-=(n-u.b1);
					k.b1=n;
				}
				k.k=u.k;
				if (d[k.k][k.b1][k.b2]<0) {
					q.push(k);
					p[k.k][k.b1][k.b2]=p[u.k][u.b1][u.b2]+1;
				}
			}
		}
		if (flag) {
			std::cout << "NO" << '\n';
		}
	}

}
