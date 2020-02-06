#include<stdio.h>
int main(){
	int n,t;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&t);
		int tmp = t / 2;
		if(t%2==0){
			while(tmp--) printf("1");
			printf("\n");
		}else{
			tmp--;
			printf("7");
			while(tmp--) printf("1");
			printf("\n");
		}
	}
	return 0;	
}
