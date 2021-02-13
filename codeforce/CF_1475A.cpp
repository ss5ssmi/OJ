#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		bool flag = false; 
		scanf("%lld", &n);
		while(n>1){
			if(n%2){
				flag = true;
				break;
			}else{
				n/=2;
			}
		}
		printf("%s\n", flag?"YES":"NO");
	}
	return 0;
}
