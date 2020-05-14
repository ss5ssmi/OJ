#include<stdio.h>
int main(){
	int t, cost[30000] = {0};
	scanf("%d", &t);
	for(int i=1;i<30000;i++){
		cost[i] = cost[i-1] + i-1 + (2*i);
	}
	while(t--){
		int n, cnt = 0;
		scanf("%d", &n);
		while(n>1){
			for(int i=29999;i>0;i--){
				if(cost[i] <= n){
					n-=cost[i];
					cnt++;
					i+=1;
				}
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}

