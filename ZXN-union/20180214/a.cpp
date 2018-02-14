#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
     double minn=1e10;
    for(int i=0;i<n;i++){
         double a,b,z;
        cin>>a>>b;
        z = a/b;
        if(z<minn){
            minn = z;
        }
    }
    double r;
    r = minn*(double)m;
    printf("%.8lf",r);
    return 0;
}