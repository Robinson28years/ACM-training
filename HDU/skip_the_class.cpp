#include <bits/stdc++.h>
using namespace std;
struct ke {
	string name;
	int value;
};

int cmp( const ke &a, const ke &b ){
    if( a.value > b.value )
       return 1;
    else
       return 0;
}

int main()
{

	int x,n;
	std::cin >> n;
	while (n--) {
		std::map<string, int> map;
		ke a[105];
		std::cin >> x;
		for(int i=0; i<x; i++)
		{
			std::cin >> a[i].name >> a[i].value;
		}
//结构体排序
		sort(a,a+x,cmp);
		int sum =0;
		for(int i=0; i<x; i++)
		{
			map[a[i].name]++;
			if (map[a[i].name]<=2) {
				sum+=a[i].value;
			}
		}
		std::cout << sum << '\n';
	}
}
