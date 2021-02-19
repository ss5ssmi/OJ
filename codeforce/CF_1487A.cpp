#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[100], min = 1e9, cnt = 0;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if(a[i] < min){
				min = a[i];
				cnt=1;
			}else if(a[i] == min){
				cnt++;
			}
		}
		printf("%d\n", n-cnt);
	}
	return 0;
}
