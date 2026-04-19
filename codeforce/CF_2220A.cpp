#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[200]={0};
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]<a[j]){
					int tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
				if(a[i]==a[j]){
					goto end;
				}
			}
		}
		if(a[0]!=a[1]){
		for(int i=0;i<n;i++){
			printf("%d ", a[i]);
		}printf("\n");}
		else{
		end:	printf("-1\n");
		}
	}
	return 0;
}
