#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;

struct Node
{
	int l,r,c;
	Node(int a=0, int b=0, int d=0){l=a;r=b;c=d;};
	bool operator==(Node& p) const{ return (l==p.l && r==p.r && c==p.c);}
};
int const maxn=50;
int d[maxn][maxn][maxn];
char g[maxn][maxn][maxn];
int dl[6]={0,0,0,0,1,-1};
int dr[6]={1,-1,0,0,0,0};
int dc[6]={0,0,1,-1,0,0};
int l,r,c;
Node s,e;
void read_case(){
	cin>>l>>r>>c;
	for (int i = 0; i < l; ++i)
	{
		for (int j = 0; j < r; ++j)
		{
			for (int k = 0; k < c; ++k)
			{
				cin>>g[i][j][k];
				if(g[i][j][k]=='S')s=Node(i,j,k);
				if(g[i][j][k]=='E')e=Node(i,j,k);

			}
		}
	}
}
Node walk(Node &u,int t){
	return(Node(u.l+dl[t],u.r+dr[t],u.c+dc[t]));
}
bool inside(Node &u){
	return u.l>=0&&u.l<l&&u.r>=0&&u.r<r&&u.c>=0&&u.c<c;
}
void slove(){
	queue<Node> q;
	q.push(s);
	memset(d,-1,sizeof(d));
	d[s.l][s.r][s.c]=0;
	while(!q.empty()){
		Node u=q.front();q.pop();
		if(u==e){
			std::cout << "Escaped in "<<d[u.l][u.r][u.c]<< " minute(s)." << '\n';
			return;
		}else{
			for (int i = 0; i < 6; ++i)
			{
				Node v=walk(u,i);
				if(inside(v)&&d[v.l][v.r][v.c]<0&&g[v.l][v.r][v.c]!='#'){
					q.push(v);
					d[v.l][v.r][v.c]=d[u.l][u.r][u.c]+1;
				}
			}

		}
	}
	cout<<"Trapped!"<<endl;
}


int main(int argc, char const *argv[])
{
	while(1){
	read_case();
	if(l==0)break;
	slove();		
	}

	return 0;
}
