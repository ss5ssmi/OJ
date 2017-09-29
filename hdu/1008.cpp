#include<stdio.h>
int main(){
	int sum,n,a[101],i;
	while(scanf("%d",&n)!=EOF&&n){
		a[0]=0;
		sum=5*n;
		for(i=1;i<=n;i++){
			scanf("%d",&a[i]);
			if(a[i]>a[i-1]){
				sum+=6*(a[i]-a[i-1]);
			}else{
				sum+=4*(a[i-1]-a[i]);
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
