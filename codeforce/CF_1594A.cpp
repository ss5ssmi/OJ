#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(n-1 != 0) printf("-");
		printf("%lld %lld\n", n-1, n);
	}
	return 0;
} 
