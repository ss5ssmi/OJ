#include<stdio.h> 
#include<string.h>
int main(){
	char s[1000];
	int i,n;
	while(scanf("%s",s)!=EOF){
		n=0;
		for(i=0;i<strlen(s);i++){
			if(s[i]=='(') n++;
			if(s[i]==')') n--;
			if(s[i]=='B') break;
		}
		printf("%d\n",n);
	}
	return 0;
}
