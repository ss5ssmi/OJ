#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	while(scanf("%s",s)!=EOF){
		int flag=0;
		for(int i=0;i<strlen(s);i++){
			if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
				flag=1;
			}
		}
		if(flag){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
