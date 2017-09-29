#include<stdio.h>
int main(){
	int a,b,i,n,s;
	while(scanf("%d%d",&a,&b)!=EOF&&a>=1&&b<=10000){
		n=a;
		for(i=0;i<b-1;i++){
			n=n*a;
			n=n%1000;
		}
		printf("%d\n",n);
	}
	return 0;
}
