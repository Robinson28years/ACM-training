#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<cmath>
#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
	ll n;
	while (1) {
		std::cin >> n;
		if (n==0) {
			break;
		}
		ll u=1,m;
		queue<ll> p;
		p.push(u);
		while (!p.empty()) {
			u = p.front(); p.pop();
			m=u*10+1;
			if(m%n==0)break;
			p.push(m);
			m=u*10;
			if(m%n==0)break;
			p.push(m);

		}
		std::cout << m << '\n';
	}

}
