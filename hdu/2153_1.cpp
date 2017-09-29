#include<stdio.h>
#include<string.h>
int main(){
	int a[11][11];
	int n,i,j,t;
	while(scanf("%d",&n)!=EOF&&n){
		i=j=1;
		t=0;
		memset(a,0,sizeof(a));
		while(j<=n){
			a[i][j++]=++t;
		}j=j-1;
		while(++i<=n){
			a[i][j]=++t;
		}i=i-1;
		while(--j>=1){
			a[i][j]=++t;
		}j=j+1;
		while(--i>1){
			a[i][j]=++t;
		}
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(a[i][j]==0)
					printf("   ");
				else
					printf("%3d",a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
