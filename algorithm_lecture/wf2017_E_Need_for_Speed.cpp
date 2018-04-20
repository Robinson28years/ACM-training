#include "bits/stdc++.h"
using namespace std;
#define eps (1e-8)  

int main()
{
    int n;
    double t;
    cin>>n>>t;
    double d[1005],s[10005];
    for (int i = 0; i < n; i++)
    {
        cin>>d[i]>>s[i];
    }
    double result;
    double low=-1e9;
    double high=1e9;
    double c;
    int q=0;
    for(int i=0;i<n;i++)
    low=max(low,-s[i]);
    while(true){
        // q++;
        // if(q==10000)break;
        c=(low+high)/2;
        // cout<<low<<" "<<c<<" "<<high<<" "<<t<<endl;
        result=0.0;
        for(int i=0; i<n; i++){

            result+=(double)d[i]/(s[i]+c);
        }

        // if((result-t)>0)low = c;
        // else high = c;

        // cout<<result<<" "<<t<<endl;
        if((high-low)<1e-6){
            break;
        }else if(result<t&&result>=0){
            high = c;
        }else{
            low = c;
        }
    }
    // cout<<c<<endl;
    printf("%.9lf\n",c);
}