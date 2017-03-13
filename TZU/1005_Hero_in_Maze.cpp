#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;

struct Node {
	int r,c;
	Node(int r=0, int c=0):r(r),c(c){}
};

const int maxn=20+10;

char d[maxn][maxn];
int t;
int n,m;
int k;
Node p,s;

void read_case() {
	std::cin >> m >> n >> k;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			std::cin >> d[i][j];
			if (d[i][j]=='S') {
				s=Node(s.r=i,s.c=j);
			}
			if (d[i][j]=='P') {
				p=Node(p.r=i,p.c=j);
			}
		}
	}
}
bool inside(const Node &p)
{
	return p.r>=0&&p.r<n&&p.c>=0&&p.c<m;
}

int flag=0;
void dfs(const Node &s, int cnt) {
	if (flag==1) {
		return;
	}
	if (!inside(s)) {
		return;
	}
	if (cnt>k) {
		return;
	}
	if (d[s.r][s.c]=='*'||d[s.r][s.c]=='#') {
		return;
	}
	if (s.r==p.r && s.c==p.c && cnt<=k) {
		flag = 1;
	}
	char a = d[s.r][s.c];
	d[s.r][s.c]='#';
	dfs(Node(s.r,s.c+1),cnt+1);
	dfs(Node(s.r+1,s.c),cnt+1);
	dfs(Node(s.r,s.c-1),cnt+1);
	dfs(Node(s.r-1,s.c),cnt+1);
	d[s.r][s.c]=a;


}

int main()
{
	// freopen("C:/Users/Robinson-5/Desktop/in.txt", "r", stdin);

	// freopen("C:/Users/Robinson-5/Desktop/out.txt", "w", stdout);
	while (1) {
		flag=0;
		read_case();
		if (n==0 && m==0) {
			break;
		}
		dfs(s,0);
		if (flag==1) {
			std::cout << "YES" << '\n';
		}
		else{
			std::cout << "NO" << '\n';
		}
	}
}
