#include<stdio.h>
int main(){
	int n,k,t;
	int s[100000]={0};
	scanf("%d",&n);
	while(n--){
		scanf("%d",&t);
		s[t]++;
	}
	scanf("%d",&k);
	while(k--){
		scanf("%d",&t);
		printf("%d",s[t]);
		if(k!=0){
			printf(" ");
		}
	}
	return 0;
}
