#include<stdio.h>
#include<math.h>
int main(){
	int n;
	double x1,x2,y1,y2,a,b,c,t,angle;
	scanf("%d",&n);
	while(n--){
		scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
		a=sqrt(x1*x1+y1*y1);
		b=sqrt(x2*x2+y2*y2);
		c=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		angle=acos((a*a+b*b-c*c)/(2*a*b))*180/3.1415926;
		printf("%.2lf\n",angle);
	}
	return 0;
}
