#include<stdio.h>
#include<iostream>
#include<string.h>
#include<string>
#include<ctype.h>
#include<math.h>
#include<set>
#include<map>
#include<vector>
#include<queue>
#include<bitset>
#include<algorithm>
#include<time.h>
using namespace std;
void fre() { freopen("c://test//input.in", "r", stdin); freopen("c://test//output.out", "w", stdout); }
#define MS(x, y) memset(x, y, sizeof(x))
#define ls o<<1
#define rs o<<1|1
typedef long long LL;
typedef unsigned long long UL;
typedef unsigned int UI;
template <class T1, class T2>inline void gmax(T1 &a, T2 b) { if (b > a)a = b; }
template <class T1, class T2>inline void gmin(T1 &a, T2 b) { if (b < a)a = b; }
const int N = 1e5 + 10, M = 0, Z = 1e9 + 7, inf = 0x3f3f3f3f;
template <class T1, class T2>inline void gadd(T1 &a, T2 b) { a = (a + b) % Z; }
int casenum, casei;
int n, m, k;
vector<int>a[N];
int cnt[N];


set< pair<int, int> >sot;
void datamaker()
{
    srand(time(0));
    freopen("Count the Sheep.in", "w", stdout);
    casenum = 1000; printf("%d\n", casenum);
    for (int casei = 1; casei <= casenum; ++casei)
    {
        sot.clear();
        if (casei <= 300)
        {
            n = rand() % 100 + 1; m = rand() % 100 + 1; k = rand() % min(n * m, 100);
        }
        else if (casei <= 990)
        {
            n = rand() % 1000 + 1; m = rand() % 1000 + 1; k = rand() % min(n * m, 1000);
        }
        else if (casei <= 991)
        {
            n = m = 200; k = 40000;
        }
        else if (casei <= 992)
        {
            n = m = 400; k = 100000;
        }
        else
        {
            n = m = k = (casei - 990) * 10000;
        }
        printf("%d %d %d\n", n, m, k);
        for (int i = 1; i <= k; ++i)
        {
            int x, y;
            while(1)
            {
                x = rand() % n + 1;
                y = rand() % m + 1;
                if (!sot.count({ x,y }))break;
            }
            sot.insert({ x,y });
            printf("%d %d\n", x, y);
        }
    }
}


void datamaker_pre()
{
    srand(time(0));
    freopen("Count the Sheep_pre.in", "w", stdout);
    casenum = 100; printf("%d\n", casenum);
    for (int casei = 1; casei <= casenum; ++casei)
    {
        sot.clear();
        n = rand() % 50 + 1; m = rand() % 50 + 1; k = rand() % min(n * m, 50);
        printf("%d %d %d\n", n, m, k);
        for (int i = 1; i <= k; ++i)
        {
            int x, y;
            while (1)
            {
                x = rand() % n + 1;
                y = rand() % m + 1;
                if (!sot.count({ x,y }))break;
            }
            sot.insert({ x,y });
            printf("%d %d\n", x, y);
        }
    }
}

int main()
{
    //datamaker(); return 0;
    //freopen("Count the Sheep.in", "r", stdin); freopen("Count the Sheep.out", "w", stdout);

    //datamaker_pre(); return 0;
    //freopen("Count the Sheep_pre.in", "r", stdin); freopen("Count the Sheep_pre.out", "w", stdout);

    scanf("%d", &casenum);
    for (casei = 1; casei <= casenum; ++casei)
    {
        scanf("%d%d%d", &n, &m, &k);
        for (int i = max(n, m); i >= 1; --i)a[i].clear(), cnt[i] = 0;
        for (int i = 1; i <= k; ++i)
        {
            int x, y; scanf("%d%d", &x, &y);
            a[x].push_back(y);
            ++cnt[y];
        }
        LL ans = 0;
        for (int x = 1; x <= n; ++x)
        {
            LL onepoint = a[x].size() - 1;
            for (auto y : a[x])
            {
                ans += (cnt[y] - 1) * onepoint;
            }
        }
        printf("%lld\n", ans * 2);
    }
    return 0;
}
/*
【分析】
非常感谢elfness对出题想法的帮助！就是这题，为了保障本次BC足够友好，换掉了另外一个质量还可以的不过大概难一些的题，让更多人2题保本xD。
首先，因为朋友关系只能是在男羊和女羊之间的，所以这是一个二分图。
然后，我们发现每个序列都满足一端为男羊，另外一端为女羊，于是我们可以按照"女羊A，男羊B，女羊C，男羊D"的方式计数，在最后使得答案*2就好。
a[x]存是男羊x朋友的所有女羊，cnt[y]存女羊y拥有的男羊朋友数。于是:
for (int x = 1; x <= n; ++x)                //枚举男羊B
{
    LL onepoint = a[x].size() - 1;          //除去女羊C，女羊A的可能方案数为a[x].size() - 1
    for (auto y : a[x])                     //枚举女羊C，这两层for循环其实只枚举了k条边，复杂度为o(n+m+k)
    {
        ans += (cnt[y] - 1) * onepoint;     //显然除了男羊B，其他男羊都可以作为男羊D，计数为cnt[y] - 1
    }
}最后ans * 2就是答案啦。
计数时每条边和每个点都只遍历一次，所以复杂度为O(n + m)
PS:这题会爆int

*/  
