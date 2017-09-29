#include<stdio.h>
int main(){
	int a,b,sum,d,s[1000]={0},i=0;
	while(scanf("%d%d%d",&a,&b,&d)!=EOF){
		sum=a+b;
		if(sum==0){
			printf("0\n");
			return 0;
		}
		while(sum){
			s[i++]=sum%d;
			sum/=d;
		}
		for(i-=1;i>=0;i--){
			printf("%d",s[i]);
		}
		printf("\n");
	}
	return 0;
}
