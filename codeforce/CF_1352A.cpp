#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, s, cnt = 0, len = 0;
		scanf("%d", &n);
		
		s = n;
		while(s){
			if(s%10) cnt++;
			s/=10;
		}
		printf("%d\n", cnt);
		
		s = n;
		while(s){
			if(s%10){
				printf("%d", s%10);
				for(int i = 0; i<len; i++){
					printf("0");
				}
				printf(" ");
			}
			s/=10;
			len++;
		}
		printf("\n");
	}
	return 0;
} 
