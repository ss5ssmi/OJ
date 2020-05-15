#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a, b, c, d;
		scanf("%d%d%d%d%d", &n, &a, &b, &c, &d);
		if( (n*(a+b) < c-d) || (n*(a-b) > c+d) ){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	}
	return 0;
}
