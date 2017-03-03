#include <bits/stdc++.h>
using namespace std;

int cmp( const int &a, const int &b ){
    if( a > b )
       return 1;
    else
       return 0;
}

const int maxn =110;
int n,m,num=0;
stack<int> s;

int value[maxn];

void read_case(){
	std::cin >> n >> m;
	for(int i=0; i<n; i++)
	{
		std::cin >> value[i];
	}
	sort(value,value+n,cmp);
}

void dfs(const int& value , int line, int max){
	if (num>m) {
		s.push(max);
	}
	else{
		
	}
}



int main()
{
	read_case();

}
