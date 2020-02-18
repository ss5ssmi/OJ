#include<stdio.h>
int main(){
	int t, n, d, a[100];
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&d);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(i>0){
				if(d>=(a[i]*i)){
					a[0]+=a[i];
					d-=a[i]*i;
				}else{
					a[0]+=d/i;
					d=0;
				}
			}
		}
		printf("%d\n",a[0]);
	} 
	return 0;
} 
