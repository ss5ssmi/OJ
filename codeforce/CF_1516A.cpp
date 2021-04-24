#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k, a[100];
		scanf("%d%d", &n, &k);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n-1;i++){
			if(k>=a[i]){
				k-=a[i];
				a[n-1]+=a[i];
				a[i]-=a[i];
			}else{
				a[i]-=k;
				a[n-1]+=k;
				k-=k;
				break;
			}
		}
		for(int i=0;i<n;i++){
			printf("%d", a[i]);
			printf("%c", i==n-1?'\n':' ');
		}
	}
	return 0;
}
