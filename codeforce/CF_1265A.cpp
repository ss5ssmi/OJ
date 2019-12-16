#include<stdio.h>
#include<string.h>
char c[3] = {'a','b','c'};
char fun(char t1, char t2, bool type){
	if(type == 0){
		return c[(t1 - 'a' + 1) % 3];
	}else{
		if(t1 != t2) return c[(3 - (t1-'a') - (t2 - 'a')) % 3]; else return c[(3 - (t1-'a') - (t2 - 'a') + 1) % 3];
	} 
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[100000] = {0};
		scanf("%s",&s);
		int len = strlen(s), flag = 1;
		for(int i=0;i<len-1;i++){
			if(s[i] == s[i+1] && s[i] != '?'){
				printf("-1\n");
				flag = 0;
				break;
			}
		}
		if(flag){
			for(int i=0;i<len;i++){
				if(s[i] != '?'){
					printf("%c",s[i]);
				}else{
					if(i == 0){
						s[i] = s[i+1] == '?' ? 'a' : fun(s[i+1], ' ', 0);
					}else if(i == len - 1){
						s[i] = fun(s[i-1], ' ', 0);
					}else{
						s[i] = s[i+1] == '?' ? fun(s[i-1], ' ', 0) : fun(s[i-1], s[i+1], 1);
					}
					printf("%c",s[i]);
				}
			}
			printf("\n");
		}
	}
}
