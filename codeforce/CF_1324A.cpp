#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[100], odd = 0, even = 0;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if(a[i]%2) odd++;
			else even++;
		}
		if(odd && even){
			printf("NO\n");
			continue;
		}
		printf("YES\n");
	}
	return 0;
} 
