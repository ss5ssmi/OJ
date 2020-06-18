#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[40], odd = 0, cnt = 0;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			odd += a[i]%2;
			if(i%2 != a[i]%2) cnt++;
		}
		if(odd != (n/2)){
			printf("-1\n");
			continue;
		}
		printf("%d\n", cnt/2);
	}
	return 0;
}
