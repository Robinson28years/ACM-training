#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    std::cin >> n;
    int a;
    int flag = 0;
    for(int i=0;i<n;i++) {
        scanf("%d",&a );
        // std::cout << a << '\n';
        if(a%2!=0){
            flag=1;
            break;
        }
    }
    if(flag)std::cout << "First" << '\n';
    else std::cout << "Second" << '\n';
	return 0;
}
