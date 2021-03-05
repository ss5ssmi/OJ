#include<stdio.h>
long long min(long long a, long long b){
	return a>b?b:a; 
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long p, a, b, c;
		scanf("%lld%lld%lld%lld", &p, &a, &b, &c);
		long long aa, bb, cc;
		aa = p<a? a-p : p%a==0? 0 : ((p/a)+1) * a - p ;
		bb = p<b? b-p : p%b==0? 0 : ((p/b)+1) * b - p ;
		cc = p<c? c-p : p%c==0? 0 : ((p/c)+1) * c - p ;
		printf("%lld\n", min(aa, min(bb, cc)));
	}
	return 0;
}
