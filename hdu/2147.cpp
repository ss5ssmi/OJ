#include<stdio.h>
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF&&n&&m){
		if(n%2==1&&m%2==1){
			printf("What a pity!\n");
		}else{
			printf("Wonderful!\n");
		}
	}
	return 0;
} 
