#include<stdio.h>
int main(){
	int n,m,i,j,k;
	while(scanf("%d%d",&n,&m)!=EOF){
		for(i=0;i<n+2;i++){
			if(i==0&&i==n+1){
				for(j=0;j<m+2;j++){
					if(j==0||j==m+1){
						printf("+");
					}
					else{
						printf("-");
					}
				}
			}
			else{
				for(k=0;k<m+2;k++){
					if(k==0||k==k+1){
						printf("|");
					}
					else{
						printf(" ");
					}
				}
			}
			printf("\n");
		}
	}
	return 0;
}

