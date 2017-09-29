#include<stdio.h>
#include<math.h>
int main(){
	double x;
	while(scanf("%lf",&x)!=EOF){
		x=fabs(x);
		printf("%.2lf\n",x);
	}
	return 0;
}
