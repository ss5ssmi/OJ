#include<stdio.h>
int dv(int a, int b){
	if(a>b) return a-b;
	else return b-a;
}
int max(int a, int b){
	return a>b?a:b;
}
int min(int a, int b){
	return a<b?a:b;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int xa, ya, xb, yb, xf, yf;
		scanf("%d%d%d%d%d%d", &xa, &ya, &xb, &yb, &xf, &yf);
		int ans = dv(xa, xb) + dv(ya, yb);
		if(xf == xa && xf == xb && yf < max(ya, yb) && yf > min(ya, yb)){
			ans += 2;
		}else if(yf == ya && yf == yb && xf < max(xa, xb) && xf > min(xa, xb)){
			ans+=2; 
		}
		printf("%d\n", ans);
	}
	return 0;
}
