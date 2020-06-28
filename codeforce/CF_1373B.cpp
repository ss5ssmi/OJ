#include<stdio.h>
#include<string.h>
int min(int a, int b){return a<b?a:b;}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[100];
		int zero = 0, one = 0;
		scanf("%s", &s);
		for(int i=0;i<strlen(s);i++){
			if(s[i]=='0') zero++;
			else one++;
		}
		if(min(one, zero)%2==1) printf("DA\n");
		else printf("NET\n");
	}
	return 0;
}
