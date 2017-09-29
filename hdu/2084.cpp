#include<stdio.h>
int D[101][101];
int *maxSum; 
int max(int a,int b){
	return a>b?a:b;
}
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				scanf("%d",&D[i][j]);
			}
		}
		maxSum=D[n];
		for(int i=n-1;i>=1;i--){
			for(int j=1;j<=i;j++){
				maxSum[j]=max(maxSum[j],maxSum[j+1])+D[i][j];
			}
		}
		printf("%d\n",maxSum[1]);
	}
	return 0;
}
