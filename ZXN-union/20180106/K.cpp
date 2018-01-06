#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,l,r;
    cin>>n;
    scanf("%d%d", &a, &b);

    for( int i = 2; i <= n;i++) {
        scanf("%d%d", &l, &r);
        if(l>a) {
            a= l;
        } else {
            int x = l;
            int c = 1;
            while(x<=a) {
                x = x+ c*r;
            }
            a = x;
        }
    }
    printf("%d\n",a);
    return 0;
}