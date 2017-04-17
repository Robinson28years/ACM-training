#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	stack<char> b;
	queue<char> c;
	std::cin >> a;
	string d=a;
	sort(d.begin(),d.end());
	int len = a.length();
	int q=0;
	int flag=0;
	for(int i=0; i<len; i++){
		b.push(a[i]);
		if(i==flag){
		char minn=a[i];
		for(int j=i+1; j<len; j++){
			if(a[j]<minn){
				minn = a[j];
				flag=j;
			}
		}
		while (b.top()<minn) {
			c.push(b.top());
			b.pop();
		}

			c.push(b.top());
			b.pop();
		}
	}
	while (!c.empty()) {
		std::cout << c.front();
		c.pop();
	}
	return 0;
}
