#include <bits/stdc++.h>
using namespace std;

const int maxn = 1200+50;
int p[maxn];
int d[maxn];
int n;
int flag=-1;

void read_case() {
	std::cin >> n;
	memset(d,0,sizeof(d));
	for(int i=1; i<=n; i++)
	{
		int x,y;
		std::cin >> x >> y;
		if (d[x]>0) {
			if (d[x]>y) {
				break;
			}
		}
		if (x>flag) {
			flag=x;
		}
		d[x]=y;
	}
}

void dp() {
	memset(p,0,sizeof(p));
	for(int i=1; i<=5; i++)
	{
		p[i]=d[i];
		for(int j=1; j<=i; j++)
		{

			if (p[j]>p[i]) {
				p[i]=p[j];
			}
		}
	}
	for(int i=6; i<=flag; i++)
	{
		for(int j=1; j<5; j++)
		{
			if (max(p[i-j],p[i-5]+d[i])>p[i]) {
				p[i]=max(p[i-j],p[i-5]+d[i]);
			}
		}
		// std::cout <<i<<' '<< p[i] << '\n';
	}

}

int main()
{
	// freopen("C:/Users/Robinson-5/Desktop/i1.in", "r", stdin);

	// freopen("C:/Users/Robinson-5/Desktop/out.txt", "w", stdout);
	while (1) {
		memset(p,0,sizeof(p));
		memset(d,0,sizeof(d));
		flag=-1;
		read_case();
		if (n==0) {
			break;
		}
		dp();
		int max=-1;
		for(int i=1; i<=flag; i++)
		{
			// std::cout << p[i] << '\n';
			if (p[i]>max) {
				max=p[i];
			}
		}
		std::cout << max << '\n';
	}
}
