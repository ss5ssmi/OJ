#include<stdio.h>
int main(){
	int m,n,flag=1;
	while(scanf("%d%d",&m,&n)!=EOF){
		if(n>0){
			if(flag){
				printf("%d %d",m*n,n-1);
				flag=0;
			}else{
				printf(" %d %d",m*n,n-1);
			}
		}
	}
	if(flag){
		printf("0 0");
	}
	return 0;
}
