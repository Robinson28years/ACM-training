#include <bits/stdc++.h>
using namespace std;

int main(){
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			for(int k=0; k<6; k++){
				for(int a=0; a<6; a++){
					for(int b=0; b<6; b++){
						for(int c=0; c<6; c++){
							if (i==j || i==k || i==a || i==b || i==c || j==k || j==a || j==b || j==c || k==a || k==b || k==c || a==b || a==c || b==c) {
								break;
							}
							if ((i*100+j*10+k)%2==0&&(a*100+b*10+c)%4==0&&(i*100+j*10+k)>99&&(a*100+b*10+c)>99) {
								std::cout << "ji"<<(i*100+j*10+k)/2 <<" "<<(i*100+j*10+k) << '\n';
								std::cout << "tu"<<(a*100+b*10+c)/4 <<" "<<(a*100+b*10+c)<<'\n';
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
