#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j,t;
	int a[100];
	while(scanf("%d",&n)!=EOF&&n){
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				if(abs(a[i])<abs(a[j])){
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			}
		}
		for(i=0;i<n-1;i++){
			printf("%d ",a[i]);
		}
		printf("%d\n",a[n-1]);
	}
	
	return 0;
}
