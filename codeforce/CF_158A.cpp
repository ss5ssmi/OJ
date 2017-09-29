#include<stdio.h>
int main(){
	int n,k,sn,s[51],count=0;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&s[i]);
	}
	for(int i=1;i<=n;i++){
		if(s[i]>=s[k] && s[i]>0)
			count++;
	}
	printf("%d\n",count);
	return 0;
} 
