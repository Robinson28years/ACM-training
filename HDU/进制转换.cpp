#include <bits/stdc++.h>
using namespace std;
                                //定义一个进制转换函数
stack<char> conversion(int num, int jz) {
	stack<char> s;             //定义一个栈
	int t,flag=1;	           //定义一个标记用来判断正负
	char c;
	if(num<0){flag=0;num=-num;}//若为负数标记改变
	do {
		t=num%jz;
		num=num/jz;
		if (t>=10) c='A'+t-10;
		else c=t+'0';
		s.push(c);		       //每次循环取余，然后进栈
	} while(num!=0);	       //循环结束条件为无法再取余
	if(flag==0)s.push('-');    //若有负号，将负号进栈
	return s;
}

int main()
{
	int num,jz;
	stack<char> g;
	while (std::cin >> num >> jz) {
		g=conversion(num,jz);
		while (!g.empty()) {
			std::cout << g.top();//若栈不为空，取出栈顶元素
			g.pop();             //将栈顶元素出栈
		}
		std::cout << '\n';
	}
}
