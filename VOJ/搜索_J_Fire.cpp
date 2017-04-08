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
const int maxn = 1000+100;
int d[maxn][maxn];
char g[maxn][maxn];
char t[maxn][maxn];
int n,m, nf;
Node j,f;
// queue<Node> fr;
queue<Node> q;
void read_case() {
	nf=0;
	memset(g,'.',sizeof(g));
	std::cin >> n>>m;
	for(int i=0; i<n; i++){
		scanf("%s",g[i] );
		for(int k=0; k<m; k++){
			// std::cout << i<<k;
			// std::cout << g[i][k] << '\n';
			// std::cin >> g[i][k];
			if(g[i][k]=='J')j=Node(i,k);
			if(g[i][k]=='F'){
				f=Node(i,k);
				q.push(f);
			}
		}
	}
	// for(int i=0; i<n; i++){
	// 	for(int k=0; k<m; k++){
	// 		std::cout << g[i][k];
	// 	}
	// 	std::cout  << '\n';
	// }
}

Node walk(const Node& u, int i) {
	return Node(u.r+dr[i], u.c+dc[i]);
}

bool inside(const Node& u) {
	return u.r>=0 && u.r<n && u.c>=0 && u.c<m;
}

void bfs() {
	Node u = j;
	q.push(u);
	memset(d,-1,sizeof(d));
	d[u.r][u.c]=0;
	memcpy(t,g,sizeof(t));
	while (!q.empty()) {
		u = q.front(); q.pop();

		for(int i=0; i<4; i++){
			Node v=walk(u, i);
			if (inside(v)) {
				if (t[v.r][v.c]=='.') {
					q.push(v);
					// if(!inside(v))break;
					d[v.r][v.c]=d[u.r][u.c]+1;
					t[v.r][v.c]=t[u.r][u.c];
				}
			}else if(t[u.r][u.c]=='J'){
				std::cout << d[u.r][u.c]+1 << '\n';
				return ;
			}
		}
	}
	std::cout << "IMPOSSIBLE" << '\n';
}

int main() {
	int e;
	std::cin >> e;
	while (e--) {
		while(!q.empty())
            q.pop();
		read_case();
		bfs();
	}
	return 0;
}
