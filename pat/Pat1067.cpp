#include<stdio.h>
#include<string.h>
int main(){
	char p[20],t[100];
	int n,count=0;
	scanf("%s %d",&p,&n);
	getchar();
	while(count<n){
		gets(t);
		if(strcmp(t,"#")==0){
			return 0;
		}else if(strcmp(p,t)==0){
			printf("Welcome in\n");
			return 0;
		}else{
			printf("Wrong password: %s\n",t);
		}
		count++; 
	}
	printf("Account locked\n");
	return 0;
}
