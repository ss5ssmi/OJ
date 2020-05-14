#include<stdio.h>
int cal(int t){
	for(int i=2;i<=t;i++){
		if(t%i==0){
			return i;
		}
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k;
		scanf("%d%d", &n, &k);
		n+=cal(n);
		if(k>1) n+=(k-1)*2;
		printf("%d\n", n);
	}
	return 0;
}
