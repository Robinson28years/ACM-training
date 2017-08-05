#include <stdio.h>
#include <string.h>

void to0(int array[],int a){
	if(a==-1){
		printf("0");
	}else if(array[a]==0){
		to0(array,a-1);
	}else{
		if(array[0]>0&&a!=0)printf("+%d",array[0]);
		else printf("%d",array[0]);
	}
}

int main(int argc, char const *argv[]){

	int a=0,n=0;
	scanf("%d %d",&a,&n);
	int array[a+1];
	memset(array,0,sizeof(array));
	array[a]=n;

	int i=0;
	if(a==0)i++;

	for(i;i<2;i++){
		int a=1;
		while(a!=0){
			scanf("%d %d",&a,&n);
			array[a]+=n;
		}
	}
	int m=a;
	//非常数项
	for(a;a>0;a--){
		if(array[a]==0)continue;

		//符号
		if(array[a]>0&&a!=m)printf("+");

		//系数
		if(array[a]==1){}
		else if(array[a]==-1)printf("-");
		else printf("%d",array[a]);

		//x
		printf("x");

		//幂
		if(a!=1)printf("%d",a);
	}
	//常数项
	to0(array,m);
    return 0;
}
