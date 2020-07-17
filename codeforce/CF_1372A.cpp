#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			printf("1%c", i==(n-1)?'\n':' ');
		}
	}
	return 0;
}
