#include<stdio.h>
int main(){
	double max,m;
	int n,t,i,j;
	scanf("%d",&n);
	while(n--){
		max=0.0;
		scanf("%d",&t);
		for(i=0;i<t;i++){
			scanf("%lf",&m);
			if(m>max){
				max=m;
			}
		}
		printf("%.2lf\n",max);
		max=0.0;
	}
	return 0;
} 
