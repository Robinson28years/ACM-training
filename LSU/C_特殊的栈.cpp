#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n,m;
	int k;
	while(1)
	{
		deque<int> dq;
		cin>>n>>m;
		if (n==0)
		{
			break;
		}
		deque<int>::iterator iter;
	for (int i = 0; i < m; ++i)
	{
		cin>>k;

		for (iter = dq.begin(); iter!=dq.end(); iter++)
		{
			if (*iter==k)
			{
				*iter = -1111110;
				n++;
				break;
			}
		}
		if (dq.size()>=n)
		{
			iter = dq.begin();
			// if (*iter==-1111110)
			// {
			// 	dq.pop_front();
			// 	n--;
			// }
			while(*iter==-1111110)
			{
				dq.pop_front();
				n--;
				iter = dq.begin();
			}
			if (dq.size()>=n)
			dq.pop_front();
		}
		dq.push_back(k);
	}
	for (iter = dq.begin(); iter!=dq.end(); iter++)
		{
			if (*iter!=-1111110)
			{
				cout<<*iter<<endl;
				break;
			}
			// cout<<*iter<<endl;
		}
	}


}
