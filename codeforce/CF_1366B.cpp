#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, x, m, l, r, a, b;
		scanf("%d%d%d", &n, &x, &m);
		a=b=x;
		for(int i=0;i<m;i++){
			scanf("%d%d", &l, &r);
			if(b<l || a>r) continue;
			a = a<l?a:l;
			b = b>r?b:r;
		}
		printf("%d\n", b-a+1);
	}
	return 0;
}
