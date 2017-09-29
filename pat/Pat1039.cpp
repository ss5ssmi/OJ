#include<stdio.h>
#include<string.h>
int main(){
	char s[1000],b[1000];
	int c,flag[1000]={0};
	scanf("%s",&s);
	scanf("%s",&b);
	c=strlen(b);
	for(int i=0;i<strlen(b);i++){
		for(int j=0;j<strlen(s);j++){
			if(s[j]==b[i]&&flag[j]==0){
				c--;
				flag[j]=1;
				break;
			}
		}
	}
	if(c>0){
		printf("No %d\n",c);
	}else{
		printf("Yes %d\n",strlen(s)-strlen(b));
	}
	return 0;
}
