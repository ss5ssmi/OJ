#include<stdio.h>
int main(){
	int c1[10001],c2[10001];
	int s,i,j,k;
	while(scanf("%d",&s)!=EOF){
		for(i=0;i<=s;i++){
			c1[i]=1;
			c2[i]=0;
		}
		for(i=2;i<=s;++i){
			for(j=0;j<=s;++j)
				for(k=0;k+j<=s;k+=i){
					c2[j+k]+=c1[j];
				}
			for(j=0;j<=s;++j){
				c1[j]=c2[j];
				c2[j]=0;
			}
		}
		printf("%d\n",c1[s]);
	}
	return 0;
}
