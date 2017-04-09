#include <bits/stdc++.h>
using namespace std;
int fr[13]={
	0,31,28,31,30,31,30,31,31,30,31,30,31
};
int r[13]={
	0,31,29,31,30,31,30,31,31,30,31,30,31
};
int mn[10000][13][32];

int main(){
	int cj=0;
	memset(mn,0,sizeof(mn));
	mn[2000][1][1]=0;
	for(int i=2000; i<=9999; i++){
		if(i%4==0&&(i%100!=0)||i%400==0){
			for(int j=1; j<=12; j++){
				for(int k=1; k<=r[j]; k++){
					int temp = 0;
					int q=i*10000+j*100+k;
					while (q>0) {
						if(q%10==9)temp++;
						q=q/10;
					}
					mn[i][j][k]=cj+temp;
					cj+=temp;
				}
			}
		}else{
			for(int j=1; j<=12; j++){
				for(int k=1; k<=fr[j]; k++){
					int temp = 0;
					int q=i*10000+j*100+k;
					while (q>0) {
						if(q%10==9)temp++;
						q=q/10;
					}
					mn[i][j][k]=cj+temp;
					cj+=temp;
				}
			}
		}
	}

	int f;
	scanf("%d",&f);
	while (f--) {
		int y,m,d,y2,m2,d2;
		scanf("%d%d%d%d%d%d",&y,&m,&d,&y2,&m2,&d2);
		int temp2=0;
		int q=y*10000+m*100+d;
		while (q>0) {
			if(q%10==9)temp2++;
			q=q/10;
		}
		std::cout << mn[y2][m2][d2]-mn[y][m][d]+temp2 << '\n';
	}
	return 0;
}
