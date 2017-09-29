#include<stdio.h>
int main(){
	int n,m,i,j,t;
	while(scanf("%d%d",&n,&m)!=EOF&&n&&m){
		int a[100];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
	a[n]=m;
	for(i=0;i<n+1;i++){
		for(j=i+1;j<n+1;j++){
			if(a[i]>=a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(j=0;j<n;j++){
		printf("%d ",a[j]);
	}
	printf("%d\n",a[n]);
	}
	return 0;
}
