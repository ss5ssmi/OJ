#include<stdio.h>
#include<math.h>
int main(){
	double a,b;
	int c,h=0,m=0,s=0;
	scanf("%lf%lf",&a,&b);
	c=floor((b-a)/100+0.5);
	h=c/3600;
	m=c/60%60;
	s=c%60;
	printf("%02d:%02d:%02d\n",h,m,s);	
	return 0;
}
