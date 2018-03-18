#include <bits/stdc++.h>
using namespace std;

struct pp{
    int x, y, count;
};

int dix[4] = {-1, 0, 1, 0};
int diy[4] = {0, 1, 0, -1};
bool vis[666][666];
char mp[666][666];
    int n , m , k, i, j;
pp ps[300000];

int cnt = 0;
void bfs(int xx, int yy) {
    pp pone;
    pone.x = xx;
    pone.y = yy;
    pone.count = 0;
    ps[cnt] = pone;
    vis[xx][yy] = 1;
    queue<pp> q;
    q.push(pone);
    while(!q.empty()) {
        pp p = q.front();
        q.pop();
        for (int w = 0; w < 4 ; w++) {
            int x = p.x + dix[w];
            int y = p.y + diy[w];
            if (mp[x][y] == '.' && !vis[x][y]) {
                vis[x][y] = 1;
                pp r;
                r.x = x;
                r.y = y;
                r.count = ++cnt;
                ps[cnt] = r;
                // cout<<cnt<<" "<<endl;
                q.push(r);
            }
                //             for (int u = 0 ; u < n; u++) {
                //     printf("%s", mp[u]);
                // }
        }
    }
}

bool cmp(const pp a, const pp b) {
    return a.count > b.count;
}

int main()
{

    scanf("%d%d%d", &n, &m, &k);
    for (i = 0; i < n; i ++) {
        // for (j = 0 ;j < m ; j++) {
            scanf("%s", mp[i]);
        // }
    }
    memset(vis, 0, sizeof(vis));
    for (i = 0 ; i < n; i ++) {
        for (j = 0 ; j < m ; j++) {
            if (mp[i][j] == '.') {
                bfs(i, j);
                sort(ps, ps + cnt + 1, cmp);

                // for (int u = 0 ; u < 4; u++) {
                //     printf("%d %d %d\n", ps[u].count, ps[u].x, ps[u].y);
                // }

                for (int t = 0; t < k ; t ++) {
                    mp[ps[t].x][ps[t].y] = 'X';
                }
                for (int u = 0 ; u < n; u++) {
                    printf("%s\n", mp[u]);
                }

                return 0;
            }
        }
    }

    return 0;
}