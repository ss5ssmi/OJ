#include<stdio.h>
int main(){
	int n;
	double sum;
	while(scanf("%d",&n)!=EOF&&n){
		sum=0;
		for(int i=1;i<=n;i++){
			sum+=(n+1-i)*1.0/i;
		}
		sum=sum*2;
		sum=sum-n;
		printf("%.2lf\n",sum);
	}
	return 0;
}
