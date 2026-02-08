#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, p[200000], l=-1, r=-1;
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &p[i]);
			if(p[i] != n-i && l<0) l = i;
		}
		for(int i = 0; i<n; i++){
			if(p[i] == n-l && r<0) r = i;
		}
		for(int i=0; i<n; i++){
			if(i>=l && i<=r && l>=0 && r>=0){
				printf("%d ", p[r-i+l]);
			}else{
				printf("%d ", p[i]); 
			}
		}
		printf("\n");
	}
	return 0;
} 
