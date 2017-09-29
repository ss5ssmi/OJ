#include<stdio.h>
int main(){
	int m=0;
	int a=0,b=0,sum1=0,sum2=0,i,j;
	scanf("%d",&m);
	while(m--){
		sum1=sum2=0;
		scanf("%d %d",&a,&b);
		for(i=1;i<a;i++){
			if((i!=a)&&(a%i==0))
				sum1+=i;
		}
		for(j=1;j<b;j++){
			if((j!=b)&&(b%j==0))
				sum2+=j;
		}
		if(sum1==b&&sum2==a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
