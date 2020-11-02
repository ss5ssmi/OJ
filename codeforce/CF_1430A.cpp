#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(n<7 && n%3!=0 && n%5!=0){
			printf("-1\n");
			continue;
		}
		if(n%7==0){
			printf("0 0 %d\n", n/7);
		}else if(n%5==0){
			printf("0 %d 0\n", n/5);
		}else if(n%3==0){
			printf("%d 0 0\n", n/3);
		}else if(n%7==3 || n%7==6){
			printf("%d 0 %d\n", n%7/3, n/7);
		}else if(n%7==5){
			printf("0 %d %d\n", n%7/5, n/7);
		}else if(n%7==1 || n%7==2){
			printf("%d %d %d\n", n%7, n%7, n/7-(n%7));
		}else{
			printf("2 1 %d\n", (n/7)-1 );
		}
	}
	return 0;
}
