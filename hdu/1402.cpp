#include<stdio.h>
int main(){
	int a,b;
	long long s;
	while(scanf("%d %d",&a,&b)!=EOF){
		s=a*b;
		printf("%lld\n",s);
	}
	return 0;
}
