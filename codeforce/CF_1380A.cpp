#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, p[1000]; 
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &p[i]);
		}
		for(int i=1;i<(n-1);i++){
			int flag = -1;
			for(int j=i+1;j<n;j++){
				if(p[j] < p[i]){
					flag = j;
					break;
				}
			}
			if(flag>-1){
				for(int j=i-1;j>=0;j--){
					if(p[j] < p[i]){
						printf("YES\n%d %d %d\n", j+1, i+1, flag+1);
						goto next;
					}
				}
			}
		}
		printf("NO\n");
		next:;
	}
	return 0;
} 
