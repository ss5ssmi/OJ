#include<stdio.h>
#include<string.h>
int main(){
	char l[1000];
	char s[1000];
	int sum,i,j,k,l1,l2;
	while(scanf("%s",&l)){
		if(strcmp(l,"#")==0){
			break;
		}
		scanf("%s",&s);
		l1=strlen(l);
		l2=strlen(s);
		sum=0;
		for(i=0,j=0,k=0;i<l1;i++){
			if(l[i]==s[j]){
				k++;j++;
			}else{
				j=0;k=0;
			}
			if(k==l2){
				sum++;j=0;k=0;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
