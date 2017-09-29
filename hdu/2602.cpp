#include<stdio.h>
#include<string.h>
int dp[1001][1001];
int max(int x,int y){
	if(x>y) return x;
	else return y;
}
int main(){
	int t,n,v;
	int vo[1001],va[1001];
	scanf("%d",&t);
	while(t--){
		memset(dp,0,sizeof(dp));
		scanf("%d%d",&n,&v);
		for(int i=1;i<=n;i++){
			scanf("%d",&va[i]);
		}
		for(int i=1;i<=n;i++){
			scanf("%d",&vo[i]);
		}
		for(int i=1;i<=n;i++){
			for(int j=v;j>=0;j--){
				if(j>=vo[i]) dp[i][j]=max(dp[i-1][j],dp[i-1][j-vo[i]]+va[i]);
				else dp[i][j]=dp[i-1][j];
			}
		}
		printf("%d\n",dp[n][v]);
	}
	return 0;
}
