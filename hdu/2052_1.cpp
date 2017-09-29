#include<stdio.h>
int main(){
	int n,m,i,j,x,y;
	while(scanf("%d%d",&n,&m)!=EOF){
		i=m;j=x=y=n;
		printf("+");
		while(x--){
			printf("-");
		}
		printf("+\n");
		while(i--){
			j=n;
			printf("|");
			while(j--){
				printf(" ");
			}
		printf("|\n");
		}
		printf("+");
		while(y--){
			printf("-");
		}
		printf("+\n\n");
	}
	
	return 0;
}
