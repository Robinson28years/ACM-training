#include <bits/stdc++.h>
using namespace std;

char c[111];

int m[111][111];
int vis[111];
int visr[111];

int main()
{
    int a,b,del;
    cin>>a>>b;
    memset(vis, 0 , sizeof(vis));
    memset(visr, 0 , sizeof(visr));
    
    for(int i = 1;i <=a;i++)
    {
        scanf("%s", c);
        int le = strlen(c);
        for(int j = 1; j<= le ;j++) {
            m[i][j] = c[j-1] - 'a';
        }
    }
    // for(int i =1; i< 10;i++) {
    //     for(int j = 1; j<= 10;j++) {
    //         printf("%d ", m[i][j]);
    //     }
    //     printf("\n");
    // }
    //数组存入成功
    del = 0;
    int cnt = 0;
    int x;
    while(del < b) {
        ++cnt;
        for(int i = 1; i<=b; i++) {
            if(vis[i]) {
                continue;
            }
            // printf (" %d \n",i);
            int ma = m[1][i];
            x = 1;
            for(int j = 2; j<=a;j++) {
                if (m[j][i] <ma && (visr[x]==0)) {
                    ++del;
                    printf("   %d   %d\n", i, j);
                    ++vis[i];
                    for(int q = 1; q <= a;q++) {
                        if (visr[q] >0) {
                            --visr[q];
                            printf ("%d\n",visr[q]);
                        }
                    }
                } else if (m[j][i] >ma){
                    printf("      %d \n", x);
                    ++visr[x];
                    ma = m[j][i];
                    x = j;
                    
                }

            }
        }
        if (cnt >50) break;
    }

    printf("%d\n", del);


    return 0;
}