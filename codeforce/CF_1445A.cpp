#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, x, a[50], b[50], flag = 1;
		scanf("%d%d", &n, &x);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%d", &b[i]);
			
		}
		for(int i=0;i<n;i++){
			if(a[i] + b[n-i-1] > x){
				flag = 0;
				break;
			}
		}
		printf("%s\n", flag?"Yes":"No");
	}
	return 0;
} 
