#include<stdio.h>
#include<algorithm>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[100], b[100];
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%d", &b[i]);
		}
		std::sort(a,a+n);
		std::sort(b,b+n);
		for(int i=0;i<n;i++){
			printf("%d", a[i]);
			if(i==n-1){
				printf("\n");
			}else{
				printf(" ");
			}
		}
		for(int i=0;i<n;i++){
			printf("%d", b[i]);
			if(i==n-1){
				printf("\n");
			}else{
				printf(" ");
			}
		}
	}
	return 0;
}
