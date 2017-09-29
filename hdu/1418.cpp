#include<stdio.h>
int main(){
	long long  n,m;
	while(scanf("%lld%lld",&n,&m)&&n&&m){
		printf("%lld\n",n+m-2);
	}
	return 0;
} 
