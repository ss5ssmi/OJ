#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,n;
	while(scanf("%d%d%d",&a,&b,&c)&&a&&b){
		n=pow(10,c);
		if((a%n)==(b%n)){
			printf("-1\n");
		}else{
			printf("%d\n",a+b);
		}
	} 
	return 0;
} 
