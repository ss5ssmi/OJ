#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(n<=6){
			printf("15\n");
		}else if(n%6 == 0){
			printf("%lld\n", n/6 * 15);
		}else if(n%6 == 1 || n%6 == 2){
			printf("%lld\n", ((n/6) - 1) * 15 + 20);
		}else if(n%6 == 3 || n%6 == 4){
			printf("%lld\n", ((n/6) - 1) * 15 + 25);
		}else{
			printf("%lld\n", n/6 * 15 + 15);
		}
	}
	return 0;
} 
