#include<stdio.h>
#include<math.h>
int f(long long n){
	int sum=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)	return 0;
	}
	return 1;
}
int main(){
	long long n;
	long long sum;
	while(scanf("%lld",&n)!=EOF){
		sum=0;
		for(int i=2;i<=n;i++){
			if(f(i)) sum++;
		}
		printf("%lld\n",sum);
	}
	return 0;
} 
