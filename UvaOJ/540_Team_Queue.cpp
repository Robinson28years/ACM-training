#include <bits/stdc++.h>
using namespace std;

const int maxt = 1000 + 10;

int main()
{
	int t,kase=0;
	while (std::cin >> t) {
		std::map<int, int> team;
		std::cout << "Scenario #"<<++kase << '\n';
		for(int i=0; i<t; i++)
		{
			int n,x;
			std::cin >> n;
			while (n--) {
				std::cin >> x;
				team[x]=i;
			}
		}
		queue<int> q, q2[maxt];
		while (1) {
			string mod;
			std::cin >> mod;
			if (mod[0]=='S') {
				break;
			}
			else if(mod[0]=='D')
			{
				int t = q.front();
				std::cout << q2[t].front() << '\n';
				q2[t].pop();
				if (q2[t].empty()) {
					q.pop();
				}
			}
			else if(mod[0]=='E')
			{
				int x;
				std::cin >> x;
				int t = team[x];
				if (q2[t].empty()) {
					q.push(t);
				}
				q2[t].push(x);


			}
		}
		std::cout << '\n';
	}
}
