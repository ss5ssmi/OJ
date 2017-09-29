#include<stdio.h>
#include<string.h>
int main(){
	char s[100000];
	int c_pat=0,c_t=0,c_at=0;
	scanf("%s",&s);
	for(int i=strlen(s)-1;i>=0;i--){
		if(s[i]=='T'){
			c_t++;
		}
		if(s[i]=='A'){
			c_at=(c_at+c_t)%1000000007;
		}
		if(s[i]=='P'){
			c_pat=(c_pat+c_at)%1000000007;
		}
	}
	printf("%d\n",c_pat);
	return 0;
}
