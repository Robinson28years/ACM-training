#include <bits/stdc++.h>
using namespace std;

void printf_pailie(int n,int  *a, int cur)
{
	if (cur == n) {
		// std::cout << "ok" << '\n';
		for(int i=0; i<n; i++)
		{
			std::cout << a[i] << " ";
		}
		std::cout << '\n';
	}
	else{

		for(int i=1; i<=n; i++)
		{
			int ok=1;
			for(int j=0; j<cur; j++)
			{
				if (a[j]==i) {
					ok=0;
				}
			}
			if (ok==1) {
				a[cur]=i;
				printf_pailie(n, a, cur+1);
			}

		}
	}
}

int main()
{
	int a[10];
	printf_pailie(3, a, 0);
}
