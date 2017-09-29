#include<stdio.h>
#include<math.h>
int main(){
	int n;
	double sum,a,b,h,m,s;
	scanf("%d",&n);
	while(n--){
		scanf("%lf%lf%lf",&h,&m,&s);
		if(h>12){
			h=h-12;
		}
		a=(h+m/60.0+s/60.0/60.0)*30.0;
		b=(m+s/60.0)*6.0;
		sum=fabs(b-a);
		if(sum>180)
			sum=360-sum;
		printf("%d\n",(int)sum);
	}
	return 0;
}
