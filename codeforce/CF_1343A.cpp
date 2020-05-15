#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, cnt = 1;
		scanf("%d", &n);
		for(int i=2;i<n;i++){
			cnt += pow(2, i-1);
			if(n%cnt==0){
				printf("%d\n", n/cnt);
				break;
			} 
		}
	}
	return 0;
} 
