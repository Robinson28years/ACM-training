#include <bits/stdc++.h>
using namespace std;
char s[110][110];
int main()
{
    int r,c;
    while(cin>>r>>c) {
        for(int i=0;i<r;i++)
            scanf("%s",s[i]);

        int d=0;
        for(int i = 0;i < c;i++)
        {
            int xun = 0;
            int jx = 0;
            if(xun==1 && jx ==1)
            continue;
            xun = 1;
            for(int j = 0;j < r-1;j++)
            {
                if(s[j][i]<=s[j+1][i]){
                    if(s[j][i]==s[j+1][i]){
                        jx =1;
                        if(i<c-1 && s[j][i+1]>s[j+1][i+1]){
                            xun =0;
                        }
                    }else{
                        if(j==(r-2)){
                            break;
                        }
                    }
                }else {
                    d++;
                    break;
                }
            }
        }
        
        printf("%d\n",d);
    }
    return 0;
}