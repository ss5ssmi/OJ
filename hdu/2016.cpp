#include<stdio.h>
int main(){
    int n,a[100],i,k,t;
    int min;
    while(scanf("%d",&n)!=EOF&&n){
		min=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
        	if(a[min]>=a[i]){
					min=i;
			}
		}
		t=a[0];a[0]=a[min];a[min]=t;
        for(k=0;k<n-1;k++){
            printf("%d ",a[k]);
        }
        printf("%d\n",a[n-1]);
    } 
    return 0;
}
