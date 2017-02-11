#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
	int Wei[30][30]={0};
	int x,m=1,n=0,count=1,y;
	int old=1;
	while (std::cin >> x&&x!=0) {
		old=1,m=1,n=0,count=1;
		Wei[0][0]=1;
		y=x*x;
	for (int i = 1; i < y; i++) {
		count++;
		// printf("%d %d %d\n",count,n,m );
		Wei[n][m]=count;
		if (Wei[n+1][m-1]==0&&n+1<=x-1&&m-1>=0) {
			n++;
			m--;
		}
		else if (Wei[n-1][m+1]==0&&n-1>=0&&m+1<=x-1) {
			n--;
			m++;
		}
		else if (Wei[n+1][m]==0&&n+1<=x-1&&old%2!=0) {
			n++;
			old++;
		}
		else if (Wei[n][m+1]==0&&m+1<=x-1&&old%2==0) {
			m++;
			old++;
		}
		else if (Wei[n+1][m]==0&&n+1<=x-1) {
			n++;
			old++;
		}
		else if (Wei[n][m+1]==0&&m+1<=x-1) {
			m++;
			old++;
		}
		else{
			// printf("%d\n",i );
			break;
		}
	}

	for (int i = 0; i < x; i++) {
		int j = 0;
		for (j = 0; j < x-1; j++) {
			printf("%-3d ",Wei[i][j] );
		}
		printf("%-3d",Wei[i][j] );
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			Wei[i][j]=0;
		}
	}
	}

}
