#include <bits/stdc++.h>
using namespace std;


int main(){
int v;
cin>>v;
while(v--){
     int z[100005]={0};
    int y[100005]={0};
    int a[100005];
    int q;
    cin>>q;
    int sum=0;
    for(int i = 0;i < q;i++)
    {
        cin>>a[i];
        // cout<<a[i];
        sum+=a[i];
    }
    int k=0;
    int w=sum;
    for(int i=2;i<=w;i++){
        if(sum%i==0){
            z[k++]=i;
            sum/=i;
            // cout<<sum<<endl;
            if(sum==1)break;
            i--;
        }
    }
    // for(int i = 0;i < k;i++)
    // {
    //     cout<<z[i]<<endl;
    // }
    int min =10000000;
    for(int i = 0;i < k;i++)
    {
        int e[100005]={0};
        int t=0;
        // cout<<z[i]<<"tttt"<<endl;
        for(int j=0;j<q;j++){
            e[t++]=a[j]%z[i];
            // sort(e,e+t);
            // cout<<"a"<<a[j]<<"z"<<z[i]<<" "<<e[t-1]<<endl;
        }
        sort(e,e+t);
        int u = t-1;
        int count=0;
        for(int j = 0;j < t;j++)
        {
            if(e[u]+e[j]<z[i]){
                count+=e[j];
                e[u]+=e[j];
                // e[j]=0;
                // cout<<"ccc1 "<<count<<endl;
            }else{
                count+=(z[i]-e[u]);
                e[j]=e[j]-(z[i]-e[u]);
                e[u]=0;
                u--;
                // cout<<"ccc2 "<<count<<endl;
            }
        }
        if(count<min)min=count;
        count = 0;
        // cout<<count<<endl;
    }
    cout<<min<<endl;
}

}