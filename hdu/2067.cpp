#include<stdio.h>
int main(){
	int n,i,j,k=1;
	long long a[36][36];
	for(i=0;i<=35;i++){
		a[i][0]=1;
	}
	for(i=1;i<=35;i++){
		for(j=1;j<=35;j++){
			if(j==i)
				a[i][j]=a[i][j-1];
			else
				a[i][j]=a[i][j-1]+a[i-1][j];
		}
	}
	while(scanf("%d",&n)!=EOF&&n!=-1){
		printf("%d %d %lld\n",k++,n,2*a[n][n]);
	}
	return 0;
}
