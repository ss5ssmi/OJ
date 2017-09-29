#include<stdio.h>
int main(){
	int n,i,s[10000];	
	while(scanf("%d",&n)!=EOF){
		i=0;
		while(n){
			s[i++]=n%2;
			n=n/2;
		}
		for(i=i-1;i>=0;i--){
			printf("%d",s[i]);
		}
		printf("\n");
	}
	return 0;
} 
