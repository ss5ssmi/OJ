#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, max=-100,sum = 0; 
		for(int i=0;i<7;i++){
			scanf("%d", &a);
			sum-=a;
			if(a>=max) max=a;
		}
		printf("%d\n", sum+max+max);
	}
	return 0;
}
