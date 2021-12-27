#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[100];
		scanf("%s", &s);
		int len = strlen(s), flag = 1;
		if(len%2==1) flag = 0;
		else {
			for(int i=0;i<len/2;i++){
				if(s[i]!=s[(len/2)+i]){
					flag = 0;
					break;
				}
			}
		}
		printf("%s\n", flag?"YES":"NO");
	}
	return 0;
}
