#include <bits/stdc++.h>
using namespace std;
const int maxn=1000;
double c[maxn];
void searchmax(int low, int high, double &m1, double &m2) {
	if ((high-low)<1) {
		m1=c[high];
		m2=0;
		return;
	}else if(high-low == 1){
		if (c[low]<c[high]) {
			m1=c[high];
			m2=c[low];
		}else{
			m1=c[low];
			m2=c[high];
		}
	}else{
		double b1,b2,b3,b4;
		int mid = (low+high)/2;
		searchmax(low,mid,b1,b2);
		searchmax(mid+1,high,b3,b4);
		// std::cout << b1<<' '<<b2<<' '<<b3<<' '<<b4 << '\n';
		if (b1>b3) {
			m1=b1;
			if(b2>b3)
				m2=b2;
				else
					m2=b3;
		}
		else{
			m1=b3;
				if(b1>b4)
					m2=b1;
					else
						m2=b4;
		}
	}
}

int main(){
	int x;
	std::cout << "请输入要输入元素个数" << '\n';
	std::cin >> x;
	std::cout << "请输入元素" << '\n';
	for(int i=0; i<x; i++){
		std::cin >> c[i];
	}
	double m1,m2;
	searchmax(0,x,m1,m2);
	std::cout << m1<<" "<<m2 << '\n';
	return 0;
}
