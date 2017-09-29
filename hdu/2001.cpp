#include<stdio.h>
#include<math.h>
int main(){
	double x1,y1,x2,y2;
	double z;
	while(scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2)!=EOF){
		z=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		printf("%.2lf\n",z);
	}
	return 0;
}
