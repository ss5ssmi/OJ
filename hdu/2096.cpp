#include<stdio.h>
int main(){
	int t,a,b,s;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		s=a%100+b%100;
		printf("%d\n",s%100);
	}
	return 0;
}
