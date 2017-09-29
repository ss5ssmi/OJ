#include<stdio.h>
int main(){
	int n,i,sum;
	while(scanf("%d",&n)!=EOF&&(1<n<30)){
		sum=1;
		for(i=1;i<n;i++){
			sum=(sum+1)*2;
		}
		printf("%d\n",sum);
	}
	return 0;
}
