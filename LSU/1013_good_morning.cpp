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

bool inside(const Node&p)
{
	return p.r>=0 && p.r<=3 && p.c>=0 && p.c<=2;
}

int g[4][3]={{1,2,3},{4,5,6},{7,8,9},{999,0,999}};
int k=0;
int d[10000];

void dfs(const Node& p, int sum) {
	if (!inside(p)) {
		return;
	}
	for(int i=0; i<2; i++)
	{
		if (i==1) {
			// std::cout << "dian"<< p.r+1 << ' ' << p.c+1 << ' '<< sum << '\n';
			sum=sum*10+g[p.r][p.c];
			if (sum<=200&&sum>=1) {
				// std::cout << sum << '\n';
				d[k++]=sum;
				dfs(p,sum);
				dfs(Node(p.r+1,p.c),sum);
				dfs(Node(p.r,p.c+1),sum);
			}
			else{
				return;
			}
		}
		if (i==0) {
			// if (sum>200 || sum<0)return;
			// dfs(p,sum);
			dfs(Node(p.r+1,p.c),sum);
			dfs(Node(p.r,p.c+1),sum);
		}
	}

}

int main()
{
	// freopen("C:/Users/Robinson-5/Desktop/in.txt", "r", stdin);
	//
	// freopen("C:/Users/Robinson-5/Desktop/out.txt", "w", stdout);
	 dfs(Node(0,0),0);
	 sort(d,d+k);
	// for(int i=0; i<k; i++)
	// {
	// 	std::cout << d[i] << '\n';
	// }
	int y;
	std::cin >> y;
	while (y--) {
		int j;
		std::cin >> j;
		int min=300;
		int flag;
		for(int i=0; i<k; i++)
		{
			// std::cout << abs(j-d[i]) << '\n';
			if (abs(j-d[i])<min) {
				min=abs(j-d[i]);
				flag=i;
				if (min==0) {
					break;
				}
			}
		}
		std::cout << d[flag] << '\n';
	}
}
