#include<stdio.h>
#include<string.h> 
int main(){
	int n,i,j;
	__int64 m[1001],sum;
	while(scanf("%d",&n)!=EOF&&n){
		sum=0;
		for(i=1;i<=n;i++){
			scanf("%I64d",&m[i]);
		}
		for(i=n;i>=1;i--){
			sum+=m[i];
			for(j=i-1;j>0;j--){
				m[j]+=m[i];
			}
		}
		printf("%I64d\n",sum);
	}
	return 0;
}
