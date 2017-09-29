#include<stdio.h>
#include<string.h>
int main(){
	char s[1000];
	while(gets(s)){
		for(int i=0;i<strlen(s);i++){
			if(s[i]>=65&&s[i]<=90){
				s[i]+=32;
			}
		}
		for(int i=0;i<strlen(s);i++){
			printf("%c",s[i]);
		}
		printf("\n");
	}
	return 0;
} 
