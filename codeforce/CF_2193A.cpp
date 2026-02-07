#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int sum = 0, n, s, x, a;
		scanf("%d%d%d", &n,&s,&x);
		for(int i=0; i<n; i++){
			scanf("%d", &a);
			sum+=a;
		}
		if((s-sum)%x || sum>s) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
} 
