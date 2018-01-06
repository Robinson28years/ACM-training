#include <bits/stdc++.h>
using namespace std;
char s[110][110];
int main()
{
    int n,m;
    while(cin>>n>>m) {
        for(int i=0;i<n;i++)
            scanf("%s",s[i]);
        int flag,count=0;
        for(int i=0;i<m;i++) {
            flag=0;
            for(int j=0;j<n-1;j++) {
                if(s[j+1][i] < s[j][i]) {
                    count++;
                    printf("del i %d\n",i);
                    break;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}