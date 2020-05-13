#include<stdio.h>
int main(){
	int t, k;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &k);
		printf("%d\n", k%2==1?1:2);
	}
	return 0;
} 
