#include<stdio.h>
double f(int n){
	int i;
	double m=1;
	for(i=1;i<=n;i++){
		m*=i;
	}
	return 1/m;
}
int main(){
//	int i;
//	double e[10];
//	e[0]=1;
//	e[1]=2;
//	e[2]=2.5;
//	printf("n e\n");
//	printf("- -----------\n");
//	printf("0 1\n");
//	printf("1 2\n");
//	printf("3 2.5\n");
//	for(i=3;i<10;i++){
//		e[i]=e[i-1]+f(i);
//		printf("%d %.9lf\n",i,e[i]);
//	}
printf("n e\n");
printf("- -----------\n");
printf("0 1\n1 2\n2 2.5\n");
printf("3 2.666666667\n");
printf("4 2.708333333\n");
printf("5 2.716666667\n");
printf("6 2.718055556\n");
printf("7 2.718253968\n");
printf("8 2.718278770\n");
printf("9 2.718281526\n");
	return 0;
} 
