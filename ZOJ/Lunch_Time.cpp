#include <bits/stdc++.h>
using namespace std;
struct dish {
	string name;
	int price;
};
int cmp( const dish &a, const dish &b ){
    if( a.price > b.price )
       return 1;
    else
       return 0;
}
int main(){
int q;
std::cin >> q;
while (q--) {
	int x,y,z;
	std::cin >> x>>y>>z;
	dish s[200],m[200],d[200];
	for(int i=0; i<x; i++){
		std::cin >> s[i].name>>s[i].price;
	}
	for(int i=0; i<y; i++){
		std::cin >> m[i].name>>m[i].price;
	}
	for(int i=0; i<z; i++){
		std::cin >> d[i].name>>d[i].price;
	}
	sort(s,s+x,cmp);
	sort(m,m+y,cmp);
	sort(d,d+z,cmp);
	int sum=0;
	sum=s[(x-1)/2].price+m[(y-1)/2].price+d[(z-1)/2].price;
	std::cout << sum << " "<< s[(x-1)/2].name<<" "<<m[(y-1)/2].name<<" "<<d[(z-1)/2].name<< '\n';
}
	return 0;
}
