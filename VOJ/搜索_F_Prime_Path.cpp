#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int k[10009]={0};
int d[10000];

void primes() {
	k[2]=1;
	for(int j=3; j<=10000; j++)
	{
		int flag=1;
		for(int i=2; i<sqrt(j)+0.5; i++)
		{
			if (j%i==0) {
				flag=0;
				break;
			}
		}
		if (flag==1) {
			k[j]++;
		}
	}
}

int main()
{
	primes();
	int n,m,c;
	int t[10000];
	std::cin >> c;
	while (c--) {
		std::cin >> n >> m;
		memset(d,-1,sizeof(d));
		int flag=1;
		queue<int> p;
		int u=n;
		p.push(u);
		d[u]=0;
		while (!p.empty()) {
			u=p.front(); p.pop();
			// std::cout << u<< '\n';
			if (u==m) {
				flag=0;
				std::cout << d[u] << '\n';
				// while (u!=n) {
				// 	std::cout << t[u] << '\n';
				// 	u=t[u];
				// }
				break;
			}
			for(int i=1; i<10; i++)
			{
				int q=u%1000+i*1000;
				if (k[q]>0&&q<10000&&d[q]<0) {
					p.push(q);
					d[q]=d[u]+1;
					t[q]=u;
					// std::cout << t[q] << '\n';
				}
			}
			for(int i=0; i<10; i++)
			{
				int q=u/1000*1000+u%100+i*100;
				if (k[q]>0&&d[q]<0) {
					p.push(q);
					d[q]=d[u]+1;
					t[q]=u;
				}
			}
			for(int i=0; i<10; i++)
			{
				int q=u/100*100+u%10+i*10;
				if (k[q]>0&&d[q]<0) {
					p.push(q);
					d[q]=d[u]+1;
					t[q]=u;
				}
			}
			for(int i=0; i<10; i++)
			{
				int q=u/10*10+i;
				if (k[q]>0&&d[q]<0) {
					p.push(q);
					d[q]=d[u]+1;
					t[q]=u;
				}
			}
		}
		if(flag)
		std::cout << "Impossible" << '\n';
	}

}
