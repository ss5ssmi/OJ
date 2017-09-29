#include<stdio.h>
int max(int a,int b){
	return a>b?a:b;
}
int main() {
	int n,sum;
	while(scanf("%d",&n)!=EOF) {
		int s[100000]={0};
		int ans=0;
		int sum=1;
		for(int i=0;i<n;i++){
			scanf("%d",&s[i]);
		}
		for(int i=1;i<n;i++){
			if(s[i]>=s[i-1]){
				sum++;
			}else{
				ans=max(sum,ans);
				sum=1;
			}
		}
		ans=max(sum,ans);
		printf("%d\n",ans);
	}
	return 0;
}
