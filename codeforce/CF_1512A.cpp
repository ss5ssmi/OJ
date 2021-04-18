#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a, b[101]={0}, c[101]={0};
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a);
			b[a]++, c[a] = i+1;
		}
		for(int i=1;i<101;i++){
			if(b[i]==1){
				printf("%d\n", c[i]);
				break;
			}
		}
	}
	return 0;
}
