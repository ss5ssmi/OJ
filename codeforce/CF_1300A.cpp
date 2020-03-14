#include<stdio.h>
int main(){
	int t,n,a[100];
	scanf("%d",&t);
	while(t--){
		int cnt = 0,ans = 0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i] == 0){
				a[i] += 1;
				ans += 1;
			}
			cnt += a[i];
		}
		if(cnt == 0){
			ans += 1;
		}
		printf("%d\n",ans);
	}
	return 0;
} 
