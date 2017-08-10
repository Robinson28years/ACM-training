#include <stdio.h>

int main() {
	char s[3][2];
	scanf("%[^,],%[^,],%s",&s[0],&s[1],&s[2]);
	printf("%s\n",s);

}
