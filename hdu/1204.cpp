#include<stdio.h>
int main(){
	int n,m;
	float p,q;
	while(scanf("%d%d%f%f",&n,&m,&p,&q)!=EOF){
		printf("%.2f\n",p+(n*p)-(m*q));
	}
	return 0;
}
