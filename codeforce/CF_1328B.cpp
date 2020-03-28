#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k, a, b, cnt = 1;
		scanf("%d%d", &n, &k);
		for(int i=1;i<=n;i++){
			if((cnt+i)>k){
				a = i;
				b = k - cnt;
				break;
			}else{
				cnt+=i;
			}
		}
		for(int i=1;i<=n;i++){
			if(i==(n-a) || i==(n-b)){
				printf("b");
			}else{
				printf("a");
			}
		}
		printf("\n");
	}
	return 0;
} 
