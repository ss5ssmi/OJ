#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[100], b[51] = {0};
		scanf("%d", &n);
		for(int i=0;i<2*n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<2*n;i++){
			if(b[a[i]] == 0){
				printf("%d ", a[i]);
				b[a[i]] = 1;
			}
		}
		printf("\n");
	}
	return 0;
} 
