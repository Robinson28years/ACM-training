#include <bits/stdc++.h>
using namespace std;

int main(){
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			for(int k=0; k<10; k++){
				for(int a=0; a<10; a++){
					if (i!=j && i!=k && i!=a && j!=k && j!=a && k!=a) {
						if ((i*10+i)*(j*10+j)==(k*1000+k*100+a*10+a)) {
							std::cout << i<<" "<<j<<" "<<k<<" "<<a << '\n';
						}
					}
				}
			}
		}
	}
	return 0;
}
