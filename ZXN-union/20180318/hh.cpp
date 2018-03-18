#include <bits/stdc++.h>
using namespace std;

int n,k;

int dfs(int a, int b) {
    if(b == k) return 1;
    int temp=1;
    for(int i=a; i<=n; i++) {
        if(i%a == 0) {
           return temp+=dfs(i,b+1);
        }
    }
}

int main()
{
    cin>>n>>k;
    int sum=0;
    for(int i=1; i<=n; i++) {
        sum+=dfs(i,1);
    }
    cout<<sum<<endl;
    return 0;
}