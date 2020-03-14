#include<stdio.h>
int main(){
	int t,s;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&s);
		int cnt = 0;
		while(s > 9){
			int v = s / 10;
			cnt += v * 10;
			s -= v * 10;
			s += v;
		}
		cnt += s;
		printf("%d\n",cnt);
	}
	return 0;
} 
