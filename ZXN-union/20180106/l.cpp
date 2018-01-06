#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rpp[40]={31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
    int prp[40]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
    int ppr[40]={31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
    int ppp[40]={31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
    int n;
    cin>>n;
    int a[30];
    for(int i = 0;i < n;i++)
    {
        cin>>a[i];
    }
    for(int i = 0;i < 36-n+1;i++)
    {
        // int brp,bpr,bpp = 1;
        int brpp=1;
        int bprp=1;
        int bppr=1;
        int bppp=1;
        for(int j = 0;j < n;j++)
        {
            if(a[j]!=rpp[i+j]){
                brpp = 0;
                break;
            }
        }
        for(int j = 0;j < n;j++)
        {
            if(a[j]!=prp[i+j]){
                bprp = 0;
                break;
            }
        }
        for(int j = 0;j < n;j++)
        {
            if(a[j]!=ppr[i+j]){
                bppr = 0;
                break;
            }
        }
        for(int j = 0;j < n;j++)
        {
            if(a[j]!=ppp[i+j]){
                bppp = 0;
                break;
            }
        }
        if(brpp==1 || bprp==1 || bppr==1 || bppp==1){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}