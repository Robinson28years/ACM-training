#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<cmath>
#include<map>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int x;
	int maxn=202;
	char s1[maxn],s2[maxn],s3[maxn],s12[maxn];
	std::cin >> x;
	for(int j=1; j<=x; j++)
	{
		std::map<string, int> map1;
		map1.clear();
		std::cin >> n;
		std::cin >> s1;
		std::cin >> s2;
		std::cin >> s3;
		int d=0;
		while (1) {
			int k=0;
			memset(s12,0,sizeof(s12));
			for(int i=0; i<n; i++)
			{
				s12[k++]=s2[i];
				s12[k++]=s1[i];
				// std::cout <<s12[k-1] << '\n';
			}
			// std::cout << s12 << '\n';
			if(map1.count(s12))
			{
				std::cout <<j<< " -1" << '\n';
				break;
			}
			d++;
			map1[s12]=1;
			if (!strcmp(s12,s3)) {
				std::cout <<j<<" "<< d << '\n';
				break;
			}
			for(int i=0; i<n; i++)
			{
				s1[i]=s12[i];
			}
			for(int i=0; i<n; i++)
			{
				s2[i]=s12[n+i];
			}

		}
	}

}
