#include<stdio.h>
int main(){
	int t,n;
	int a,b,c;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		a=n/2;
		b=(n-a)*2/3;
		c=n-a-b;
		if(a%10!=0){
			a=a/10+1;
		}else{
			a=a/10;
		}
		if(b%10!=0){
			b=b/10+1;
		}else{
			b=b/10;
		}
		if(c%10!=0){
			c=c/10+1;
		}else{
			c=c/10;
		}
		printf("%d\n",a+b+c);
	}
	return 0;
}
