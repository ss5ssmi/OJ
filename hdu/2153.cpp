#include<stdio.h>
int main(){
	int n,i,j,k;
	while(scanf("%d",&n)!=EOF&&n){
		for(i=1;i<=n;i++){
			printf("%3d",i);
		}
		printf("\n");
		for(i=1;i<n-1;i++){
			for(j=0;j<n;j++){
				if(j==0)
					printf("%3d",4*(n-1)-i+1);
				else if(j==n-1)
					printf("%3d\n",5*(n-1)+2-(4*(n-1)-i)-1);
				else
					printf("   ");
			}
		}
		for(i=0;i<n;i++){
			if(i!=n-1)
				printf("%3d",3*(n-1)+1-i);
			else
				printf("%3d\n",2*n-1); 
		} 
	}
	return 0;
}
