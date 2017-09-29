#include<stdio.h>
int dp[10000];
int max(int a,int b){
	return a>b?a:b;
}
int main(){
	int a[4]={150,200,300};
	int t,i,j,m;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&m);
		for(i=0;i<3;i++){
			for(j=a[i];j<=m;j++){
				dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
			}
		}
		printf("%d\n",m-dp[m]);
	}
	return 0;
} 
