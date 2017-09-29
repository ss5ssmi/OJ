#include<stdio.h>
int main(){
	int t;
	long long a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%lld%lld",&a,&b);
		if(a%b==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
