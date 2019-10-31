#include<stdio.h>
int main(){
	int q,n,a[100];
	scanf("%d",&q);
	while(q--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int cnt = 0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(a[i]-a[j] == 1 || a[i]-a[j] == -1) cnt++; 
			}
		}
		printf("%d\n",cnt > 0 ? 2 : 1);
	} 
	return 0;
}
