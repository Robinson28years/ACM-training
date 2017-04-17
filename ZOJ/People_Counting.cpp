#include <bits/stdc++.h>
using namespace std;

int main(){
int q;
std::cin >> q;
while (q--) {
	int h,w;
	std::cin >> h>>w;
	char a[200][200];
	memset(a,'.',sizeof(a));
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			std::cin >> a[i][j];
		}
	}
	int sum=0;
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			if(a[i][j]=='O'){
				sum++;
				a[i][j]='.';
				if(a[i+1][j-1]=='/')a[i+1][j-1]='.';
				if(a[i+1][j]=='|')a[i+1][j]='.';
				if(a[i+1][j+1]=='\\')a[i+1][j+1]='.';
				if(a[i+2][j-1]=='(')a[i+2][j-1]='.';
				if(a[i+2][j+1]==')')a[i+2][j+1]='.';
			}
			else if(a[i][j]=='/'){
				sum++;
				a[i][j]='.';
				if(a[i-1][j+1]=='O')a[i-1][j+1]='.';
				if(a[i][j+1]=='|')a[i][j+1]='.';
				if(a[i][j+2]=='\\')a[i][j+2]='.';
				if(a[i+1][j]=='(')a[i+1][j]='.';
				if(a[i+1][j+2]==')')a[i+1][j+2]='.';
			}
			else if(a[i][j]=='|'){
				sum++;
				a[i][j]='.';
				if(a[i-1][j]=='O')a[i-1][j]='.';
				if(a[i][j-1]=='/')a[i][j-1]='.';
				if(a[i][j+1]=='\\')a[i][j+1]='.';
				if(a[i+1][j-1]=='(')a[i+1][j-1]='.';
				if(a[i+1][j+1]==')')a[i+1][j+1]='.';
			}
			else if(a[i][j]=='\\'){
				sum++;
				a[i][j]='.';
				if(a[i-1][j-1]=='O')a[i-1][j-1]='.';
				if(a[i][j-1]=='|')a[i][j-1]='.';
				if(a[i][j-2]=='/')a[i][j-2]='.';
				if(a[i+1][j-2]=='(')a[i+1][j-2]='.';
				if(a[i+1][j]==')')a[i+1][j]='.';
			}
			else if(a[i][j]=='('){
				sum++;
				a[i][j]='.';
				if(a[i-2][j+1]=='O')a[i-2][j+1]='.';
				if(a[i-1][j]=='/')a[i-1][j]='.';
				if(a[i-1][j+1]=='|')a[i-1][j+1]='.';
				if(a[i-1][j+2]=='\\')a[i-1][j+2]='.';
				if(a[i][j+2]==')')a[i][j+2]='.';
			}
			else if(a[i][j]==')'){
				sum++;
				a[i][j]='.';
				if(a[i-2][j-1]=='O')a[i-2][j-1]='.';
				if(a[i-1][j-2]=='/')a[i-1][j-2]='.';
				if(a[i-1][j-1]=='|')a[i-1][j-1]='.';
				if(a[i-1][j]=='\\')a[i-1][j]='.';
				if(a[i][j-2]=='(')a[i][j-2]='.';
			}
		}
	}
	std::cout << sum << '\n';

}
	return 0;
}
