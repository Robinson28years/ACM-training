#include <bits/stdc++.h>
using namespace std;
#define LL long long

int cmp(const LL &a, const LL &b){
	if (a>b) {
		return 1;
	}
	else{
		return 0;
	}
}

int main()
{
    LL l;
    int n;
    while(cin>>l>>n){
    LL a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,cmp);
    LL sum =0;
    bool flag = false;
    for(int i=0;i<n;i++){
        sum+=a[i];
        // cout<<"okok"<<sum<<endl;
        if(sum>=l){
            flag = true;
            cout<<i+1<<endl;
            break;
        }
    }
    if(!flag){
        cout<<"impossible"<<endl;
    }
    }


    return 0;
}