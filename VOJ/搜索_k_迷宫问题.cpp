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
};

const int maxn=5+5;
int g[maxn][maxn];
int d[maxn][maxn];
Node p[maxn][maxn];
int n=5,m=5;
int dr[4]={0,1,0,-1};
int dc[4]={1,0,-1,0};

void read_case() {
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			std::cin >> g[i][j];
		}
	}
}

bool inside(const Node& u) {
	return u.r>=0 && u.r <n && u.c>=0 && u.c<m;
 }

 Node walk(const Node& u, int dir)
 {
	 return Node(u.r+dr[dir],u.c+dc[dir]);
 }

 void print_ans(const Node& u) {
	 stack<Node> r;
	 Node z=u;
	 while (d[z.r][z.c]!=0) {
	 	r.push(z);
		z=p[z.r][z.c];
	 }
	 r.push(Node(0,0));
	 while (!r.empty()) {
	 	Node h = r.top();
		r.pop();
		std::cout <<"("<<h.r<<", "<<h.c<<")"<< '\n';
	 }
 }

 void slove() {
	 memset(d,-1,sizeof(d));
 	Node u = Node(0,0);
	queue<Node> q;
	d[u.r][u.c]=0;
	q.push(u);
	while (!q.empty()) {
		u = q.front(); q.pop();
		// std::cout << u.r << ' '<<u.c << '\n';
		if (u.r==(n-1) && u.c==(m-1)) {
			// std::cout << "ok" << '\n';
			// std::cout << d[u.r][u.c] << '\n';
			print_ans(u);
			return;
		}
		for(int i=0; i<4; i++)
		{
			Node v = walk(u,i);
			if (inside(v) && d[v.r][v.c]<0 && g[v.r][v.c]!=1) {
				q.push(v);
				d[v.r][v.c] = d[u.r][u.c]+1;
				p[v.r][v.c] = u;
			}
		}
	}
 }


int main()
{
	read_case();
	slove();
}
