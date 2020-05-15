#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long x, y, a, b;
		scanf("%lld%lld%lld%lld", &x, &y, &a, &b);
		long long cost1 = 0, cost2 = 0;
		cost1 = a*x + a*y;
		if(x < y){
			cost2 = a*(y-x) + b*x;
		}else{
			cost2 = a*(x-y) + b*y;
		}
		printf("%lld\n", cost1<cost2?cost1:cost2);
	}
	return 0;
}
