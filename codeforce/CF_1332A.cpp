#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, c, d, x, y, x1, y1, x2, y2;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		scanf("%d%d%d%d%d%d", &x, &y, &x1, &y1, &x2, &y2);
		if( (x-a+b < x1 || x-a+b > x2 || y-c+d < y1 || y-c+d > y2) 
			|| (x==x1 && x==x2 && a!=0 && b!=0) 
			|| (y==y1 && y==y2 && c!=0 && d!=0) ){
			printf("No\n");
		}else{
			printf("Yes\n");
		}
	}
	return 0;
}
