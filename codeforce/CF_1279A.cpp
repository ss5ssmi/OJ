#include<stdio.h>
int main(){
	int t, r, g, b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d", &r, &g, &b);
		if(r-g-b>1 || g-r-b>1 || b-r-g>1) printf("No\n");
		else printf("Yes\n");
	}
	return 0;
}
