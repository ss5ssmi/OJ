#include<stdio.h>
#define PI 3.1415927
int main(){
	double r,s;
	while(scanf("%lf",&r)!=EOF){
		s=4/3.0*PI*r*r*r;
		printf("%.3lf\n",s);
	}
	return 0;
}
