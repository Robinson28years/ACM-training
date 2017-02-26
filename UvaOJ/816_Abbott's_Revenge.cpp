#include <bits/stdc++.h>
using namespace std;

const char* dirs = "NESW";
const char* turns = "FLR";

int dir_id(char c)
{
	return strchr(dirs, c)-dirs;
}
int turn_id(char c)
{
	return strchr(turns, c)-turns;
}


int main()
{
	std::cout << dir_id('N') << '\n';
}
