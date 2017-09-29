#include<stdio.h>
int main(){
	int n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",2+3*n*(n-1)); 
	} 
	return 0;
}
