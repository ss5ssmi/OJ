#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i=1;i<=n;i++){
			printf("%d ", i);
			for(int j=0;j<2;j++){
				printf("%d ", i+j+n+i-1);
			}
		}
	}
	return 0;
}
