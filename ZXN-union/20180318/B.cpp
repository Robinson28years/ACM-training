#include <bits/stdc++.h>
using namespace std;
// int N = 200000;
int a[200000], b[200000];

int c[200000], d[200000], e[200000];

int bs(int low, int hi, int k) {
    int mid;
    if (low <= hi) {
        mid = (low + hi) / 2;
        if (c[mid] >= k && c[mid - 1] < k) {
            return mid;
        }
        if (c[mid] > k) {
            return bs(low , mid - 1, k);
        }
        else return bs(mid + 1, hi, k);
    }
    return -1;
}

int main()
{
    int n, m, i, j ,k;
    scanf("%d", &n);
    for (i = 0 ; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for (i = 0; i < m ; i++) {
        scanf("%d", &b[i]);
    }
    int x = 0;
    c[0] = a[0];
    for (i = 1; i < n ;i++) {
        c[i] = c[i - 1] + a[i];
    }
    k = 0;
    int cnt, r;
    for (i = 0; i < m ; i ++) {
        printf("%d\n", bs(0, n , b[i]) + 1);
        // cnt = n/2;
        // r = cnt ;
        // while (1) {
        //     if (b[i] <= c[cnt] && b[i] > c[cnt - 1]) {
        //         printf("%d\n", cnt);
        //         break;
        //     } else if (b[i] <= c[cnt - 1] + 1) {
        //         cnt =  cnt/2 ;
        //         r= cnt;
        //     } else if (b[i] > c[cnt]) {

        //         cnt = cnt + ((m - cnt)/ 2) + 1;
        //     }
        // }
    }


    return 0;
}