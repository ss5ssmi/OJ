#include<stdio.h>
int max(int a, int b){return a>b?a:b;}
int main(){
	int n, b[200001];
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d", &b[i]);
	}
	int num = 0;
	for(int i=1;i<=n;i++){
		printf("%d", b[i] + num);
		num = max(b[i] + num, num);
		printf("%c", i==n?'\n':' ');
	}
	return 0;
}
