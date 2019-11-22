#include<stdio.h>
int main(){
	int n;
	long long x,y;
	scanf("%d",&n);
	while(n--){
		scanf("%lld%lld",&x,&y);
		if(x-y == 1){
			printf("NO\n");	
		}else{
			printf("YES\n");	
		}
	} 
	return 0;
}
