#include<stdio.h>
int main(){
	int n,c;
	scanf("%d",&c);
	while(c--){
		scanf("%d",&n);
		printf("%d",2*n*n-n+1);
	}
	return 0;
}
