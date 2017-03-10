#include <bits/stdc++.h>
using namespace std;

long long sum=0;
const int modd = 20142014;

void move(long long n,char x,char y) {
	// std::cout << "no."<<n<<' '<<x<<"->"<<y << '\n';
	sum++;
}

void hanoi(long long n,char a, char b, char c) {
	if (n==1) {
		move(n,a,c);
	}
	else{
		hanoi(n-1,a,c,b);
		move(n,a,c);
		hanoi(n-1,b,a,c);
	}
}

int power(long long a, int n)
{
	int result = 1;
	while (n>0) {
		if (n%2==1) {
			result = (result*a)%modd;
		}
		a = (a*a)%modd;
		// std::cout << a << '\n';
		n/=2;
	}
	return result;
}


int main()
{
	// hanoi(3,'a','b','c');
	int t;
	std::cin >> t;
	while (t--) {
		// sum=0;
		int n;
		std::cin >> n;
		std::cout << power(2,n)-1 << '\n';
		// hanoi(n,'a','b','c');
		// sum=;
		// std::cout << sum << '\n';
		// std::cout << (long long)(pow(2,n)-1) % 20142014 << '\n';
		// std::cout <<pow(2,n)-1<< '\n';
	}
}
