#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int h, n, m;
		scanf("%d%d%d", &h, &n, &m);
		while(h>20 && n){
			h = (h/2)+10;
			n--;
		}
		while(h>0 && m){
			h -= 10;
			m--;
		}
		printf("%s\n", h>0?"NO":"YES");
	}
	return 0;
} 
