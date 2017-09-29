#include<stdio.h>
int main(){
	int n,a,b,i;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		long long c=1;
		for(i=b;i<a;i++){
			c=c*2;
		}
		printf("%lld\n",c);
	}
	return 0;
} 
