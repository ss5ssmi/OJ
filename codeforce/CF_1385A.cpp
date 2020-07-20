#include<stdio.h>
int max(int a, int b){
	return a>b?a:b;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int x, y, z, a, b, c, flag = 1;
		scanf("%d%d%d", &x, &y, &z);
		if(x == y){
			if(x >= z && y >= z){
				printf("YES\n%d %d %d\n", x, z, z);
				flag = 0;	
			}
		}else{
			if(max(x, y) == z){
				printf("YES\n%d %d %d\n", 1, x, y);
				flag = 0;
			}
		}
		if(flag){
			printf("NO\n");
		}
	}
	return 0;
} 
