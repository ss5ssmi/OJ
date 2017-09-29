#include<stdio.h>
int main(){
	int n,t,k,i,x[1001],sum;
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d%d",&n,&k);
		for(i=1;i<=n;i++){
			scanf("%d",&x[i]);
		}
		for(i=1;i<=n;i++){
			if(x[i]>x[k]){
				sum++;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
