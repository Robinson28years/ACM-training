#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int k=0;
	while (std::cin >> n) {
		k=0;
		for (int i = 1; i <=n; i++) {
			int q = i;
			int p = i;
			while (1) {
				if (p%10==5) {
					k++;
				}
				else{
					break;
				}
				p=p/5;

			}

			while (1) {
				if (q%10==0) {
					k++;
				}
				else{
					break;
				}
				q=q/10;
				if (q%10==5) {
					while (1) {
						if (q%10==5) {
							k++;
						}
						else{
							break;
						}
						q=q/5;
					}
					break;
				}
			}
		}
		std::cout << k << '\n';
	}

}
