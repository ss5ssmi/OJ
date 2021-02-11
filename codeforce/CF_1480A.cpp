#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[51];
		scanf("%s", &s);
		for(int i=0; s[i]!='\0'; i++){
			if(i%2==0){
				for(int j=0;j<26;j++){
					if(s[i] != 'a'+j){
						s[i] = 'a'+j;
						break;
					}
				}
			}else{
				for(int j=25;j>=0;j--){
					if(s[i] != 'a'+j){
						s[i] = 'a'+j;
						break;
					}
				}
			}
		}
		printf("%s\n", s);
	}
	return 0;
} 
