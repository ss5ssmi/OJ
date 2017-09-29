#include<stdio.h>
int main(){
int sum[56],n,i;
	sum[1]=1;sum[2]=2;sum[3]=3;sum[4]=4;
	for(i=5;i<56;i++){
		sum[i]=sum[i-3]+sum[i-1];
	}
	 while(scanf("%d",&n)&&n)
    {
        printf("%d\n",sum[n]);
    }
	return 0;
}
