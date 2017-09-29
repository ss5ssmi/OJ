#include<stdio.h>
int main(){
	int n,a[100],b[100],i,j,t,ca,cb;
	while(scanf("%d",&n)!=EOF&&n){
		ca=cb=0;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				if(a[i]>a[j]){
					t=a[i];
					a[i]=a[j];
					a[j]=t;	
				}
			}
		}
		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				if(b[i]>b[j]){
					t=b[i];
					b[i]=b[j];
					b[j]=t;	
				}
			}
		}
		for(i=0;i<n;i++){
			if(a[i]>b[i]){
				ca+=2;
			}else if(a[i]==b[i]){
				ca+=1;cb+=1;
			}else{
				cb+=2;
			}
		}
		printf("%d vs %d\n",ca,cb);
	}
	return 0;
}
