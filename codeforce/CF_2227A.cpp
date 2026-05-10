#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int x,y;
		scanf("%d %d", &x, &y);
		printf("%s\n", x%2+y%2>1?"NO":"YES");
	}
	return 0;
} 
