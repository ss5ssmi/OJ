#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, cnt = 0;
		scanf("%d", &n);
		while(n>1){
			if(n%6==0) n/=6;
			else if(n%3==0) n*=2;
			else {
				cnt = -1;
				break;
			}
			cnt++;
		}
		printf("%d\n", cnt);
	} 
	return 0;
}
