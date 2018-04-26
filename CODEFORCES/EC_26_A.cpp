#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    // scanf("%d",&y);
    // cout<<y<<endl;
    cin>>y;
    getchar();
    string line;
    getline(cin,line);
    stringstream ss(line);
    string x;
    int maxn=-1000;
    while(ss>>x){
        // cout<<x<<endl;
        int len = x.length();
        int c=0;
        for(int i=0;i<len;i++){
            if(x[i]>='A'&&x[i]<='Z')c++;
        }
        if(c>maxn)maxn=c;
    }
    cout<<maxn<<endl;
}