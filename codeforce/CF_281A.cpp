#include<stdio.h>
#include<string.h>
int main(){
	char s[1000];
	while(scanf("%s",&s)!=EOF){
		if(s[0]>='a' && s[0]<='z'){
			s[0]-=32;
		}
		printf("%s\n",s);
		memset(s,0,sizeof(s));
	}
	return 0;
}
