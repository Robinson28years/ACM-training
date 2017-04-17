#include <bits/stdc++.h>
using namespace std;
int mmm(int x,int y, int z){
	std::map<int, int> m;
	int sum=0;
	if(m.count(x+y+z)==0){
		m[x+y+z]=1;
		if((x+y+z)>0)
		sum++;
	}
	if(m.count(x+y-z)==0){
		m[x+y-z]=1;
		if((x+y-z)>0)
		sum++;
	}
	if(m.count(x-y+z)==0){
		m[x-y+z]=1;
		if((x-y+z)>0)
		sum++;
	}
	if(m.count(x-y-z)==0){
		m[x-y-z]=1;
		if((x-y-z)>0)
		sum++;
	}
	if(m.count(-x+y+z)==0){
		m[-x+y+z]=1;
		if((-x+y+z)>0)
		sum++;
	}
	if(m.count(-x+y-z)==0){
		m[-x+y-z]=1;
		if((-x+y-z)>0)
		sum++;
	}
	if(m.count(-x-y+z)==0){
		m[-x-y+z]=1;
		if((-x-y+z)>0)
		sum++;
	}
	if(m.count(x)==0){
		m[x]=1;
		if((x)>0)
		sum++;
	}
	if(m.count(y)==0){
		m[y]=1;
		if((y)>0)
		sum++;
	}
	if(m.count(z)==0){
		m[z]=1;
		if((z)>0)
		sum++;
	}
	if(m.count(x+y)==0){
		m[x+y]=1;
		if((x+y)>0)
		sum++;
	}
	if(m.count(x-y)==0){
		m[x-y]=1;
		if((x-y)>0)
		sum++;
	}
	if(m.count(-x+y)==0){
		m[-x+y]=1;
		if((-x+y)>0)
		sum++;
	}
	if(m.count(x+z)==0){
		m[x+z]=1;
		if((x+z)>0)
		sum++;
	}
	if(m.count(x-z)==0){
		m[x-z]=1;
		if((x-z)>0)
		sum++;
	}
	if(m.count(-x+z)==0){
		m[-x+z]=1;
		if((-x+z)>0)
		sum++;
	}
	if(m.count(y+z)==0){
		m[x+y+z]=1;
		if((y+z)>0)
		sum++;
	}
	if(m.count(y-z)==0){
		m[y-z]=1;
		if((y-z)>0)
		sum++;
	}
	if(m.count(-y+z)==0){
		m[-y+z]=1;
		if((-y+z)>0)
		sum++;
	}
	return sum;

}
int main(){
int j;
std::cin >> j;
while (j--) {
	int x,y;
	std::cin >> x>>y;
	int max=-1;
	for(int i=1; i<x; i++){
		int k=mmm(i,x-i,y);
		if(k>max)max=k;
	}
	for(int i=1; i<y; i++){
		int k=mmm(i,y-i,x);
		if(k>max)max=k;
	}

std::cout << max << '\n';
}
	return 0;
}
