#include<stdio.h>
#include<string.h>
typedef struct string{
	char s[30];
}stringa;
stringa g[1001];
int check(stringa s,int m){
	for(int i=1;i<=m;i++){
		if(strcmp(s.s,g[i].s)==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	stringa p[1001];
	
int m,n,s;
	scanf("%d%d%d",&m,&n,&s);
	for(int i=1;i<=m;i++){
		scanf("%s",&p[i]);
	}
	int j=1;
	for(int i=s;i<=m;){
		if(check(p[i],m)){
			g[j]=p[i];
			j++;
			i+=n;
		}else{
			i+=1;
		}
	}
	if(j!=1){
		for(int i=1;i<j;i++){
			printf("%s\n",g[i]);
		}
	}else{
		printf("Keep going...\n");
	}
	return 0;
}
