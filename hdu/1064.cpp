#include<stdio.h>
int main(){
	double n[12],sum;
	while(scanf("%lf",&n[0])!=EOF){
		sum=0.0;
		sum+=n[0];
		for(int i=1;i<12;i++){
			scanf("%lf",&n[i]);
			sum+=n[i];
		}
		printf("$%.2lf\n",sum/12);
	}
	return 0;
} 
