#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;
struct Node {
	int r,c;
	int hr,hc;
	Node(int r=0, int c=0, int hr=0, int hc=0):r(r),c(c),hr(hr),hc(hc){}
};
int m, n, r1, c1, r2, c2, r3, c3,sum=0,flag2;

const int maxn =25;
int d[maxn][maxn];
int t[maxn][maxn];
Node p[maxn][maxn];

const int dr[]={-1, 0, 1, 0};
const int dc[]={0, 1, 0, -1};

bool inside(int r, int c)
{
	return r>=0 && r<m && c>=0 && c<n;
}

Node walk(const Node& u, int dir)
{
	// std::cout << u.r << u.c << '\n';
	return Node(u.r + dr[dir], u.c + dc[dir], u.hr, u.hc);
}

Node walk2(const Node& u, int dir)
{
	return Node(u.r + dr[(dir+2)%4], u.c + dc[(dir+2)%4]);
}

void dfs(const Node& u,const Node& v)
{
	if (flag2==1) {
		return;
	}
	Node h = u;
	if (h.hr==v.r&&h.hc==v.c && t[h.hr][h.hc]!=1 && t[h.hr][h.hr]!=2) {
		flag2=1;
		return ;
	}
	else if (inside(h.hr, h.hc)&& t[h.hr][h.hc]!=8 && t[h.hr][h.hc]!=1 && (h.hc!=u.c || h.hr!=u.r) ) {
		int u = t[h.hr][h.hc];
		t[h.hr][h.hc]=8;
		dfs(Node(h.r,h.c,h.hr,h.hc+1), v);
		dfs(Node(h.r,h.c,h.hr,h.hc-1), v);
		dfs(Node(h.r,h.c,h.hr+1,h.hc), v);
		dfs(Node(h.r,h.c,h.hr-1,h.hc), v);
		t[h.hr][h.hc]=u;
		return ;
	}
	else {
		return ;
	}
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
			else if(t[i][j]==4)
			{
				r3=i; c3=j;
			}
		}
	}
}

void print_ans(Node u) {
	std::vector<Node> nodes;
	while (1) {
		nodes.push_back(u);
		if (d[u.r][u.c]==1) {
			break;
		}
		u = p[u.r][u.c];

	}
	// nodes.push_back(Node(r1,c1));
	int cnt = 0;
std::cout << nodes.size() << '\n';
		// for(int i=nodes.size()-1; i>=0; i--)
		// {
		// 	std::cout << nodes[i].r+1 << " " << nodes[i].c+1 << '\n';
		// }

}

void solve() {
	queue<Node> q;
	memset(d, -1, sizeof(d));
	Node u(r1, c1, r3, c3);
	d[u.r][u.c]=0;
	q.push(u);
	int flag=0;
	while (!q.empty()) {
		Node u = q.front();q.pop();
		if (u.r==r2 && u.c==c2) {
			print_ans(u);
			flag=1;
			return;
		}
		for(int i=0; i<4; i++)
		{
			Node v2 = walk2(u,i);
			dfs(u,v2);
			Node v = walk(u,i);
			if (inside(v.r, v.c) && d[v.r][v.c]<0  && t[v.r][v.c]!=1 && flag2 ) {

				d[v.r][v.c]=d[u.r][u.c]+1;
				p[v.r][v.c] = u;
				v.hr=u.r;
				v.hc=u.c;
				q.push(v);
			}
			flag2=0;
		}
	}
	if (flag==0) {
		std::cout << "-1" << '\n';
	}
}


int main()
{
	freopen("C:/Users/Robinson-5/Desktop/in.txt", "r", stdin);

	freopen("C:/Users/Robinson-5/Desktop/out.txt", "w", stdout);
	int k;
	std::cin >> k;
	while (k--) {

		read_case();
		solve();
	}

	return 0;
}
