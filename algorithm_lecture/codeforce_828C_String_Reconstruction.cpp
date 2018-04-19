#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
char s[100000005];
char s2[100000005];
int main()
{
	
	CLR(s,'a');
	int n;
	cin>>n;
	int maxn=-INF;
	for(int i=0;i<n;i++){
//		string s2;
//		cin>>s2;
		
		scanf("%s",s2);
		int len = strlen(s2);
		int c;
		cin>>c;
        int pre=0;
		for(int j=0;j<c;j++){
			int t;
			// cin>>t;
            scanf("%d",&t);
			int y=0;
			int p=t-1;
            // cout<<"pre:"<<pre<<" len:"<<p+len<<endl;
            if(pre>(p+len))continue;
            // pre = p+len;
            else if(pre>=p){
                // cout<<j<<"ok"<<endl;
                y=pre-p;
                p=pre;
                // cout<<pre<<endl;
                while(true){
				s[p]=s2[y];
				p++;
				y++;
				if(p>maxn)maxn=p;
				if(y==len)break;
			}
            }else{
                // cout<<"no"<<endl;
              while(true){
				s[p]=s2[y];
				p++;
				y++;
				if(p>maxn)maxn=p;
				if(y==len)break;
			}  
            }
            pre = p;
			
		}
	}
//	cout<<maxn<<endl;
    s[maxn]='\0';
    printf("%s\n",s);
	// for(int i=0;i<maxn;i++){
	// 	printf("%c",s[i]);
	// }
	// cout<<endl;
}