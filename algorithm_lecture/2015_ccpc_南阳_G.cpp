#include <bits/stdc++.h>
using namespace std;

char a[200][200];
int vis[200][200];

bool check(int x,int y){
	return x>=0&&y>=0&&x<=8&&y<=8&&a[x][y]!='x'&&vis[x][y]==0;
}

int c = 0;

void dfs(int r, int l) {
	if(c>=2)return;
	if(check(r,l)){
		vis[r][l]=1;
		if(a[r][l]=='o'){
			dfs(r+1,l);
			dfs(r,l+1);
			dfs(r-1,l);
			dfs(r,l-1);
		}else{
			c++;
		}
	}else{
		return;
	}
}

int main()
{
	// freopen("slyar.out", "w", stdout); 
	int x,y,k;
	int n;
	cin>>n;
    int q=0;
	getchar();
	while (n--) {
		getchar();
        q++;
        x=9;
        y=9;
		k=0;
		// memset(a,'.',sizeof(a[0][0]));
		for(int i=0; i<x; i++)
		{
			for(int j=0; j<y; j++)
			{
				vis[i][j]=0;
				scanf("%c",&a[i][j]);
				// std::cin >> a[i][j];
			}
			getchar();
		}
        // cout<<"1111111111111111"<<endl;
		bool flag = false;
		for(int i=0; i<x; i++)
		{
			if(flag)break;
			for(int j=0; j<y; j++)
			{
                // cout<<a[i][j];
				if (a[i][j]=='o'&&vis[i][j]==0) {
					memset(vis, 0, sizeof(vis));
                    c=0;
					dfs(i,j);
                    // cout<<"ccc"<<c<<" ij:"<<i+1<<" "<<j+1<<endl;
                    if(c==1){
						k++;
						// cout<<"ok"<<endl;
						printf("Case #%d: Can kill in one move!!!\n",q);
						flag = true;
						break;
					}
					
				}
			}
            // cout<<endl;
		}
		if(k>0){
			// printf("Case #%d: Can kill in one move!!!\n",q);
		}else{
			// cout<<"no"<<endl;
			printf("Case #%d: Can not kill in one move!!!\n",q);
		}
		// std::cout << k << '\n';
	}

}
