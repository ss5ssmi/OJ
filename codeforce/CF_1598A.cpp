#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, ans = 1;
		char  a[2][101] = {0};
		scanf("%d", &n);
		for(int i=0;i<2;i++){
			scanf("%s", &a[i]);
		}
		for(int i=0;i<n;i++){
			if(a[0][i] == '1' && a[1][i] == '1'){
				ans = 0;
				break;
			}
		} 
		printf("%s\n", ans?"YES":"NO");
	}
	return 0;
} 
