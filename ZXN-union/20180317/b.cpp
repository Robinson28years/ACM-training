#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
#include<stack>
#include<map>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    map<int,int> s;
    while(k--){
        int a[10000];
        int p;
        string f;
        cin>>p;
        for(int i=0;i<2*p;i++){
            cin>>a[i];
        }
        cin>>f;
        if(f=="<"||f==">"){
            for(int i=0;i<2*p;i++){
                s[a[i]]++;
            }
        }else{
            for(int i=0;i<n;i++){
                bool flag = true;
                for(int j=0;j<2*p;j++){
                    if(i==a[j]){
                        flag = false;
                    }
                }
                if(flag){
                    s[i]++;
                }
            }
        }

    }
    int max = -1;
    int maxn;
    for(int i=0;i<n;i++){
        if(s[i]>max){
            max = s[i];
            maxn=i;
        }
    }
    cout<<maxn<<endl;
    return 0;
}