#include<stdio.h>
int main(){
	int a[100000];
	int m,n,i,j,t,sum;
	while(scanf("%d%d",&n,&m)!=EOF){
		sum=m+n;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=n;i<sum;i++){
			scanf("%d",&a[i]);
		}
		
		for(i=1;i<sum;i++){
			for(j=0;j<sum-i;j++){
				if(a[j]>a[j+1]){
					t=a[j];a[j]=a[j+1];a[j+1]=t;
				}
			}
		}
		printf("%d",a[0]);
		for(i=1;i<sum;i++){
			if(a[i]==a[i-1]){
				continue;
			}else
				printf(" %d",a[i]);
		}
		printf("\n");
	}
	return 0; 
}
