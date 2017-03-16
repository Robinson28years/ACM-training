#include <bits/stdc++.h>
using namespace std;

int main()
{
	std::map<string, string> m;
	string n[3]={"A","B","C"};
	string v[3]={"X","Y","Z"};

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			for(int k=0; k<3; k++)
			{
				m["A"]=v[i];
				m["B"]=v[j];
				m["C"]=v[k];
				if (m["A"]!="X" && m["C"]!="Z" && (m["B"]=="X" || m["A"]=="X")) {
					if (m["A"]!=m["B"] && m["A"]!=m["C"] && m["B"]!=m["C"]) {
						std::cout << "A->"<<m["A"] << '\n';
						std::cout << "B->"<<m["B"] << '\n';
						std::cout << "C->"<<m["C"] << '\n';
					}
				}
			}
		}
	}

}
