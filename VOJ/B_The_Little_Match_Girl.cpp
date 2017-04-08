#include <bits/stdc++.h>
using namespace std;

std::map<int, int> m;
std::map<int, int> m2;
int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	m['0']=6;
	m['1']=2;
	m['2']=5;
	m['3']=5;
	m['4']=4;
	m['5']=5;
	m['6']=6;
	m['7']=3;
	m['8']=7;
	m['9']=6;
	m2[2]=1;
	m2[3]=7;
	m2[4]=4;
	m2[5]=5;
	m2[6]=9;
	m2[7]=8;
int n;
std::cin >> n;
while (n--) {
	int x;
	string y;
	std::cin >> x >>y;
	int w=x;
	int sum=0;
	for(int i=0; i<x; i++){
		sum+=m[y[i]];
	}
	if (sum/6>=w) {
		stack<int> q;
		sum=sum-w*6;
		for(int i=0; i<w; i++){
			int r=9;
			if (sum>=1) {
				r=8;
				sum-=1;
			}
			q.push(r);
		}
		while (!q.empty()) {
			std::cout << q.top();
			q.pop();
		}
		std::cout << '\n';
	}else{
		queue<int> s;
		sum=sum-w*2;
		for(int i=0; i<w; i++){
			int r=1;
			if (i==w-1) {
				r=m2[sum+2];
			}else if (sum>=4) {
				r=9;
				sum-=4;
			}else if (sum>=1) {
				r=7;
				sum-=1;
			}
			s.push(r);
		}
		while (!s.empty()) {
			std::cout << s.front();
			s.pop();
		}
		std::cout << '\n';
	}

}
 return 0;
}
