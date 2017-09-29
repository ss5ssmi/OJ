#include<stdio.h>
int main(){
	int n,m,t,i,s,min,sum;
	scanf("%d",&t);
	while(t--){
		sum=0;
		min=100;
		scanf("%d%d",&n,&m);
		for(i=1;i<=n;i++){
			scanf("%d",&s);
			if(s<min)
				min=s;
		}
		sum=(100-min)*(100-min);
		printf("%d\n",sum);
	}
	return 0;
}
