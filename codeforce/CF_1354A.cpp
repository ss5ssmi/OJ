#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b, c, d;
		scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
		if(a>b && c<=d){
			printf("-1\n");
		}else if(a<=b){
			printf("%lld\n", b);
		}else{
			if((a-b)%(c-d)){
				printf("%lld\n", ((((a-b)/(c-d))+1)*c) + b );
			}else{
				printf("%lld\n", (((a-b)/(c-d))*c) + b );
			}
		}
	}
	return 0;
}
