#include<stdio.h>
int main(){
	int n,t,i;
	long long s[31];
	s[1]=1;
	s[2]=3;
	for(i=3;i<=30;i++){
		s[i]=s[i-1]+2*s[i-2];
	}
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%lld\n",s[n]);
	}
	return 0;
} 
