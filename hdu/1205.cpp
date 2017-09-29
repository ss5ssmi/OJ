#include<stdio.h>
int main(){
	int t,n,i,max;
	long long sum,m;
	scanf("%d",&t);
	while(t--){
		sum=0;max=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%lld",&m);
			sum=sum+m;
			if(m>max)
				max=m;
		}
		sum=sum-max+1;
		if(sum>=max){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}
