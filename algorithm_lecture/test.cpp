#include<bits/stdc++.h>
using namespace std;
#define eps (1e-8)  

int main()
{
	// t=(int)((d-eps)/v)+1;
    // t=ceil(d/v);
	double s = 7.000000001;
	int t1 = (int)(s-eps)+1;
	int t2 = ceil(s);
	cout<<"t1:"<<t1<<" t2:"<<t2<<endl;
}
