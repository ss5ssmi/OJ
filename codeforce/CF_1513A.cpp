#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k;
		scanf("%d%d", &n, &k);
		if(2*k>=n){
			printf("-1\n");
		}else{
			for(int i=0, a=1, b=n; i<n; i++) {
				if(i%2==0){
					printf("%d", a++); 
				}else{
					if(k-->0) printf("%d", b--);
					else printf("%d", a++);
				}
				printf("%c", i==n-1?'\n':' ');
			}
		}
	}
	return 0;
} 
