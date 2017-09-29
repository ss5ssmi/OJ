#include<stdio.h>
#include<math.h>
int main(){
	int t,n,m;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		m=pow(2,n)-1;
		printf("%d\n",m);
	}
	return 0;
}
