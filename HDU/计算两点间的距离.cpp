#include <bits/stdc++.h>
using namespace std;

int main()
{
	double x1,x2,y1,y2;
	while (std::cin >> x1 >> y1 >> x2 >> y2) {
		double d;
		d = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		d = sqrt(d);
		std::cout << setiosflags(ios::fixed) << setprecision(2) << d  << '\n';
	}

}
