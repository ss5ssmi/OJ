#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int count=1;
	scanf("%s",&s);
	for(int i=1;i<strlen(s);i++){
		if(s[i]==s[i-1]){
			count++;
			if(count>=7){
				printf("YES\n");
				return 0;				
			}
		}else{
			count=1;
		}
	}
	printf("NO\n");
	return 0;
} 
