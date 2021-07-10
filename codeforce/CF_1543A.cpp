#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b;
		scanf("%lld%lld", &a, &b);
		long long l = a>b?a:b, r = a<b?a:b;
		
		if(a==b || (a==0 || b==0)){
			printf("%lld 0\n", l-r);
			continue;
		}
		long long c1 = r%(l-r), c2 = l-r-c1;
		long long c3 = l%(l-r), c4 = l-r-c3;
		long long cl = c1<c2?c1:c2, cr = c3<c4?c3:c4;
		printf("%lld %lld\n", l-r, cl<cr?cl:cr);
	}
	return 0;
} 
