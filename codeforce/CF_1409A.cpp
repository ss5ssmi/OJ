#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b;
		scanf("%lld%lld", &a, &b);
		if(a>b){
			if((a-b)%10==0) printf("%lld\n", (a-b)/10);
			else printf("%lld\n", (a-b)/10 + 1); 
		}else if(a<b){
			if((b-a)%10==0) printf("%lld\n", (b-a)/10);
			else printf("%lld\n", (b-a)/10 + 1);
		}else{
			printf("0\n");
		}
	}
	return 0;
} 
