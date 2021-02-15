#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, d, a[100];
		scanf("%d%d", &n, &d);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		int flag = 0;
		for(int i=0;i<n;i++){
			if(a[i]>d){
				flag = 1;
				break;
			} 
		}
		for(int i=0;i<n-1 && flag;i++){
			for(int j=i+1;j<n && flag;j++){
				if(a[i]+a[j]<=d){
					flag = 0;
				}
			}
		}
		if(flag) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
