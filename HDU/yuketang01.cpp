#include <stdio.h>

const int maxn = 350;
//定义一个有幂次和系数的结构体
struct num {
    int m;//幂次
    int x;//系数
};

int main(int argc, char const *argv[]) {
    struct num a[maxn];
    struct num b[maxn];
    struct num c[maxn];
    for(int i=0; i<350; i++) {
        a[i].m = 0;
        b[i].m = 0;
        a[i].x = 0;
        b[i].x = 0;
        c[i].m = 0;
        c[i].x = 0;
    }
    int d, f;
    int q1 = 0, q2 = 0;
    //读取
    while (scanf("%d %d",&d,&f)) {
        a[q1].m = d;
        a[q1].x = f;
        q1++;
        if(d == 0)break;
    }
    while (scanf("%d %d",&d,&f)) {
        b[q2].m = d;
        b[q2].x = f;
        q2++;
        if(d == 0)break;
    }
    //定义第三个多项式，然后a，b插入进来
    int q3 = 0;
    for(int i=105; i>-105; i--) {//考虑负数
        int m2=0,x2=0;
        for(int k=105; k>=0; k--) {
            if(a[k].m == i) x2+=a[k].x;
            if(b[k].m == i) x2+=b[k].x;
        }
        if(x2!=0) {
            c[q3].m = i;
            c[q3].x = x2;
            q3++;
        }
    }
    //输出
    for(int i=0; i<q3; i++) {
        if(c[i].x > 0 && i!=0)printf("+");
        if (c[i].x == -1 || c[i].x == 1) {//特判系数1，-1
            if(c[i].x == -1)printf("-");
            if(c[i].m == 1 || c[i].m == -1) {//特判幂次1，-1
                printf("x");
            }
            else if(c[i].m == 0) {//特判幂次0
                printf("%d",c[i].x);
            }
            else {
                printf("x%d",c[i].m );
            }
        }
        else {
            if(c[i].m == 1 || c[i].m == -1) {
                printf("%dx",c[i].x);
            }
            else if(c[i].m == 0) {
                printf("%d",c[i].x);
            }
            else {
                printf("%dx%d",c[i].x,c[i].m);
            }
        }
    }
    if(q3==0)printf("0");
    printf("\n");

    return 0;
}
