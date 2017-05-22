#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool is_monday(ll year, ll month, ll day){
	if(month<3){year-=1;month+=12;}
    ll c=year/100;
    ll y=year-100*c;
    ll w =c/4-2*c+y+y/4+26*(month+1)/10+day-1;
    w=(w%7+7)%7;
    if(w==1)return 1;
    return 0;
}
std::map<ll, ll> m1;
std::map<ll, ll> m2;
ll a[10000][13][32];
int main(){
	// freopen("C:/Users/Robinson-5/Desktop/in.txt", "r", stdin);

	// freopen("C:/Users/Robinson-5/Desktop/out.txt", "w", stdout);
	ll sum=0;
	for(ll i=1752; i<=14000; i++){
		// std::cout << i<< '\n';
		for(ll j=1; j<13; j++){
			for(ll k=1; k<31; k+=10){
				if(is_monday(i,j,k)){
					long long q=i*10000+j*100+k;
					m1[q]=++sum;
					m2[sum]=q;
				}
			}
		}
	}
	ll y,m,d,n;
ll r;
// for(ll i=0; i<10000; i++){
// 	std::cout << m2[i]%1000000 << '\n';
// }
// std::cout << m2[1]<<" "<<m2[2058] << '\n';
std::cin >> r;
while (r--) {
	std::cin >> y>>m>>d>>n;
	ll f = n/2058;
	n=n%2058;
	long long q=y*10000+m*100+d;
	ll t = m1[q];
	// std::cout << t<<"tttt" << '\n';
	ll t2 =m2[t+n-1];
	// std::cout << t2 << '\n';
	std::cout << t2/10000+f*400<<" "<<(t2/100)%100<<" "<<t2%100 << '\n';
}
	return 0;
}
