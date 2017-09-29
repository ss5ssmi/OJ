#include<stdio.h>
int main(){
	int t,m;
	scanf("%d",&t);
	int a[31]={0,1,3,5};
	for(int i=4;i<=30;i++){
		a[i]=a[i-1]+2*a[i-2];
	}
	while(t--){
		scanf("%d",&m);
		printf("%d\n",a[m]);
	}
	return 0;
} 
