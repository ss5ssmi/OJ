#include<stdio.h>
int main(){
	int n;
	double a,sum;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lf",&a);
		sum+=a*(n-i)*(i+1);
	}
	printf("%.2lf\n",sum);
	return 0;
}
