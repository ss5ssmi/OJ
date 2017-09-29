#include<stdio.h>
int main(){
	int t,n,m,sum;
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&m);
			sum+=m;
		}
		printf("%d\n",sum-n+1);	
	}
	return 0;
}
