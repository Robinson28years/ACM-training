#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    double d=(double)a/(double)(b+c);
    // cout<<(double)b*d<<endl;
    printf("%.4lf",(double)b*d);
    return 0;
}