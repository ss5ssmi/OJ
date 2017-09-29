#include<stdio.h>
int main(){
	long long a,b;
	int t,i;
	scanf("%d",&t);
	while(t--){
		i=0;
		scanf("%lld%lld",&a,&b);
		printf("Case %d:\n",++i);
		printf("%lld + %lld = %lld\n\n",a,b,a+b);
	}
	return 0;
}
