#include<stdio.h>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

struct human {
	string name;
	int age;
};

bool cmp(human a, human b ){
    return a.age < b.age;
}

int main()
{
	human a[5];
	a[0].name="cbb";
	a[0].age=20;
	a[1].name="zl";
	a[1].age=19;
	a[2].name="gkz";
	a[2].age=19;
	a[3].name="zzy";
	a[3].age=21;
	sort(a,a+4,cmp);
	for(int i=0; i<4; i++)
	{
		std::cout << a[i].name << ' ' << a[i].age << '\n';
	}
}
