#include<stdio.h>
#include<string.h>
char a[100],b[100];
void tolower(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]<='Z'){
			s[i]+=32;
		}
	}
}
int main(){
	int x=0,y=0;
	gets(a);
	gets(b);
	tolower(a);
	tolower(b);
	printf("%d\n",strcmp(a,b));
	return 0;
}
