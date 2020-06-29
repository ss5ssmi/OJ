#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i=n;i>0;i--){
			for(int j=i-1;j>=(i/2);j--){
				if(i%j==0){
					printf("%d\n", j);
					goto next;
				}
			}
		}
		next:;
	}
	return 0;
}
