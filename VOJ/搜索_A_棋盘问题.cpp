#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 10;

const int dr[]={-1, 0, 1, 0};
const int dc[]={0, 1, 0, -1};

char t[maxn][maxn];
int m,n,sum=0;
char a[maxn][maxn];
int visted[maxn];

struct Node {
	int r,c;
	Node(int r=0, int c=0):r(r),c(c){}
};

bool inside(const Node& u)
{
	return u.r<m && u.c<m && u.r>=0 && u.c >=0;
}

bool place(const Node& u)
{
	for(int i=0; i<n; i++)
	{
		if (a[i][u.c]=='q') {
			return false;
		}
	}
	for(int i=0; i<n; i++)
	{
		if (a[u.r][i]=='q') {
			return false;
		}
	}
	return true;
}

void dfs(const Node& u,int cnt) {
	// std::cout << u.r+1 << u.c +1<< cnt << "pan"<<place(u)<<" "<<inside(u) << '\n';
	if (cnt == n) {
		sum++;
		return;
	}
	if (u.r>=m) {
		// std::cout << "ok" << '\n';
		return;
	}
	for(int i=0; i<m; i++)
	{
		// std::cout << visted[i] << '\n';
		if (visted[i]==1&&t[u.r][i]=='#') {
			visted[i]=0;
			// std::cout << u.r+1 << " " << i+1 << '\n';
			dfs(Node(u.r+1,u.c),cnt+1);
			visted[i]=1;
		}
	}
	dfs(Node(u.r+1,u.c),cnt);
	return;

}

void read_case()
{
	std::cin >> m >> n;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<m; j++)
		{
			std::cin >> t[i][j];
		}
	}
}



int main()
{
	// freopen("C:/Users/Robinson-5/Desktop/in.txt", "r", stdin);
	//
	// freopen("C:/Users/Robinson-5/Desktop/out.txt", "w", stdout);

while (1) {
	read_case();
	if (m==-1 && n==-1) {
		break;
	}
	sum=0;
	// memset(visted,1,sizeof(visted));
	for(int i=0; i<maxn; i++)
	{
		visted[i]=1;
	}
				int cnt = 0;
				dfs(Node(0,0), cnt);
	std::cout << sum << '\n';
}


}
