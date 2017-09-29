#include<stdio.h>
int main(){
	int n,a,i,j;
	int s[500005]={0};
	for(i=1;i<500005;i++){
		for(j=i+i;j<500005;j+=i){
			s[j]+=i;
		}
	}
	scanf("%d",&a);
	while(a--){
			scanf("%d",&n);
			printf("%d\n",s[n]);
	}
	return 0;
} 
