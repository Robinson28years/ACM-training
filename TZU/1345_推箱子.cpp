#include <bits/stdc++.h>
using namespace std;

struct Node {
	int r,c;
	Node(int r=0, int c=0):r(r),c(c){}
};
int m, n, r1, c1, r2, c2,sum=0;

const int maxn =25;
int d[maxn][maxn];
int t[maxn][maxn];
Node p[maxn][maxn];

const int dr[]={-1, 0, 1, 0};
const int dc[]={0, 1, 0, -1};

Node walk(const Node& u, int dir)
{
	// std::cout << u.r << u.c << '\n';
	return Node(u.r + dr[dir], u.c + dc[dir]);
}

Node walk2(const Node& u, int dir)
{
	return Node(u.r + dr[(dir+2)%4], u.c + dc[(dir+2)%4]);
}

bool inside(int r, int c)
{
	return r>=0 && r<m && c>=0 && c<n;
}

void read_case(){
	std::cin >> m >> n;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			std::cin >> t[i][j];
			if (t[i][j]==2) {
				r1=i;
				c1=j;
			}
			else if(t[i][j]==3)
			{
				r2=i; c2=j;
			}
		}
	}
}

void print_ans(Node u) {
	std::vector<Node> nodes;
	while (1) {
		nodes.push_back(u);
		if (d[u.r][u.c]==0) {
			break;
		}
		u = p[u.r][u.c];

	}
	// nodes.push_back(Node(r1,c1));
	// int cnt = 0;
	for(int i=nodes.size()-1; i>=0; i--)
	{
		std::cout << nodes[i].r+1 << " " << nodes[i].c+1 << '\n';
	}
}

void solve() {
	queue<Node> q;
	memset(d, -1, sizeof(d));
	Node u(r1, c1);
	d[u.r][u.c]=0;
	q.push(u);
	while (!q.empty()) {
		Node u = q.front();q.pop();
		if (u.r==r2 && u.c==c2) {
			print_ans(u);
			return;
		}
		for(int i=0; i<4; i++)
		{
			// std::cout << "ok" << '\n';
			Node v = walk(u,i);
			Node v2 = walk2(u,i);
			if (inside(v.r, v.c) && d[v.r][v.c]<0 && t[v2.r][v2.c]!=1) {
				d[v.r][v.c]=d[u.r][u.c]+1;
				p[v.r][v.c] = u;
				q.push(v);
			}
		}
	}
}


int main()
{
	read_case();
	solve();
	return 0;
}
