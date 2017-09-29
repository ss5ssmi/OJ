#include<stdio.h>
int main(){
	int n,sum,i,j;
	while(scanf("%d",&n)!=EOF&&n){
		sum=0;j=1;
		if(n<=4){
			sum=n;
		}else{
			sum=n;
			for(i=n-4;i!=0;i--){
				if(i%4==0){
					j++;
				}
				sum=sum+(i*j);
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
