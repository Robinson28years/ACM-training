#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,k;
    string q;
    std::cin >> s >> k;
    std::cin >> q;
    int z[1000000]={0};
    int flag=0;
    for(int i=0; i<s;i++) {
        int t = 0;
        t = ++z[q[i]];
        // std::cout << t << '\n';
        if (t>k) {
            flag =1;
            break;
        }
    }
    if(flag)std::cout << "NO" << '\n';
    else std::cout << "YES" << '\n';
	return 0;
}
