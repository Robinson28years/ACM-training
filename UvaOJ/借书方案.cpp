#include <bits/stdc++.h>
using namespace std;

int main()
{
	std::map<string, string> m;
	string n[3]={"A","B","C"};
	string v[5]={"book1","book2","book3","book4","book5"};

	int q=0;

	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			for(int k=0; k<5; k++)
			{
				m["A"]=v[i];
				m["B"]=v[j];
				m["C"]=v[k];
				// if (m["A"]!="X" && m["C"]!="Z" && (m["B"]=="X" || m["A"]=="X")) {
					if (m["A"]!=m["B"] && m["A"]!=m["C"] && m["B"]!=m["C"]) {
						std::cout << "method:"<<++q << '\n';
						std::cout << "A->"<<m["A"] << '\n';
						std::cout << "B->"<<m["B"] << '\n';
						std::cout << "C->"<<m["C"] << '\n';
						std::cout << '\n';
					}
				// }
			}
		}
	}

}
