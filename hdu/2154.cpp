#include<stdio.h>
int main(){
	int a[1010]={0,0,2};
	int n,i;
	for(i=3;i<=1000;i++){
		a[i]=(a[i-1]+2*a[i-2])%10000;
	}
	while(scanf("%d",&n)!=EOF&&n){
		printf("%d\n",a[n]);
	}
	return 0;
}
