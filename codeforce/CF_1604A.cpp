#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[100] = {0},m = 1, cnt = 0;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if(a[i] > m) {
				cnt+= a[i] - m;
				m += a[i] - m;
			}
			m++;
		}
		printf("%d\n", cnt);
	}
	return 0;
} 
