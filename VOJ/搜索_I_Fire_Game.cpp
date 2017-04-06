#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<stack>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 10+10;
char g[maxn][maxn];
int d[maxn][maxn];
int n,m,y,c;
int dr[4]={0,1,0,-1};
int dc[4]={1,0,-1,0};

struct Node {
	int r,c;
	Node(int r=0, int c=0):r(r),c(c){}
	bool operator==(Node& p) const{return (r==p.r &&c==p.c);}
};

void read_case() {
	std::cin >> n >> m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			std::cin >> g[i][j];
		}
	}
}

Node walk(const Node& u, int i){
	return Node(u.r+dr[i], u.c+dc[i]);
}

bool inside(const Node& u) {
	return u.r>=0 && u.r<n && u.c>=0 && u.c<m;
}

int bfs(const Node& a, const Node& b) {
	queue<Node> q;
	q.push(a);
	q.push(b);
	memset(d,-1,sizeof(d));
	d[a.r][a.c]=0;
	d[b.r][b.c]=0;
	char t[maxn][maxn];
	memcpy(t,g,sizeof(t));
	t[a.r][a.c]='.';
	t[b.r][b.c]='.';
	while (!q.empty()) {
		Node u = q.front(); q.pop();
		for(int i=0; i<4; i++){
			Node v = walk(u, i);
			if (inside(v) && t[v.r][v.c]=='#' && d[v.r][v.c]<0) {
				t[v.r][v.c]='.';
				d[v.r][v.c]=d[u.r][u.c]+1;
				q.push(v);
			}
		}
	}
	int max=-10;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if (t[i][j]=='#') {
				return -1;
			}
			if (d[i][j]>max) {
				max = d[i][j];
			}
		}
	}
	return max;
}

void slove() {
	read_case();
	// int ans=-2;
	int min=1000;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(g[i][j]=='.')continue;
			for(int k=0; k<n; k++){
				for(int w=0; w<m; w++){
					if(g[k][w]=='.')continue;
					// std::cout << i+1<<","<<j+1<<" | "<<k+1<<","<<w+1 << '\n';
					// std::cout << bfs(Node(i,j),Node(k,w)) << '\n';
					// if (bfs(Node(i,j),Node(k,w))>ans) {
					// 	ans = bfs(Node(i,j),Node(k,w));
					// }
					if (bfs(Node(i,j),Node(k,w))<min && bfs(Node(i,j),Node(k,w))!=-1) {
						min = bfs(Node(i,j),Node(k,w));
					}
				}
			}
		}
	}
	// std::cout << ans << '\n';
	if (min==1000) {
		std::cout <<"Case "<<c<<": "<< -1 << '\n';
	}
	else{
		std::cout <<"Case "<<c<<": "<< min << '\n';
	}
}

int main() {
	std::cin >> y;
	for(c=1; c<=y; c++){
		slove();
	}
	return 0;
}
