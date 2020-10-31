#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int x, cnt = 0, i = 1;
		scanf("%d", &x);
		cnt += ((x%10)-1) * 10;
		while(x){
			x/=10;
			cnt += i++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
