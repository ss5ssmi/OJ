#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[100];
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n;i++){
			if(i%2==0) printf("%d", a[i]>0?-a[i]:a[i]);
			else printf("%d", a[i]>0?a[i]:-a[i]);
			printf("%c", i==(n-1)?'\n':' ');
		}
	}
	return 0;
}
