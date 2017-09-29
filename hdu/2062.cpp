#include<stdio.h>
int main(){
	int n,m,s[n];
	while(scanf("%d%d",&n,&m)!=EOF){
		for(int i=1;i<=n;i++){
			s[i]=i;
		}
		for(int j=m/n;j<=m%n;j++){
			printf("%d ",s[j%n]);
		}
		printf("\n");
	}
	return 0;
}
