#include<stdio.h>
#include<string.h>
int main(){
	int s[100001],n;
	memset(s,0,sizeof(s));
	while(scanf("%d",&n)!=EOF){
		for(int i=1;i<=n;i++){
			for(int j=0;j<=100;j+=i){
				if(s[j]==0){
					s[j]=1;
				}else{
					s[j]=0;
				}
			}
//			for(int k=1;k<=5;k++){
//				printf("%d ",s[k]);
//			}
//			printf("\n");
		}
		if(s[n]==1){
			printf("1\n");
		}else{
			printf("0\n");
		}
		memset(s,0,sizeof(s));
	}
	return 0;
}
