#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int cmp(const int &a, const int &b){
	if (a>b) {
		return 1;
	}
	else{
		return 0;
	}
}

int main()
{
	string s1, s2;
	int k1[200]={0}, k2[200]={0};
	while (std::cin >> s1 >> s2) {
		for(int i=0; i<200; i++)
		{
			k1[i]=0;
			k2[i]=0;
		}
		if (s1.length()==s2.length()) {
			for (int  i = 0; i < s1.length(); i++) {
				k1[s1[i]]++;
				k2[s2[i]]++;
			}
			sort(k1,k1+199,cmp);
			sort(k2,k2+199,cmp);
			int flag = 1;
			for(int j=0 ; j<s1.length(); j++)
			{
				// std::cout << k1[j] <<"kkk" << k2[j] << '\n';
				if (k1[j]!=k2[j]) {
					flag = 0;
					break;
				}
			}
			if (flag==1) {
				std::cout << "YES" << '\n';
			}
			else{
				std::cout << "NO" << '\n';
			}
		}
		else{
			std::cout << "NO" << '\n';
		}

	}

}
