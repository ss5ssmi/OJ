#include<stdio.h>
#include<string.h>
int main(){
	char w[80];
	int i,j,k=1;
	memset(w,0,sizeof(w));
	while(gets(w)){
		for(i=strlen(w)-1;i>=0;i--){
			if(i==0){
				k=0;
			}
			if(w[i]==' '||i==0){
				for(j=i+k;w[j]!=' '&&w[j]!='\0';j++){
					printf("%c",w[j]);
				}
				if(k){
					printf(" ");
				} 
				i--;
			}
		}
		printf("\n");
	}
	return 0;
}
