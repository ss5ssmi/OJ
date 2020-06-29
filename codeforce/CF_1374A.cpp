#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int x, y, n;
		scanf("%d%d%d", &x, &y, &n);
		for(int i=(n/x);i>=0;i--){
			if(x*i+y<=n){
				printf("%d\n", x*i+y);
				break;
			}
		} 
	}
	return 0;
}
