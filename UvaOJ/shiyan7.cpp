#include <stdio.h>
#include <string.h>
#include <stdlib.h>
const int maxn = 20;
int n, W;
int maxw;
int x[maxn];
int minm = 32767;
void Loading(int w[], int tw, int m, int op[], int i){
    int j;
    if(i > n){
        if(tw <= W && (tw > maxw || (tw == maxw && m < minm))) {
            maxw = tw;
            minm = tw;
            for(j=1; j<=n; j++){
                x[j] = op[j];
            }
        }
    } else {
        op[i] = 1;
        if(tw + w[i] <= W)
            Loading(w, tw+w[i], m+1, op, i+1);
        op[i] = 0;
        if(m <= 2)
            Loading(w, tw, m, op, i+1);
    }
}
void dispSolution(int n){
    int i;
    printf("选取的集装箱：\n");
    for(i=0; i<=n; i++){
        if(x[i]==1)
            printf("  选取第 %d 个集装箱\n",i);
    }
    printf("总重量 = %d\n",maxw);
}
int main(){
    int w[] = {0,5,2,6,4,3};
    int op[maxn];
    n = 5, W = 10;
    Loading(w, 0, 0, op, 1);
    dispSolution(n);
}

