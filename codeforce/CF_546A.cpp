#include<stdio.h>
int main() {
	int k,n,w;
	while(scanf("%d%d%d",&k,&n,&w)!=EOF) {
		int sum=0;
		for(int i=1;i<=w;i++){
			sum+=i*k;
		}
		if(sum>n)
			printf("%d\n",sum-n);
		else
			printf("0\n");
	}
	return 0;
}
