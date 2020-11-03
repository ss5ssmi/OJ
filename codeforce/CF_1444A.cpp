#include<stdio.h>
long long max(long long a, long long b){
	return a>b?a:b;
}
long long div(long long p, long long q, long long t){
	if(t==1) return 1;
	while(p%q==0){
		p/=t;
	}
	return p;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long p, q;
		scanf("%lld%lld", &p, &q);
		if(p%q!=0){
			printf("%lld\n", p);
		}else{
			long long res = 1; 
			for(long long i=1;i*i<=q;i++){
				if(q%i) continue;
				long long n = p;
				res = max(res, div(p, q, i));
				res = max(res, div(p, q, q/i));
			}
			printf("%lld\n", res);
		}
	}
	return 0;
}
