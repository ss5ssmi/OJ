#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int l, r;
		scanf("%d%d", &l, &r);
		if(l%(r+1)<(r+1)/2.0){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	}
	return 0;
} 
