#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n, a[100], even = 0, odd = 0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if(a[i]%2) odd++;
			else even++;
		}
		if(even < 1 && odd < 2){
			printf("-1\n");
		}else if(even > 0){
			printf("1\n");
			for(int i=0;i<n;i++){
				if(a[i]%2==0){
					printf("%d\n", i+1);
					break;
				}
			}
		}else if(odd > 1){
			int cnt = 2;
			printf("2\n");
			for(int i=0;i<n && cnt;i++){
				if(a[i]%2==1){
					cnt--;
					printf("%d", i+1);
					printf("%c", cnt?' ':'\n');	
				}
			}
		}
	}
	return 0;
}
