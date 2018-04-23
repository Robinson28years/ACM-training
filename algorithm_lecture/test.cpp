#include<stdio.h>
#include<string.h>
#include<algorithm>
#define INF 0x3f3f3f3f
using namespace std;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
char map[10][10];
int v[10][10];
int vv[10][10];
int cnt;
void dfs(int x,int y)
{
	for(int i=0;i<4;i++)//这块判断只有一个‘o’时的情况 
	{
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=0&&nx<9&&ny>=0&&ny<9&&map[nx][ny]=='.'&&!vv[nx][ny])
		{
			vv[nx][ny]=1;
			cnt++;
		}
	}
	for(int i=0;i<4;i++)//这个用来判断有多个‘o’时的情况 
	{
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=0&&nx<9&&ny>=0&&ny<9&&map[nx][ny]=='o'&&!v[nx][ny])
		{
			v[nx][ny]=1;
			dfs(nx,ny);
		}
	}
}
int main()
{
	int t,n,i,j;
	int T=1;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<9;i++)
			scanf("%s",map[i]);
		int flag=0;
		memset(v,0,sizeof(v));
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				if(map[i][j]=='o'&&!v[i][j])//逐个遍历‘o’旁边的情况 
				{
					memset(vv,0,sizeof(vv));
					cnt=0;
					v[i][j]=1;
					dfs(i,j);
					if(cnt==1)
					{
						flag=1;
						break;
					}
				}
			}
			if(flag)
				break;
		}
		if(flag)
			printf("Case #%d: Can kill in one move!!!\n",T++);
		else
			printf("Case #%d: Can not kill in one move!!!\n",T++);
	}
	return 0;
}