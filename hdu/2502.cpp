#include<stdio.h>
#include<math.h>
int main(){
	int t,n;
	long long s;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		s=pow(2,n-1)*(n+1)/2;
		printf("%lld\n",s);
	}
	return 0;
}
