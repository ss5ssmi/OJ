#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		int cnt=0;
		scanf("%lld", &n);
		while(n>=2050){
			long long num = 2050;
			while(num*10<=n){
				num*=10;
			}
			n-=num;
			cnt++;
		}
		printf("%d\n", n==0?(cnt?cnt:-1):-1);
	}
	return 0;
} 
