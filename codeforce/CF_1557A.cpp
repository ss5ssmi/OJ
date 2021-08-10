#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a, max = -1e9;
		long long sum = 0;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a);
			sum += a;
			if(a>max) max = a;
		}
		printf("%.9lf\n", ((sum-max)*1.0)/((n-1*1.0)) + max );
	} 
	return 0;
} 
