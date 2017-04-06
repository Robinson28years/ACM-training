#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<stack>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;

struct Node {
	int r,c;
	Node(int r=0, int c=0):r(r),c(c){}
	bool operator==(Node& p) const{return (r==p.r &&c==p.c);}
};
int dr[4]={0,1,0,-1};
int dc[4]={1,0,-1,0};
const int maxn = 10000;
int d[maxn][maxn];
char g[maxn][maxn];
char t[maxn][maxn];
int n,m, nf;
Node j,f;
queue<Node> fr;

void read_case() {
	nf=0;
	memset(g,'.',sizeof(g));
	std::cin >> n>>m;
	for(int i=1; i<=n; i++){
		for(int k=1; k<=m; k++){
			std::cin >> g[i][k];
			if(g[i][k]=='J')j=Node(i,k);
			if(g[i][k]=='F'){
				f=Node(i,k);
				fr.push(f);
				nf++;
			}
		}
	}
}

Node walk(const Node& u, int i) {
	return Node(u.r+dr[i], u.c+dc[i]);
}

bool inside(const Node& u) {
	return u.r>=1 && u.r<=n && u.c>=1 && u.c<=m;
}

void bfs() {
	Node u = j;
	queue<Node> q;
	q.push(u);
	memset(d,-1,sizeof(d));
	d[u.r][u.c]=0;
	memcpy(t,g,sizeof(t));
	// queue<Node> fr;
	// Node r = f;
	Node r = f;
	// fr.push(r);
	// t[r.r][r.c]='#';
	while (!q.empty()) {
		u = q.front(); q.pop();
		// r = fr.front(); fr.pop();
		// std::cout << u.r+1<<' '<<u.c+1<< '\n';
		if(!inside(u)){
			std::cout << d[u.r][u.c] << '\n';
			return ;
		}
		for(int j=0; j<nf; j++){
			r = fr.front(); fr.pop();
			t[r.r][r.c]='#';
			for(int i=0; i<4; i++){
				Node h = walk(r, i);
				if (inside(h)) {
					t[h.r][h.c]='#';
					fr.push(h);
				}
			}
		}

		for(int i=0; i<4; i++){
			Node v=walk(u, i);
			if (t[v.r][v.c]!='#') {
				q.push(v);
				// if(!inside(v))break;
				d[v.r][v.c]=d[u.r][u.c]+1;
			}
		}
	}
	std::cout << "IMPOSSIBLE" << '\n';
}

int main() {
	int e;
	std::cin >> e;
	while (e--) {
		read_case();
		bfs();
	}
	return 0;
}
