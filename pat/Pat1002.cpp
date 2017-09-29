#include<stdio.h>
#include<string.h>
int main(){
	char s[110];
	int sum,n[10],flag=1,i;
	while(scanf("%s",&s)!=EOF){
		sum=0;
		for(int i=0;i<strlen(s);i++){
			sum+=s[i]-48;
		}
		for(i=0;sum!=0;i++){
			n[i]=sum%10;
			sum/=10;
		}
		for(i=i-1;i>=0;i--){
			if(n[i]==1){
				printf("yi");
			}else if(n[i]==2){
				printf("er");
			}else if(n[i]==2){
				printf("er");
			}else if(n[i]==3){
				printf("san");
			}else if(n[i]==4){
				printf("si");
			}else if(n[i]==5){
				printf("wu");
			}else if(n[i]==6){
				printf("liu");
			}else if(n[i]==7){
				printf("qi");
			}else if(n[i]==8){
				printf("ba");
			}else if(n[i]==9){
				printf("jiu");
			}else if(n[i]==0){
				printf("ling");
			}
			if(i!=0){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
