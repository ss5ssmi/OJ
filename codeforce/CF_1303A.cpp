#include<stdio.h>
#include<string.h>
int main(){
	int t;
	char s[100];
	scanf("%d",&t);
	while(t--){
		scanf("%s",&s);
		int zero = 0, lflag = 0, left = 0, rflag = 0, right = 0, last1;
		for(int i=0;s[i]!='\0';i++){
			if(s[i]=='1') last1 = i;
		}
		for(int i=0;s[i]!='\0';i++){
			if(s[i]=='1'){
				lflag = 1;
				if(i==last1){
					rflag = 1;
				}
			} else{
				zero++;
				if(!lflag) left++;
				if(rflag) right++;
			}
		}
		printf("%d\n",zero-left-right);
	}
	return 0;
}
