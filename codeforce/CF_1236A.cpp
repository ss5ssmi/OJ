#include<stdio.h>
int main(){
	int n,a,b,c;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d",&a,&b,&c);
		int one = 0, two = 0;
		two = c/2 > b ? b : c/2;
		one = (b-two)/2 > a ? a : (b-two)/2;
		printf("%d\n", (one + two) * 3);
	}
	return 0;
} 
