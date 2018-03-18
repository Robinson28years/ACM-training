#include <bits/stdc++.h>
using namespace std;

struct card {
  int s;
  int v;
};

int cmp(const card &a, const card &b){
	if (a.v<b.v) {
		return 1;
	}
	else{
		return 0;
	}
}

int main()
{
    card a[999];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        a[i].s=i;
        a[i].v=q;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n/2;i++){
        cout<<a[i].s+1<<" "<<a[n-i-1].s+1<<endl;
    }
    return 0;
}