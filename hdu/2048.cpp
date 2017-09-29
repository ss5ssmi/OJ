#include<stdio.h>
int main(){
	int c,n,i;
	double f[21]={0,1};
	for(i=2;i<21;i++){
		f[i]=((i-1)*f[i-1]+f[i-2])/(i*1.0);
	}
	scanf("%d",&c);
	while(c--){
		scanf("%d",&n);
		printf("%.2lf%%\n",(1.0-f[n])*100);
	}
	return 0;
}
