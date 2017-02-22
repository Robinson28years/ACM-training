#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string s1,s2;

	int k[26]={0},t=0,r;
	while (1) {
		t=0;
		for(int i=0; i<26; i++)
		{
			k[i]=0;
		}
		std::cin >> r;
		// std::cout << r << '\n';
		if (r == -1) {
			break;
		}
		std::cin >> s1 >> s2;
		for(int i=0; i<s1.length(); i++)
		{
			k[s1[i]-'a']++;
		}
		// for(int i=0; i<26; i++)
		// {
		// 	std::cout << k[i] << '\n';
		// }
		for(int i=0; i<s2.length(); i++)
		{
			// std::cout << k[s2[i]-'a'] << '\n';
			if (k[s2[i]-'a']==0) {
				t++;
				if (t>=7) {
					break;
				}
			}
			k[s2[i]-'a']=0;
			int flag2 = 1;
			for(int j=0; j<26; j++)
			{
				if (k[j]!=0) {
					flag2=0;
					break;
				}
			}
			if (flag2==1) {
				break;
			}

		}
		// for(int i=0; i<26; i++)
		// {
		// 	std::cout <<"houlai"<< k[i] << '\n';
		// }
		std::cout << "Round "<< r << '\n';
		sort(k,k+26);
		if (k[25]==0) {
			std::cout << "You win." << '\n';
		}
		else if (t<7) {
			std::cout << "You chickened out." << '\n';
		}
		else{
			std::cout << "You lose." << '\n';
		}
	}


}
