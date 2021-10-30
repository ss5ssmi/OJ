#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[100] = "\0", tmp = 'z';
		int flag = 0;
		scanf("%s", &s);
		for(int i=0;s[i]!='\0';i++){
			if(s[i] != '\0' && s[i] < tmp){
				tmp = s[i], flag = i;
			}
		}
		printf("%c ", tmp);
		for(int i=0;s[i]!='\0';i++){
			if(i != flag) printf("%c", s[i]); 
		}
		printf("\n");
	}
	return 0;
}
