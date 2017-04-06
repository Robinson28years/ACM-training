#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<stack>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;

struct Pots {
	int a;
	int b;
	Pots(int a=0, int b=0):a(a),b(b){}
};

const int maxn = 150;
int n,m,c;
int d[maxn][maxn];
Pots p[maxn][maxn];

void print_ans(const Pots& u) {
	stack<Pots> s;
	Pots k = u;
	while (k.a!=0 || k.b!=0) {
		s.push(k);
		k=p[k.a][k.b];
	}
	s.push(Pots(0,0));
	int ta=0,tb=0;
	while (!s.empty()) {
		Pots k = s.top(); s.pop();
		if(k.a-ta>0 && k.b-tb==0)std::cout << "FILL(1)" << '\n';
		else if(k.a-ta==0 && k.b-tb>0)std::cout << "FILL(2)" << '\n';
		else if(k.a-ta<0 && k.b-tb==0)std::cout << "DROP(1)" << '\n';
		else if(k.a-ta==0 && k.b-tb<0)std::cout << "DROP(2)" << '\n';
		else if(k.a-ta<0 && k.b-tb>0)std::cout << "POUR(1,2)" << '\n';
		else if(k.a-ta>0 && k.b-tb<0)std::cout << "POUR(2,1)" << '\n';
		ta = k.a; tb = k.b;

		// std::cout << k.a << ' '<<k.b << '\n';
	}
}

void bfs() {
	memset(d,-1,sizeof(d));
	Pots u = Pots(0,0);
	d[u.a][u.b]=0;
	queue<Pots> q;
	q.push(u);
	while (!q.empty()) {
		u = q.front(); q.pop();
		// std::cout << u.a<<' '<<u.b << '\n';
		if (u.a==c || u.b==c) {
			std::cout << d[u.a][u.b] << '\n';
			print_ans(u);
			return;
		}
		Pots k = u;
		if (u.a!=n) {
			k.a = n;
			k.b = u.b;
			if (d[k.a][k.b]<0) {
				d[k.a][k.b] = d[u.a][u.b]+1;
				q.push(k);
				p[k.a][k.b] = u;
			}
		}
		if (u.b!=m) {
			  k.a = u.a;
			  k.b = m;
			  if (d[k.a][k.b]<0) {
  				d[k.a][k.b] = d[u.a][u.b]+1;
  				q.push(k);
				p[k.a][k.b] = u;
  			}
		}
		if (u.a!=0) {
			k.a = 0;
			k.b = u.b;
			if (d[k.a][k.b]<0) {
				d[k.a][k.b] = d[u.a][u.b]+1;
				q.push(k);
				p[k.a][k.b] = u;
			}
		}
		if (u.b!=0) {
			k.b = 0;
			k.a = u.a;
			if (d[k.a][k.b]<0) {
				d[k.a][k.b] = d[u.a][u.b]+1;
				q.push(k);
				p[k.a][k.b] = u;
			}
		}
		if (u.a!=0 && u.b!=m) {
			if (u.a>(m-u.b)) {
				k.a=u.a-(m-u.b);
				k.b=m;
			}
			else{
				k.a = 0;
				k.b = u.b+u.a;
			}
			if (d[k.a][k.b]<0) {
				d[k.a][k.b] = d[u.a][u.b]+1;
				q.push(k);
				p[k.a][k.b] = u;
			}
		}
		if (u.b!=0 && u.a!=n) {
			if (u.b>(n-u.a)) {
				k.b=u.b-(n-u.a);
				k.a=n;
			}
			else{
				k.b = 0;
				k.a = u.a+u.b;
			}
			if (d[k.a][k.b]<0) {
				d[k.a][k.b] = d[u.a][u.b]+1;
				q.push(k);
				p[k.a][k.b] = u;
			}
		}

	}
	std::cout << "impossible" << '\n';
}


int main() {
	while (std::cin >> n>>m>>c) {
		bfs();
	}
	return 0;
}
