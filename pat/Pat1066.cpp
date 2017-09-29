#include<stdio.h>
int main(){
	int m,n,a,b,c;
	int s[500][500];
	scanf("%d%d%d%d%d",&m,&n,&a,&b,&c);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&s[i][j]);
		} 
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(s[i][j]<=b && s[i][j]>=a){
				printf("%03d",c);
			}else{
				printf("%03d",s[i][j]);
			}
			if(j!=n-1){
				printf(" ");
			}
		}printf("\n");
	}
	return 0;
} 
