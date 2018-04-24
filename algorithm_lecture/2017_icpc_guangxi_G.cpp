#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int main()
{
	int n;
//	cin>>n;
	while(cin>>n){
	vector<int> v;
	vector<int>::iterator iter;
	for(int i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		v.push_back(x);
	}
//	sort(v.begin(),v.end());
	int sum=0;
	
	for (iter = v.begin(); iter != v.end(); )  
	{
		int x=1;
		int y=2;
		if(iter+1==v.end())break;
//		cout<<"kkk:"<<*iter<<endl;
		if(*iter==*(iter+x)){
//			cout<<"ok1"<<endl; 
			iter = v.erase(iter);
			iter = v.erase(iter);
			if(iter!=v.begin())iter = iter-1;
			if(iter!=v.begin())iter = iter-1;
			sum++;
			
		}else if(iter+2==v.end()){
			break;
		}else if(*(iter+x)==*(iter+y)){
//			cout<<"ok2"<<endl; 
			iter = v.erase(iter+y);
			iter = v.erase(iter);
			if(iter!=v.begin())iter = iter-1;
			if(iter!=v.begin())iter = iter-1;
			sum++;
		}else if(*(iter+y)-*(iter+x)==1&&*(iter+x)-*(iter)==1){
//				cout<<"ok3"<<endl; 
				iter = v.erase(iter);
				iter = v.erase(iter);
				iter = v.erase(iter);
				sum++;	
		}
		else{
//			cout<<"ok4"<<endl; 
			++iter;
		}  
//	     if (3 == *iter)  
//	          iter = val.erase(iter);  
//	     else  
//	          ++iter;  
	}  

	cout<<sum<<endl;
	}
}