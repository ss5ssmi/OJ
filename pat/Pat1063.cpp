#include<stdio.h>
#include<math.h>
int main(){
	int n,a,b;
	double max=-1;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		if(max<sqrt(fabs(a*a+b*b))){
			max=sqrt(fabs(a*a+b*b));
		}
	}
	printf("%.2lf\n",max);
	return 0;
}
