#include<stdio.h>
#include<string.h>
char s1[200000],s2[100000];
int main(){
	int n,i,j,l1,l2;
	while(gets(s1)){
		gets(s2);
		l1=strlen(s1);
		l2=strlen(s2);
		j=l1;
		for(i=0;i<l1;i++){
			s1[j++]=s1[i];
		}
		if(strstr(s1,s2))
			printf("yes\n");
		else
			printf("no\n");
	} 
	return 0;
} 
