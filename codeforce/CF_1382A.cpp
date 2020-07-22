#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m, k, a[1000], b[1000];
		scanf("%d%d", &n, &m);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<m;i++){
			scanf("%d", &b[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i] == b[j]){
					printf("YES\n1 %d\n", a[i]);
					goto next;
				}
			}
		}
		printf("NO\n");
		next:;
	}
	return 0;
}
