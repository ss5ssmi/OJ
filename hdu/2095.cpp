#include<stdio.h>
int main(){
	int n,x,y;
	while(scanf("%d",&n)!=EOF&&n){
		y=0;
		while(n--){
			scanf("%d",&x);
			y^=x;
		}
		printf("%d\n",y);
	}
	return 0;
}
