#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, x[50001]= {0}, a[50001], b[50001];
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%1d", &x[i]);
		}
		int flag = 0;
		for(int i = 0;i<n;i++){
			if(flag){
				if(x[i] == 0){
					a[i] = 0;
					b[i] = 0;
				}else if(x[i] == 1){
					a[i] = 0;
					b[i] = 1;
				}else if(x[i] == 2){
					a[i] = 0;
					b[i] = 2;
				}	
			}else{
				if(x[i] == 0){
					a[i] = 0;
					b[i] = 0;
				}else if(x[i] == 1){
					a[i] = 1;
					b[i] = 0;
					flag = 1;
				}else if(x[i] == 2){
					a[i] = 1;
					b[i] = 1;
				}
			}
		}
		for(int i=0;i<n;i++){
			printf("%d", a[i]);
		}
		printf("\n");
		for(int i=0;i<n;i++){
			printf("%d", b[i]);
		}
		printf("\n");
	}
	return 0;
}
