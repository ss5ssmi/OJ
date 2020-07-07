#include<stdio.h>
int min(int a, int b){
	return a<b?a:b;
}
int max(int a, int b){
	return a>b?a:b;
}
int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int a, b, n;
		scanf("%d%d", &a, &b);
		n = max(min(a,b)*2, max(a,b));
		printf("%d\n", n*n);
	}
	return 0;
} 
