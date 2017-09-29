#include<stdio.h>
int main(){
	char a,b,c;
	double x;
	int y;
	scanf("%c%lf",&a,&x);
	if(a=='+'){
		printf("%lf",x);
	}else{
		printf("%c%lf",a,x);
	}
	return 0;
}
