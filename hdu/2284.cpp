#include<stdio.h>
#include<limits.h>
long long f(long long n){
	long long i;
	for(i=n;i>0;i--){
		n*=i;
	}
	return n;
}
int main(){
	long long n,m,sum;
	while(scanf("%lld%lld",&n,&m)!=EOF){
		sum=f(n)/(f(m)*f(n-m));
		if(sum<INT_MAX){
			printf("%lld\n",sum);
		}else{
			printf("Where is hero from?\n");
		}
	}
	return 0;
}
