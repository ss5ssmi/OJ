#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(n==1){
			printf("-1\n");
		}else{
			printf("2");
			while(n>1){
				printf("3");
				n--;
			}
			printf("\n");
		}
	}
	return 0;
}
