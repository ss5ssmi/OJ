#include<stdio.h>
int main(){
	int n,i,j,a[31][31]={0};
	while(scanf("%d",&n)!=EOF&&(n>=1&&n<=30)){
		a[0][0]=1;
		for(i=1;i<=n;i++){
			for(j=1;j<=i;j++){
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
			for(j=1;j<i;j++){
				printf("%d ",a[i][j]);
			}printf("%d\n",a[i][j]);
		}
		printf("\n");		
	}
	return 0;
}
