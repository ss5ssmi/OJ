#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a, b;
		scanf("%d%d%d", &n, &a, &b);
		for(int i=0; i<n;i++){
			printf("%c", 'a' + (i%b));
		}
		printf("\n");
	} 
	return 0;
} 
