#include<stdio.h>
int abs(int a){
	return a>0?a:-a;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int x1, y1, x2, y2;
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		if(x1 != x2 && y1 != y2 ){
			printf("%d\n", abs(x1-x2)+abs(y1-y2)+2);
		}else{
			printf("%d\n", abs(x1-x2)+abs(y1-y2));
		}
		
	}
	return 0;
}
