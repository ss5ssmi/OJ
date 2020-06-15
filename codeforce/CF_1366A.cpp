#include<stdio.h>
int min(int a, int b){return a<b?a:b;}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, cnt = 0;
		scanf("%d%d", &a, &b);
		printf("%d\n", min((a+b)/3, min(a, b)));
	}
	return 0;
} 
