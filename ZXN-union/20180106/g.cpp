#include <bits/stdc++.h>
using namespace std;
int a[100010];
int main()
{
    int n;
    long long sum=0;
    while(scanf("%d",&n)!=EOF) {
        for(int i=0;i<100010;i++)
            a[i]=1e9+10;
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        sum=a[0];
        // printf("%d\n",a[0]);
        int dis=0;
        for(int i=1;i<n;i++) {
            if (a[i] < sum) dis++;
            else if(a[i] >= sum) sum+=a[i];
        }
        // printf("11111111111\n");
        printf("%d\n",n-dis);
        
    }
    return 0;
}