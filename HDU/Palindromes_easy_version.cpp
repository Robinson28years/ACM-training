#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	std::cin >> n;
	while (n--) {
		string s;               //定义一个字符串
		int flag=1;             //设置一个标记
		std::cin >> s;          //获取字符串
		int length = s.length();
		for(int i=0; i<length/2; i++)
		{	                   //字符串一个正序一个逆序比较
			if (s[i]!=s[length-1-i]) {
				flag=0;        //如果遇到不相等的时候标记转换
				break;
			}
		}
		if (flag) {            //判断
			std::cout << "yes" << '\n';
		}
		else{
			std::cout << "no" << '\n';
		}
	}
}
