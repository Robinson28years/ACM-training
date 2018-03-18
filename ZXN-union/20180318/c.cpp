#include <bits/stdc++.h>
using namespace std;

struct pp{
    int x, y;
};

pp a[9999];
pp b[9999];
bool vis[9999];

int main()
{

    int n , i , j ,k, cnt,cnt2,co;
    scanf("%d", &n);
    for (i = 0 ; i < n; i++) {
        scanf("%d%d", &a[i].x, &a[i].y);
    }
    cnt = 1;
    b[0].x = a[0].x;
    b[0].y = a[0].y;
    cnt2 = 0;
    memset(vis, 0 , sizeof(vis));
    co = 0;
    vis[0] = 1;
    while (1) {
        for (i = 1; i < n; i++) {
            for (j = 0; j < cnt; j++) {
                if (b[j].x == a[i].x || b[j]. y == a[i].y) {
                    b[cnt].x = a[i].x ;
                    b[cnt].y = a[i].y ;
                    vis[i] = 1;
                    ++cnt;
                    
                }
            }

        }
        if (cnt2 == cnt && cnt != 0) {
            int f= 0;
            // memset(b, 0, sizeof(b));
            
            for (int u = 0; u < n; u ++) {
                if (!vis[u]) {
                    b[0].x = a[u].x;
                    b[0].y = a[u].y;
                    ++co;
                    f =1;
                    break;
                }
            }
            if (f) {
                cnt =1;
                continue;
            }
            printf("%d\n", co);
            return 0;
            
        }
        if (cnt == 1 || cnt == 0) {
            printf("%d\n", co);
            return 0;
            
        }
        cnt2 = cnt;
    
    }

    return 0;
}