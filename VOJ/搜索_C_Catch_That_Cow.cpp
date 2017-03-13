#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<cmath>
#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

const ll maxn = 100000+50;
ll d[maxn];

int main()
{
	ll n,k;

	while (std::cin >> n >> k) {
		if (n>=k) {
			std::cout << n-k << '\n';
		}
		else{


		ll u = n;
		queue<ll> q;
		memset(d,-1,sizeof(d));
		d[n]=0;
		q.push(u);
		while (!q.empty()) {
			u = q.front(); q.pop();
			// std::cout << u << '\n';
			if (u==k) {
				std::cout << d[u] << '\n';
				break;
			}
			ll v = u+1;
			if (v>0 && d[v]<0) {
				d[v]=d[u]+1;
				q.push(v);
			}
			 v = u-1;
			if (v>0 && d[v]<0) {
				d[v]=d[u]+1;
				q.push(v);
			}
			v = u*2;
		   if (v>0 && v<=maxn && d[v]<0) {
			   d[v]=d[u]+1;
			   q.push(v);
		   }

		}
		}
	}



}
