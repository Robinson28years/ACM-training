#include <bits/stdc++.h>
using namespace std;

struct Node {
	int r, c, dir;
	Node(int r=0, int c=0, int dir=0):r(r),c(c),dir(dir){}
};

const char* dirs = "NESW";
const char* turns = "FLR";
const int maxn = 10;

int has_edge[maxn][maxn][4][3];
int d[maxn][maxn][4];
Node p[maxn][maxn][4];
int r0, c0, dir, r1, c1, r2, c2;
//方向转数字
int dir_id(char c){return strchr(dirs, c)-dirs;}
int turn_id(char c){return strchr(turns, c)-turns;}

const int dr[]={-1, 0, 1, 0};
const int dc[]={0, 1, 0, -1};

Node walk(const Node& u, int turn){
	int dir = u.dir;
	if(turn == 1){dir = (dir + 3)%4;}
	if(turn == 2){dir = (dir +1)%4;}
	return Node(u.r + dr[dir], u.c + dc[dir], dir);
}

bool inside(int r, int c){
	return r>=1 && r<=9 && c>=1 && c<=9;
}

bool read_case(){
	char s[99], s2[99];
	if (std::cin >> s >> r0 >> c0 >> s2 >> r2 >> c2) {

	}
	else{
		return false;
	}
	std::cout << s << '\n';

	dir = dir_id(s2[0]);
	r1 = r0 + dr[dir];
	c1 = c0 + dc[dir];

	memset(has_edge, 0, sizeof(has_edge));
	while (1) {
		int r, c;
		std::cin >> r;
		if(r==0)break;
		std::cin >> c;
		while (std::cin >> s && s[0]!='*') {
			for(int i=1; i<strlen(s);i++)
			{
				has_edge[r][c][dir_id(s[0])][turn_id(s[i])] = 1;
			}
		}
	}
	return true;
}

void solve() {
	queue<Node> q;
	memset(d, -1, sizeof(d));
	Node u(r1, c1, dir);
	d[u.r][u.c][u.dir]=0;
	q.push(u);
	while (!q.empty()) {
		Node u = q.front(); q.pop();
		if (u.r == r2 && u.c == c2) {
			//输出结果
			return;
		}
		for(int i=0; i<3; i++)
		{
			Node v = walk(u, i);
			if (has_edge[u.r][u.c][u.dir][i] && inside(v.r, v.c) && d[v.r][v.c][v.dir] <0) {
				d[v.r][v.c][v.dir] = d[u.r][u.c][u.dir] +1;
				p[v.r][v.c][v.dir] = u;
				q.push(v);
			}
		}
	}
	std::cout << "NO Solution Possible" << '\n';
}




int main()
{

}