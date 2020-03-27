#include<stdio.h>
int main(){
	int n, l=36000;
	while(scanf("%d", &n)!=EOF){
		int ans[36000] = {0};
		ans[0] = 1;
		for(int i=1;i<=n;i++){
			int t = 0;
			for(int j=0;j<l;j++){
				int next = (ans[j]*i)/10;
				ans[j] = (((ans[j]*i)%10) + t);
				t = next + (ans[j]/10);
				ans[j]%=10;
			}
		}
		int flag = 0;
		for(int i=l-1;i>=0;i--){
			if(ans[i]>0 || flag){
				printf("%d",ans[i]);
				flag = 1;
			}
		}
		printf("\n");
	}
	return 0;
}
