#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[50];
		scanf("%s", &s);
		int len = strlen(s), cntn = 0, cnte = 0;
		for(int i=0;i<len;i++){
			if(s[i]=='N') cntn++;
			else cnte++;
		}
		if((s[len-1]=='E' && cntn==1) || (s[len-1]=='N' && cntn-1==0)) printf("NO\n");
		else printf("YES\n");
	}
} 
