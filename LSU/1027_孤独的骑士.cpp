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

int sum=0;

bool inside(const Node& q)
{
	return q.r<=8 && q.r>=1 && q.c<=8 && q.c>=1;
}

void dfs(const Node& q , int cnt) {
	// std::cout << q.r << q.c << cnt << '\n';
	if (inside(q)&&cnt>0) {
		sum++;
		return;
	}
	else if (cnt>0) {
		return;
	}
	else{
		dfs(Node(q.r+2,q.c+1), cnt+1);
		dfs(Node(q.r+2,q.c-1), cnt+1);
		dfs(Node(q.r+1,q.c+2), cnt+1);
		dfs(Node(q.r-1,q.c+2), cnt+1);
		dfs(Node(q.r-2,q.c+1), cnt+1);
		dfs(Node(q.r-2,q.c-1), cnt+1);
		dfs(Node(q.r+1,q.c-2), cnt+1);
		dfs(Node(q.r-1,q.c-2), cnt+1);
	}

}

int main()
{
	int j;
	std::cin >> j;
	while (j--) {
		sum=0;
		string a;
		std::cin >> a;
		Node q = Node(a[0]-'a'+1,a[1]-'0');
		// std::cout <<a[0]-'a'+1 << ' '<<a[1]-'0' << '\n';
		dfs(q,0);
		std::cout << sum << '\n';
	}

}
