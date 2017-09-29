#include<stdio.h>
int main(){
	int n,t,i;
	long long s[21]={0,2};
	scanf("%d",&n);
	while(n--){
		scanf("%d",&t);
		for(i=2;i<=t;i++){
			s[i]=3*s[i-1]+2;
		}
		printf("%lld\n",s[t-1]+2);
	}
	return 0;
}
