#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
#define eps (1e-8)  

int main()
{
	int g,n;
	int s[100005];
	cin>>g;
	int ci=0;
	while(g--){
		ci++;
		cin>>n;
        s[0]=0;
		for(int i=1;i<=n;i++){
			int y;
//			cin>>t;
			scanf("%d",&y);
			s[i]=y;
		}
		int at=0;
		int t;
		double v;
        

		v=s[n]-s[n-1];
		// for(int i=n-1;i>=0;i--){
		// 	t=(ceil)((s[i+1]-s[i])/v);
		// 	// cout<<"kk:"<<t<<endl;
		// 	at+=t;
		// 	v=(double)(s[i+1]-s[i])/t;
		// }
        int d;
        for(int i=n-1;i>=0;i--){
            d = s[i]-s[i-1];
			if(d<=v){
                v=d;
                at++;
            }else{
                // at+=(int(double(d-eps)/v)+1);  
                // v=(double(d)/(int(double(d-eps)/v)+1));

                t=(int)((d-eps)/v)+1;
                // t=ceil(d/v);
                at+=t;
                v=(double)d/t; 
            }
		}

		printf("Case #%d: %d\n",ci,at);	
		

	}

}