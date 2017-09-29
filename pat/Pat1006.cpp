#include<stdio.h>
int main(){
	int n,b,s,g,i;
	while(scanf("%d",&n)!=EOF){
		g=n%10;
		s=n/10%10;
		b=n/100%10;
		for(i=0;i<b;i++){
			printf("B");
		}
		for(i=0;i<s;i++){
			printf("S");
		}
		for(i=0;i<g;i++){
			printf("%d",i+1);
		}
		printf("\n");
	}
	return 0;
} 
