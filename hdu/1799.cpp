#include<stdio.h>
#include<string.h>
int s[2001][2001];
int main(){
	int t,m,n,i,j;
	memset(s,0,sizeof(s));
	for(i=1;i<=2000;i++){
		s[1][i]=i%1007;
		s[i][i]=1;
	}
	for(i=2;i<=2000;i++){
		for(j=i+1;j<=2000;j++){
			s[i][j]=(s[i-1][j-1]+s[i][j-1])%1007;
		}
	}
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&m,&n);
		printf("%d\n",s[m][n]);
	}
	return 0;
}
