#include<stdio.h>
#include<string.h>
int main(){
	char s[1000];
	int a[1000]={0},i,j,t;
	scanf("%s",&s);
	for(i=0;i<strlen(s);i++){
		t=s[i]-'0';
		a[t]++;
	}
	for(i=0;i<1000;i++){
		if(a[i]){
			printf("%d:%d\n",i,a[i]);
		}
	}
	return 0;
}
