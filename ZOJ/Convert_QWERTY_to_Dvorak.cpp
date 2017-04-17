#include <bits/stdc++.h>
using namespace std;
char s[200000];
int main(){
	std::map<char, string> m;
	m['Q']="\"";
	m['q']="'";
	m['W']="<";
	m['w']=",";
	m['E']=">";
	m['e']=".";
	m['R']="P";
	m['r']="p";
	m['T']="Y";
	m['t']="y";
	m['Y']="F";
	m['y']="f";
	m['U']="G";
	m['u']="g";
	m['I']="C";
	m['i']="c";
	m['O']="R";
	m['o']="r";
	m['P']="L";
	m['p']="l";
	m['{']="?";
	m['[']="/";
	m['}']="+";
	m[']']="=";
	m['A']="A";
	m['a']="a";
	m['S']="O";
	m['s']="o";
	m['D']="E";
	m['d']="e";
	m['F']="U";
	m['f']="u";
	m['G']="I";
	m['g']="i";
	m['H']="D";
	m['h']="d";
	m['J']="H";
	m['j']="h";
	m['K']="T";
	m['k']="t";
	m['L']="N";
	m['l']="n";
	m[':']="S";
	m[';']="s";
	m['\"']="_";
	m['\'']="-";
	m['Z']=":";
	m['z']=";";
	m['X']="Q";
	m['x']="q";
	m['C']="J";
	m['c']="j";
	m['V']="K";
	m['v']="k";
	m['B']="X";
	m['b']="x";
	m['N']="B";
	m['n']="b";
	m['M']="M";
	m['m']="m";
	m['<']="W";
	m[',']="w";
	m['>']="V";
	m['.']="v";
	m['?']="Z";
	m['/']="z";
	m['_']="{";
	m['-']="[";
	m['+']="}";
	m['=']="]";
	while (gets(s)) {
		for(int i=0; s[i]!='\0'; i++){
			if(m.count(s[i])>0){
				std::cout <<m[s[i]];
			}else{
				cout<<s[i];
			}
		}
		std::cout << '\n';
	}




	return 0;
}
