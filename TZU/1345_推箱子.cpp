#include <bits/stdc++.h>
using namespace std;

struct Node {
	int r,c;
	Node(int r=0, int c=0):r(r),c(c){}
};
int m, n;

const int maxn =10;
int d[maxn][maxn][4];

const int dr[]={-1, 0, 1, 0};
const int dc[]={0, 1, 0, -1};

Node walk(const Node& u, int dir)
{
	return Node(u.r + dr[dir], u.c + dc[dir]);
}

bool inside(int r, int c)
{
	return r>=0 && r<m && c>=0 && c<n;
}


int main()
{

}
