#include<stdio.h>
int main(){
	__int64 n,m;
	int i;
	while(scanf("%d%d",&n,&m)!=EOF&&n&&m){
		for(i=1;i<=n;++i){
			if(m%2) break;
			m=m/2;
		}
		printf("%d\n",i);
	}
	return 0;
}
