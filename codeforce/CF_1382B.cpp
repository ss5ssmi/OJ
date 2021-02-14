#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[100000], cnt = 0;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if(a[i] > 1) cnt++;
		}
		if(cnt?cnt%2:1==n%2 || n == 1){
			printf("First\n");
		}else{
			printf("Second\n");
		}
		
	}
	return 0;
}
