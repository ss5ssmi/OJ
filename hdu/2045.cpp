#include<stdio.h>
int main(){
	int n,i;
	double a[50]={3,6,6};
	for(i=3;i<50;i++)
		a[i]=a[i-1]+a[i-2]*2;
	while(scanf("%d",&n)!=EOF&&n){
		printf("%.lf\n",a[n-1]);
	}
	return 0;
}

