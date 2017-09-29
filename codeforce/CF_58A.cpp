#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int i,h,e,l1,l2,o;
	while(scanf("%s",&s)!=EOF){
		h=e=l1=l2=o=0;
		for(i=0;i<strlen(s);i++){
			if(s[i]=='h'){
				h=i;
				break;
			}
		}
		for(i+=1;i<strlen(s);i++){
			if(s[i]=='e'){
				e=i;
				break;
			}
		}
		for(i+=1;i<strlen(s);i++){
			if(s[i]=='l'){
				l1=i;
				break;
			}
		}
		for(i+=1;i<strlen(s);i++){
			if(s[i]=='l'){
				l2=i;
				break;
			}
		}
		for(i+=1;i<strlen(s);i++){
			if(s[i]=='o'){
				o=i;
				break;
			}
		}
		if(o>l2 && l2>l1 && l1>e && e>h){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
