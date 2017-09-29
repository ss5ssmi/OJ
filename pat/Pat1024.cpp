#include<stdio.h>
#include<string.h>
int main(){
	char s[10000];
	scanf("%s",&s);
	int len=strlen(s);
	if(s[0]=='-'){
		printf("-");
	}
	
	int pose=0;
	for(int i=1;i<len;i++){
		if(s[i]=='E'){
			pose=i;
		}
	}
	
	int after=0;
	for(int i=pose+2;i<len;i++){
		after=(s[i]-'0')+after*10;
	}
	
	if(s[pose+1]=='-'){
		if(0<after){
			printf("0.");
			for(int i=1;i<after;i++){
				printf("0");
			}
			for(int i=1;i<pose;i++){
				if(s[i]>='0' && s[i]<='9'){
					printf("%c",s[i]);
				}
			}
		}else{
			for(int i=1;i<pose;i++){
				if(i==2-after){
					printf(".");
				}
				if(s[i]>='0' && s[i]<='9'){
					printf("%c",s[i]);
				}
			}
		}
	}else{
		if(pose-3<after){
			if(s[1]!='0'){
				printf("%c",s[1]);
			}
			for(int i=3;i<pose;i++){
				if(s[i]>='0' && s[i]<='9'){
					printf("%c",s[i]);
				}
			}
			for(int i=0;i<after-(pose-3);i++){
				printf("0");
			}
		}else{
			if(s[1]!='0'){
				printf("%c",s[1]);
			}
			for(int i=3;i<pose;i++){
				if(i==3+after){
					printf(".");
				}
				if(s[i]>='0' && s[i]<='9'){
					printf("%c",s[i]);
				}
			}
		}
	}
	
	return 0;
}
