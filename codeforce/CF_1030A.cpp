#include<stdio.h>
int main(){
	int n, a, ans = 0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a);
		if(a) ans = 1;
	}
	printf("%s\n", ans?"HARD":"EASY");
	return 0;
} 
