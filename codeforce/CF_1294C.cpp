#include<stdio.h>
int main(){
	int t, n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int a, b, c, flag = 0;
		for(a = 2; a*a <= n && !flag; a++){
			if( n%a != 0) continue;
			for(b = a+1; b*b <= n && !flag; b++){
				if( (n/a)%b != 0 ) continue;
				if( (n/a)%b == 0 && n/a/b >= 2 && n/a/b !=a && n/a/b != b){
					flag = 1;
					printf("YES\n%d %d %d\n", a, b, n/a/b);
				}
			}
		}
		if(!flag) printf("NO\n");
	}
	return 0;
} 
