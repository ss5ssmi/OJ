#include<stdio.h>
#include<string.h>
int main(){
	char s[1000];
	int i,j;
	while(gets(s)){
		j=0;
		for(i=0;i<strlen(s);i++){
			if(s[i]=='5'){
				printf(" ");
				i+=1;
			}else{
				printf("%d",s[i]);
			}
		}
	} 
	return 0;
}
