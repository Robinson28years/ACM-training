#include <bits/stdc++.h>
using namespace std;

struct Node {
	int l,r,c;
	Node(int l=0 ,int r=0, int c=0):l(l),r(r),c(c){}
	bool operator==(Node& p) const{
		return (
			l==p.l &&
			r==p.r &&
			c==p.c
		);
	}
};

int main()
{
	Node p(1,2,3);
	Node u(1,3,3);
	if (p==u) {
		std::cout << "ok" << '\n';
	}
	else{
		std::cout << "no" << '\n';
	}
}
