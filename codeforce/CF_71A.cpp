#include<stdio.h>
#include<string.h>
int main(){
	int l,n;
	char w[100];
	scanf("%d",&n);
	while(n--){
		scanf("%s",w);
		if(strlen(w)<=10){
			printf("%s\n",w);
		}else{
			printf("%c%d%c\n",w[0],strlen(w)-2,w[strlen(w)-1]);
		}
	}
	return 0;
}
