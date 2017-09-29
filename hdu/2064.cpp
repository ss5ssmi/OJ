#include<stdio.h>
int main(){
	int n,i;
	long long s[100];
	s[1]=2;
	while(scanf("%d",&n)!=EOF){
		for(i=2;i<=n;i++){
			s[i]=3*s[i-1]+2;
		}
		printf("%lld\n",s[n]);
	}
	return 0;
}
