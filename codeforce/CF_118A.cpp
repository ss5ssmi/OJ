#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	scanf("%s",&s);
	for(int i=0;i<strlen(s);i++){
		if(s[i] == 'A' || s[i] == 'O'|| s[i] == 'Y'|| s[i] == 'E'|| s[i] == 'U'|| s[i] == 'I' 
		|| s[i] == 'a'|| s[i] == 'o'|| s[i] == 'y'|| s[i] == 'e'|| s[i] == 'u'|| s[i] == 'i'){
			continue;
		}else{
			if(s[i] <= 'Z'){
				printf(".%c",s[i]+32);
			}else{
				printf(".%c",s[i]);
			}
		}
	}
	return 0;
}
