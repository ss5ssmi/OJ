#include<stdio.h>
int main(){
	int t, a, b;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d", &a, &b);
		if(a == b) printf("0\n");
		else if(a > b) printf("%d\n", (a-b)%2?2:1);
		else printf("%d\n", (b-a)%2?1:2);
	}
	return 0;
} 
