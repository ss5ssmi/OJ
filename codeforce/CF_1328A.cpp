#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		printf("%d\n", a%b==0?0:(b-(a%b)));
	}
	return 0;
}
