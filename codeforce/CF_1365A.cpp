#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m, a, r[50] = {0}, c[50] = {0};
		scanf("%d%d", &n, &m);
		int row = n, col = m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d", &a);
				if(a==1){
					r[i] = c[j] = 1;
				}
			}
		}
		for(int i=0;i<n;i++){
			if(r[i]) row--;
		}
		for(int i=0;i<m;i++){
			if(c[i]) col--;
		}
		printf("%s\n", (row>col?col:row)%2==1?"Ashish":"Vivek");
	}
	return 0;
} 
