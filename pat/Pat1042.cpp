#include<stdio.h>
#include<string.h>
int main(){
	char w[1000],maxc=0;
	int c[26]={0},max=0;
	gets(w);
	for(int i=0;i<strlen(w);i++){
		char ss=w[i];
		if(ss=='\0'){
			break;
		}
		if(ss>='A'&&ss<='Z')
			c[ss-'A']+=1;
		else if(ss>='a'&&ss<='z')
			c[ss-'a']+=1;
	}
	for(int i=0;i<26;i++){
		if(c[i]>max){
			max=c[i];
			maxc=i;
		}else if(c[i]==max){
			if(i<maxc){
				maxc=i;
				max=c[i];
			}
		}
	}
	printf("%c %d\n",'a'+maxc,max);
	return 0;
} 
