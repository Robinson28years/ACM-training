#include <bits/stdc++.h>
using namespace std;

int zeller(int y,int m,int d)
{
if(m==1) m=13,y--;
if(m==2) m=14,y--;
int week=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
return week+1;

}

int main()
{
    int q;
    std::cin >> q;
    while (q--) {
        int y,m,d;
        scanf("%d-%d-%d",&y,&m,&d );
        int s=zeller(y,m,d);
        for(int i=1;i<10000;i++) {
            // std::cout << i << '\n';
            if(zeller(y+i,m,d)==s) {
                std::cout << y+i << '\n';
                break;
            }
        }
    }
    return 0;
}
