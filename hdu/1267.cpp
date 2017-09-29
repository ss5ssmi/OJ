#include<stdio.h>
#include<string.h>
int main(){
	__int64 s[21][21];
	int i,j,x,y;
	memset(s,0,sizeof(s));
	for(i=0;i<21;i++){
		s[i][0]=1;
	}
	for(i=1;i<=20;i++){
		for(j=i;j<=20;j++){
			s[j][i]=s[j-1][i]+s[j][i-1];
		}
	}
	while(scanf("%d %d",&x,&y)!=EOF){
		printf("%I64d\n",s[x][y]);
	}
	return 0;
} 
