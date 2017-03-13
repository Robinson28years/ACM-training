#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;

struct Node {
	int l,r,c;
	Node(int l=0 ,int r=0, int c=0):l(l),r(r),c(c){}
	bool operator==(Node& p) const{
		return (
			l==p.l &&
			r==p.r &&
			c==p.c
		);
	}
};
const int dl[]={0, 0, 0, 0, 1, -1};
const int dr[]={-1, 0, 1, 0, 0, 0};
const int dc[]={0, 1, 0, -1, 0, 0};
const int maxn = 30+5;
int d[maxn][maxn][maxn];
char g[maxn][maxn][maxn];
Node s,e;
Node p[maxn][maxn][maxn];
int l,r,c;

void read_case() {
	std::cin >> l >> r >> c;
	for(int i=1; i<=l; i++)
	{
		for(int j=1; j<=r; j++)
		{
			for(int k=1; k<=c; k++)
			{
				std::cin >> g[i][j][k];
				if (g[i][j][k]=='S') {
					s=Node(i,j,k);
				}
				if (g[i][j][k]=='E') {
					e=Node(i,j,k);
				}
			}
		}
	}
}

Node walk(const Node& u, int d){
	return Node(u.l+dl[d], u.r+dr[d], u.c+dc[d]);
}

bool inside(const Node& u){
	return (
		u.l>0 && u.l<=l &&
		u.r>0 && u.r<=r &&
		u.c>0 && u.c<=c
	);
}

void solve() {
	queue<Node> q;
	Node u = s;
	memset(d, -1, sizeof(d));
	d[s.l][s.r][s.c]=0;
	q.push(u);
	while (!q.empty()) {
		Node u = q.front(); q.pop();
		if (u==e) {
		std::cout << "Escaped in "<<d[u.l][u.r][u.c]<< " minute(s)." << '\n';
			return;
		}
		for(int i=0; i<6; i++)
		{
			Node v = walk(u,i);
			if (inside(v) && d[v.l][v.r][v.c]<0 && g[v.l][v.r][v.c]!='#') {
				d[v.l][v.r][v.c] = d[u.l][u.r][u.c] + 1;
				p[v.l][v.r][v.c]=u;

				q.push(v);
			}

		}

	}
	std::cout << "Trapped!" << '\n';

}



int main()
{
	while (1) {
		read_case();
		if (l==0) {
			break;
		}
		solve();
	}
}
